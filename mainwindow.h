#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlQueryModel>
#include <QtSql/QSqlQuery>
#include <QRandomGenerator>
#include <QTableView>
#include <QDate>
#include <QVector>
#include <algorithm>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_button_Registration_clicked();

    void on_pushButton_CreateNewAcc_clicked();

    void on_button_EnterToProg_clicked();

    void on_pushButton_allPatients_onMain_clicked();

    void on_pushButton_addNewPatient_onListOfPatients_clicked();

    void on_pushButton_deletePatient_onListOfPatients_clicked();

    void on_tableView_listOfPatients_clicked(const QModelIndex &index);

    void on_pushButton_backFromNewAcc_clicked();

    void on_pushButton_backFromNewAppointment_clicked();

    void on_pushButton_backFromAllPatients_clicked();

    void on_pushButton_newAppointment_onMain_clicked();

    void on_pushButton_findByFilter_onPatientsList_clicked();

    void on_pushButton_clearFilter_onPatientsList_clicked();

    void on_pushButton_findIDByFilter_onNewAppointment_clicked();

    void on_calendarWidget_selectionChanged();

    void on_pushButton_createAppointment_clicked();

    void on_comboBox_chooseDoctor_onNewAppoinmet_activated();

    void on_comboBox_chooseTime_onNewAppoinmet_activated();

    void on_pushButton_allAppointments_onMain_clicked();

    void on_pushButton_deleteAppointment_onAllAppointments_clicked();

    void on_tableView_allAppointments_clicked(const QModelIndex &index);

    void on_pushButton_backFromAllAppointments_clicked();

    void on_pushButton_findByID_onAllAppointments_clicked();

    void on_pushButton_clearFilter_onAllAppointments_clicked();

    void on_pushButton_toMedicalHistory_onListOfPatients_clicked();

    void on_pushButton_saveMedicalHistory_onMedicalHistory_clicked();

    void on_pushButton_fromMedicalHistoryBack_clicked();


private:
    Ui::MainWindow *ui;

    void setDatabase();
    void setTableModel(QString const &table);
    void setUiTableModel_AllPatients();
    void setUiTableModel_findID_onNewAppointemts();
    void setUiTableModel_allAppointments();
    void checkIsAppoinmentAvailable();
    void paintingCalendar();
    void setLineEditsData_onNewAppointment();
    void findPreviousDates();
    void clearPreviousDatesAppointments();
    void setAllNotAvailableAppointments();
    void changeAppointmentTimeDateValues();
    void findByFilter(QString const &name);

    QSqlDatabase db;
    QSqlTableModel *tableModel;
    bool isAnyTableViewActivated = false;
    int currentRowlistOfAppointments, currentRowListOfPatients;
    QDate selectedDate, currentDate;
    QString currentDateString, patientID, chosenDoctor,chosenTime,selectedPatientID, selectedDateString;
    bool isAppointmentAvailable, isAppointmentAdded;
    QVector<QDate>appointemtsNotAvailableDates, previousAppointmentDates;
};
#endif // MAINWINDOW_H
