#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    currentDate = QDate::currentDate();
    ui->stackedWidget->setCurrentIndex(0);
    setDatabase();

}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
    delete tableModel;
    tableModel = nullptr;
}

void MainWindow::setDatabase()
{
    db = QSqlDatabase::addDatabase("QSQLITE", "SQLITE");
    db.setDatabaseName("HospitalHelper.db");
}
void MainWindow::setUiTableModel_AllPatients()
{
    ui->tableView_listOfPatients->setModel(tableModel);
    tableModel->select();
}
void MainWindow::setUiTableModel_findID_onNewAppointemts()
{
    ui->tableView_onNewAppointment->setModel(tableModel);
    ui->tableView_onNewAppointment->hideColumn(2);
    ui->tableView_onNewAppointment->hideColumn(3);
    tableModel->select();

}
void MainWindow::setUiTableModel_allAppointments()
{
    ui->tableView_allAppointments->setModel(tableModel);
    tableModel->select();
}
void MainWindow::setTableModel(QString const &table)
{
    setDatabase();
    if(db.open()){
        tableModel = new QSqlTableModel(this,db);
        tableModel->setTable(table);
    }
}

void MainWindow::on_button_Registration_clicked() {
    ui->statusbar->clearMessage();
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_CreateNewAcc_clicked()
{

    QString name, pass, confirmPass;
    name = ui->lineEdit_regName->text();
    pass = ui->lineEdit_regPass->text();
    confirmPass = ui->lineEdit_regConfirmPass->text();
    setDatabase();
    QSqlQuery query(db);

    if (db.open())
    {
        if (!name.isEmpty() || !pass.isEmpty() || !confirmPass.isEmpty())
        {
            if (name[0] != ' ' && pass.size() > 5 && pass[0] != ' ' && pass == confirmPass)
            {
                query.prepare("INSERT INTO users (name, password) VALUES (?, ?)");
                query.addBindValue(name);query.addBindValue(pass);

                if (!query.exec())
                    ui->statusbar->showMessage("Такое имя уже есть, придумайте новое.");
                else
                    ui->statusbar->showMessage("Успешно!");
            }

            else if (pass != confirmPass)
                ui->statusbar->showMessage("Пароли разные. Попробуйте еще раз");

            else if (pass.size() <= 5)
                ui->statusbar->showMessage("Пароль должен состоять минимум из 6 символов.");

            else if (pass[0] == ' ' || name[0] == ' ')
                ui->statusbar->showMessage("Пароль и имя не могут начинаться с пробела.");
        }
        else
        {
            ui->statusbar->showMessage("Некорректные данные");
        }
    }
}



void MainWindow::on_button_EnterToProg_clicked()
{
    ui->statusbar->clearMessage();
    QString name,pass, rightAns;
    QString id;
    name = ui->lineEdit_name->text();
    pass = ui->lineEdit_password->text();
    setDatabase();
    QSqlQuery queryID(db);
    QSqlQuery queryPassword(db);
    if (db.open())
    {
        queryID.prepare("SELECT id FROM users WHERE name = " + QString("\""+name+"\""));
        queryID.exec();

        while (queryID.next())
            id = queryID.value(0).toString();

        queryPassword.prepare("SELECT password FROM users WHERE id = " + id);
        queryPassword.exec();

        while (queryPassword.next())
            rightAns = queryPassword.value(0).toString();

        if (pass == rightAns && (name.size()>0 || pass.size()>0) && pass.size()>0){
            ui->label_GreetingsOnMain->setText("Здравствуйте, "+name+".");
            ui->stackedWidget->setCurrentIndex(2);
        }

        else
            ui->statusbar->showMessage("Неправильное имя или пароль");

    }
}


void MainWindow::on_pushButton_allPatients_onMain_clicked()
{
    ui->statusbar->clearMessage();
    isAnyTableViewActivated = false;
    setTableModel("_patients");
    setUiTableModel_AllPatients();
    ui->tableView_listOfPatients->hideColumn(2);ui->tableView_listOfPatients->hideColumn(3);
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_addNewPatient_onListOfPatients_clicked()
{
    QString name;
    name = QString(ui->lineEdit_addName_onListOfPatients->text());
    setDatabase();
    QSqlQuery query(db);

    if (db.open() && name.size()>0 && name[0] != ' ')
    {
        query.prepare("INSERT INTO _patients (Имя) VALUES (?)");
        query.addBindValue(name);
        query.exec();
        setTableModel("_patients");
        setUiTableModel_AllPatients();
    }
}


void MainWindow::on_pushButton_deletePatient_onListOfPatients_clicked()
{
    setTableModel("_patients");
    setUiTableModel_AllPatients();

    QSqlQuery query(db);

    if(db.open() && isAnyTableViewActivated ){
        query.exec("DELETE FROM _patients WHERE id = " +QString(selectedPatientID));
        setTableModel("_patients");
        setUiTableModel_AllPatients();
    }
    isAnyTableViewActivated = false;
}

void MainWindow::on_tableView_listOfPatients_clicked(const QModelIndex &index)
{
    isAnyTableViewActivated = true;
    currentRowListOfPatients = index.row();
    QModelIndex idIndexListOfPatients = tableModel->index(currentRowListOfPatients, 0, QModelIndex());
    selectedPatientID = ui->tableView_listOfPatients->model()->data(idIndexListOfPatients).toString();
}

void MainWindow::on_pushButton_backFromNewAcc_clicked(){
    ui->statusbar->clearMessage();
    ui->stackedWidget->setCurrentIndex(0);
    ui->lineEdit_name->clear();
    ui->lineEdit_password->clear();
}

void MainWindow::on_pushButton_backFromNewAppointment_clicked(){ui->stackedWidget->setCurrentIndex(2); ui->statusbar->clearMessage();}
void MainWindow::on_pushButton_backFromAllPatients_clicked(){ui->stackedWidget->setCurrentIndex(2); ui->statusbar->clearMessage();}

void MainWindow::setLineEditsData_onNewAppointment()
{
    patientID = ui->lineEdit_userID_onNewAppoinmet->text();
    chosenDoctor = ui->comboBox_chooseDoctor_onNewAppoinmet->currentText();
    chosenTime = ui->comboBox_chooseTime_onNewAppoinmet->currentText();
}


void MainWindow::on_pushButton_newAppointment_onMain_clicked()
{
    ui->statusbar->clearMessage();
    isAnyTableViewActivated = false;
    setDatabase();
    setLineEditsData_onNewAppointment();
    paintingCalendar();
    findPreviousDates();
    for (const QDate &date : previousAppointmentDates) {
        ui->calendarWidget->setDateTextFormat(date, {});
    }
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_findByFilter_onPatientsList_clicked()
{   

    QString name = ui->lineEdit_filterName_onPatientsList->text();
    setDatabase();
    setTableModel("_patients");
    setUiTableModel_AllPatients();
    if(db.open())
        findByFilter(name);
}

void MainWindow::on_pushButton_clearFilter_onPatientsList_clicked()
{
    setTableModel("_patients");
    setUiTableModel_AllPatients();
    ui->lineEdit_filterName_onPatientsList->clear();
}

void MainWindow::on_pushButton_findIDByFilter_onNewAppointment_clicked()
{
    QString name = ui->lineEdit_findIDFilter_onNewAppointment->text();
    setDatabase();
    setTableModel("_patients");
    setUiTableModel_findID_onNewAppointemts();
    if(db.open())
        findByFilter(name);
}

void MainWindow::findByFilter(QString const &name)
{
    tableModel->setFilter("Имя = " + QString(" '") + name + QString("'"));
    tableModel->select();
}

void MainWindow::on_calendarWidget_selectionChanged()
{
    selectedDate = ui->calendarWidget->selectedDate();
    selectedDateString = selectedDate.toString("dd.MM.yyyy");
    ui->label_chooseDate_onNewAppointment->setText(selectedDateString);
}

void MainWindow::on_pushButton_createAppointment_clicked()
{
    setLineEditsData_onNewAppointment();
    checkIsAppoinmentAvailable();
    setDatabase();
    QString patientIdInDb;
    QSqlQuery queryID(db);
    if (db.open()){
        queryID.prepare("SELECT id FROM _patients WHERE id = " + patientID);
        qDebug()<<"SELECT id FROM _patients WHERE id =" + patientID;
        queryID.exec();
        while (queryID.next())
        {
            patientIdInDb = queryID.value(0).toString();
        }
    }
    qDebug()<<patientIdInDb;
    QSqlQuery queryInsertIntoAppointments(db);
    if (db.open() && patientID.size()>0 && isAppointmentAvailable && patientIdInDb==patientID && selectedDate >= currentDate ){
        queryInsertIntoAppointments.prepare("INSERT INTO _appointments (Пациент, Специалист, Время, Дата) VALUES (?, ?, ?, ?)");

        queryInsertIntoAppointments.addBindValue(patientID);queryInsertIntoAppointments.addBindValue(chosenDoctor);
        queryInsertIntoAppointments.addBindValue(chosenTime);queryInsertIntoAppointments.addBindValue(selectedDateString);

        queryInsertIntoAppointments.exec();
        isAppointmentAdded = true;
    }
    else if(patientIdInDb!=patientID){
        ui->statusbar->showMessage("Такого пациента нет");
    }
    else if(selectedDate<currentDate){
        ui->statusbar->showMessage("Некорректная дата");
    }
    else if (patientID.size() == 0){
        ui->statusbar->showMessage("Введите ID пациента");
    }
    paintingCalendar();

}

void MainWindow::checkIsAppoinmentAvailable()
{

    setDatabase();
    QSqlQuery query(db);
    QString appointmentId = "Available";
    if (db.open()){
        query.prepare("SELECT Пациент FROM _appointments WHERE Специалист = " + QString("'") + chosenDoctor +QString("'") +"AND Время =  "+ QString("'") +chosenTime+ QString("'") + "AND Дата = " +QString("'") +selectedDateString+QString("'"));
        qDebug()<<"SELECT id FROM _appointments WHERE Специалист = " + QString("'") + chosenDoctor +QString("'") +"AND Время =  "+ QString("'") +chosenTime+ QString("'") + "AND Дата = " +QString("'") +selectedDateString+QString("'");
        query.exec();
        while (query.next())
        {
            appointmentId = query.value(0).toString();
        }
    }

    if (appointmentId!="Available"){
        ui->statusbar->showMessage("Данная запись уже занята");
        isAppointmentAvailable = false;
    }
    else{
        ui->statusbar->showMessage("Успешно");
        isAppointmentAvailable = true;
    }
}

void MainWindow::paintingCalendar()
{
    QDate date;
    QString dateString;

    QTextCharFormat format;

    setDatabase();
    QSqlQuery query(db);
        if (db.open())
        {
            query.prepare("SELECT Дата FROM _appointments WHERE Специалист = " + QString("'") + chosenDoctor +QString("'") +" AND Время =  "+ QString("'") +chosenTime + QString("'"));
            query.exec();
            while (query.next())
            {
                dateString = query.value(0).toString();
                dateString.replace('.','-');
                date = QDate::fromString(dateString,"dd-MM-yyyy");
                format.setBackground(Qt::red);
                ui->calendarWidget->setDateTextFormat(date, format);
                appointemtsNotAvailableDates.push_back(date);
            }
        }

}

void MainWindow::changeAppointmentTimeDateValues()
{
    for (const QDate &date : appointemtsNotAvailableDates) {
        ui->calendarWidget->setDateTextFormat(date, {});
    }
    appointemtsNotAvailableDates.clear();
    setLineEditsData_onNewAppointment();
    paintingCalendar();
}

void MainWindow::on_comboBox_chooseDoctor_onNewAppoinmet_activated()
{
    changeAppointmentTimeDateValues();
}


void MainWindow::on_comboBox_chooseTime_onNewAppoinmet_activated()
{
    changeAppointmentTimeDateValues();
}


void MainWindow::on_pushButton_allAppointments_onMain_clicked()
{
    ui->statusbar->clearMessage();
    clearPreviousDatesAppointments();
    setTableModel("_appointments");
    setUiTableModel_allAppointments();
    ui->tableView_allAppointments->hideColumn(0);
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButton_deleteAppointment_onAllAppointments_clicked()
{

    setTableModel("_appointments");
    setUiTableModel_allAppointments();
    QModelIndex idIndexListOfAppointments = tableModel->index(currentRowlistOfAppointments, 0, QModelIndex());
    QString idIndex = ui->tableView_allAppointments->model()->data(idIndexListOfAppointments).toString();

    QModelIndex IndexDate = tableModel->index(currentRowlistOfAppointments, 4, QModelIndex());
    QString Date = ui->tableView_allAppointments->model()->data(IndexDate).toString();

    qDebug()<<Date;
    QSqlQuery qryforbasket(db);

    qDebug()<<isAnyTableViewActivated;
    if(db.open() && isAnyTableViewActivated){
        qryforbasket.exec("DELETE FROM _appointments WHERE id = " +QString(idIndex));
        setTableModel("_appointments");
        setUiTableModel_allAppointments();
        ui->calendarWidget->setDateTextFormat(QDate::fromString(Date,"dd-MM-yyyy"), {});
    }
    isAnyTableViewActivated = false;
}

void MainWindow::on_tableView_allAppointments_clicked(const QModelIndex &index)
{
    isAnyTableViewActivated = true;
    currentRowlistOfAppointments = index.row();
}


void MainWindow::on_pushButton_backFromAllAppointments_clicked()
{
    ui->statusbar->clearMessage();
    ui->stackedWidget->setCurrentIndex(2);
    isAnyTableViewActivated = false;
}



void MainWindow::on_pushButton_findByID_onAllAppointments_clicked()
{
    QString patientID = ui->lineEdit_filterByID_onAllAppointments->text();
    setDatabase();

    if (db.open())
    {
        setTableModel("_appointments");
        setUiTableModel_allAppointments();
        tableModel->setFilter("Пациент = " + patientID);
        tableModel->select();
    }
}


void MainWindow::on_pushButton_clearFilter_onAllAppointments_clicked()
{
    setTableModel("_appointments");
    setUiTableModel_allAppointments();
    ui->lineEdit_filterByID_onAllAppointments->clear();
}


void MainWindow::on_pushButton_toMedicalHistory_onListOfPatients_clicked()
{
    ui->statusbar->clearMessage();
    QString medicalHistory, diagnosis, name;
    setDatabase();
    QSqlQuery queryMedicalHistory(db);QSqlQuery queryDiagnosis(db);QSqlQuery queryName(db);

    if (db.open() && isAnyTableViewActivated)
    {
        queryMedicalHistory.prepare("SELECT MedicalHistory FROM _patients WHERE id = "+selectedPatientID);
        queryMedicalHistory.exec();
        queryDiagnosis.prepare("SELECT diagnosis FROM _patients WHERE id = "+selectedPatientID);
        queryDiagnosis.exec();
        queryName.prepare("SELECT Имя FROM _patients WHERE id = "+selectedPatientID);
        queryName.exec();

        while (queryMedicalHistory.next() && queryDiagnosis.next() && queryName.next())
        {
            medicalHistory = queryMedicalHistory.value(0).toString();
            diagnosis = queryDiagnosis.value(0).toString();
            name = queryName.value(0).toString();
        }

        ui->plainTextEdit->clear();
        ui->label_patientName_onMedicalHistory->setText(name);
        ui->label_patientID_onMedicalHistory->setText(selectedPatientID);
        ui->lineEdit_diagnosisName_onMedicalHistory->setText(diagnosis);
        ui->plainTextEdit->appendPlainText(medicalHistory);
        ui->stackedWidget->setCurrentIndex(6);
    }

    else if(!isAnyTableViewActivated)
        ui->statusbar->showMessage("Для просмотра истории болезни,  выделите нужного пациента.");
}


void MainWindow::on_pushButton_saveMedicalHistory_onMedicalHistory_clicked()
{

    QString medicalHistory = ui->plainTextEdit->toPlainText();
    QString diagnosis = ui->lineEdit_diagnosisName_onMedicalHistory->text();
    setDatabase();
    QSqlQuery query(db);
    QSqlQuery query2(db);
    qDebug()<<selectedPatientID;
    if (db.open())
    {
        query.prepare("UPDATE _patients SET MedicalHistory = " + QString("'") + medicalHistory + QString("'") + " WHERE id = "+selectedPatientID);
        qDebug()<<"UPDATE _patients SET MedicalHistory = " + QString("'") + medicalHistory + QString("'") + " WHERE id = "+selectedPatientID;
        query.exec();
        query2.prepare("UPDATE _patients SET diagnosis = " + QString("'") + diagnosis + QString("'") + " WHERE id = "+selectedPatientID);
        query2.exec();
        ui->statusbar->showMessage("Успешно!");
    }

}


void MainWindow::on_pushButton_fromMedicalHistoryBack_clicked()
{
    ui->statusbar->clearMessage();
    setTableModel("_patients");
    setUiTableModel_AllPatients();
    ui->tableView_listOfPatients->hideColumn(2);ui->tableView_listOfPatients->hideColumn(3);
    isAnyTableViewActivated = false;
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::findPreviousDates()
{
    for (const QDate &date : appointemtsNotAvailableDates)
        if (date<currentDate){
            previousAppointmentDates.push_back(date);
        }
}

void MainWindow::clearPreviousDatesAppointments()
{
    setAllNotAvailableAppointments();
    qDebug()<<appointemtsNotAvailableDates.size();

    findPreviousDates();
    setDatabase();
    QSqlQuery query(db);QSqlQuery query2(db);
    QString deletedDate;
    if (db.open()){

        for (const QDate &date : previousAppointmentDates){
            qDebug()<<date.toString("dd.MM.yyyy");
            query.prepare("SELECT id FROM _appointments WHERE Дата = " +QString("'")+date.toString("dd.MM.yyyy")+QString("'"));
            query.exec();
            while (query.next()){
                deletedDate = query.value(0).toString();
                query2.exec("DELETE FROM _appointments WHERE id = " + deletedDate);
            }
        }
    }
}

void MainWindow::setAllNotAvailableAppointments()
{
    setDatabase();
    QSqlQuery query(db);
    QString date;
    if (db.open())
    {
        query.exec("SELECT Дата FROM _appointments");
        while (query.next()){
            date = query.value(0).toString();
            qDebug()<<date;
            appointemtsNotAvailableDates.push_back(QDate::fromString(date,"dd.MM.yyyy"));
        }
    }
}
