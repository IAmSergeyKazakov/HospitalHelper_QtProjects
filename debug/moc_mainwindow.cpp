/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_button_Registration_clicked",
    "",
    "on_pushButton_CreateNewAcc_clicked",
    "on_button_EnterToProg_clicked",
    "on_pushButton_allPatients_onMain_clicked",
    "on_pushButton_addNewPatient_onListOfPatients_clicked",
    "on_pushButton_deletePatient_onListOfPatients_clicked",
    "on_tableView_listOfPatients_clicked",
    "QModelIndex",
    "index",
    "on_pushButton_backFromNewAcc_clicked",
    "on_pushButton_backFromNewAppointment_clicked",
    "on_pushButton_backFromAllPatients_clicked",
    "on_pushButton_newAppointment_onMain_clicked",
    "on_pushButton_findByFilter_onPatientsList_clicked",
    "on_pushButton_clearFilter_onPatientsList_clicked",
    "on_pushButton_findIDByFilter_onNewAppointment_clicked",
    "on_calendarWidget_selectionChanged",
    "on_pushButton_createAppointment_clicked",
    "on_comboBox_chooseDoctor_onNewAppoinmet_activated",
    "on_comboBox_chooseTime_onNewAppoinmet_activated",
    "on_pushButton_allAppointments_onMain_clicked",
    "on_pushButton_deleteAppointment_onAllAppointments_clicked",
    "on_tableView_allAppointments_clicked",
    "on_pushButton_backFromAllAppointments_clicked",
    "on_pushButton_findByID_onAllAppointments_clicked",
    "on_pushButton_clearFilter_onAllAppointments_clicked",
    "on_pushButton_toMedicalHistory_onListOfPatients_clicked",
    "on_pushButton_saveMedicalHistory_onMedicalHistory_clicked",
    "on_pushButton_fromMedicalHistoryBack_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[62];
    char stringdata0[11];
    char stringdata1[31];
    char stringdata2[1];
    char stringdata3[35];
    char stringdata4[30];
    char stringdata5[41];
    char stringdata6[53];
    char stringdata7[53];
    char stringdata8[36];
    char stringdata9[12];
    char stringdata10[6];
    char stringdata11[37];
    char stringdata12[45];
    char stringdata13[42];
    char stringdata14[44];
    char stringdata15[50];
    char stringdata16[49];
    char stringdata17[54];
    char stringdata18[35];
    char stringdata19[40];
    char stringdata20[50];
    char stringdata21[48];
    char stringdata22[45];
    char stringdata23[58];
    char stringdata24[37];
    char stringdata25[46];
    char stringdata26[49];
    char stringdata27[52];
    char stringdata28[56];
    char stringdata29[58];
    char stringdata30[45];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 30),  // "on_button_Registration_clicked"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 34),  // "on_pushButton_CreateNewAcc_cl..."
        QT_MOC_LITERAL(78, 29),  // "on_button_EnterToProg_clicked"
        QT_MOC_LITERAL(108, 40),  // "on_pushButton_allPatients_onM..."
        QT_MOC_LITERAL(149, 52),  // "on_pushButton_addNewPatient_o..."
        QT_MOC_LITERAL(202, 52),  // "on_pushButton_deletePatient_o..."
        QT_MOC_LITERAL(255, 35),  // "on_tableView_listOfPatients_c..."
        QT_MOC_LITERAL(291, 11),  // "QModelIndex"
        QT_MOC_LITERAL(303, 5),  // "index"
        QT_MOC_LITERAL(309, 36),  // "on_pushButton_backFromNewAcc_..."
        QT_MOC_LITERAL(346, 44),  // "on_pushButton_backFromNewAppo..."
        QT_MOC_LITERAL(391, 41),  // "on_pushButton_backFromAllPati..."
        QT_MOC_LITERAL(433, 43),  // "on_pushButton_newAppointment_..."
        QT_MOC_LITERAL(477, 49),  // "on_pushButton_findByFilter_on..."
        QT_MOC_LITERAL(527, 48),  // "on_pushButton_clearFilter_onP..."
        QT_MOC_LITERAL(576, 53),  // "on_pushButton_findIDByFilter_..."
        QT_MOC_LITERAL(630, 34),  // "on_calendarWidget_selectionCh..."
        QT_MOC_LITERAL(665, 39),  // "on_pushButton_createAppointme..."
        QT_MOC_LITERAL(705, 49),  // "on_comboBox_chooseDoctor_onNe..."
        QT_MOC_LITERAL(755, 47),  // "on_comboBox_chooseTime_onNewA..."
        QT_MOC_LITERAL(803, 44),  // "on_pushButton_allAppointments..."
        QT_MOC_LITERAL(848, 57),  // "on_pushButton_deleteAppointme..."
        QT_MOC_LITERAL(906, 36),  // "on_tableView_allAppointments_..."
        QT_MOC_LITERAL(943, 45),  // "on_pushButton_backFromAllAppo..."
        QT_MOC_LITERAL(989, 48),  // "on_pushButton_findByID_onAllA..."
        QT_MOC_LITERAL(1038, 51),  // "on_pushButton_clearFilter_onA..."
        QT_MOC_LITERAL(1090, 55),  // "on_pushButton_toMedicalHistor..."
        QT_MOC_LITERAL(1146, 57),  // "on_pushButton_saveMedicalHist..."
        QT_MOC_LITERAL(1204, 44)   // "on_pushButton_fromMedicalHist..."
    },
    "MainWindow",
    "on_button_Registration_clicked",
    "",
    "on_pushButton_CreateNewAcc_clicked",
    "on_button_EnterToProg_clicked",
    "on_pushButton_allPatients_onMain_clicked",
    "on_pushButton_addNewPatient_onListOfPatients_clicked",
    "on_pushButton_deletePatient_onListOfPatients_clicked",
    "on_tableView_listOfPatients_clicked",
    "QModelIndex",
    "index",
    "on_pushButton_backFromNewAcc_clicked",
    "on_pushButton_backFromNewAppointment_clicked",
    "on_pushButton_backFromAllPatients_clicked",
    "on_pushButton_newAppointment_onMain_clicked",
    "on_pushButton_findByFilter_onPatientsList_clicked",
    "on_pushButton_clearFilter_onPatientsList_clicked",
    "on_pushButton_findIDByFilter_onNewAppointment_clicked",
    "on_calendarWidget_selectionChanged",
    "on_pushButton_createAppointment_clicked",
    "on_comboBox_chooseDoctor_onNewAppoinmet_activated",
    "on_comboBox_chooseTime_onNewAppoinmet_activated",
    "on_pushButton_allAppointments_onMain_clicked",
    "on_pushButton_deleteAppointment_onAllAppointments_clicked",
    "on_tableView_allAppointments_clicked",
    "on_pushButton_backFromAllAppointments_clicked",
    "on_pushButton_findByID_onAllAppointments_clicked",
    "on_pushButton_clearFilter_onAllAppointments_clicked",
    "on_pushButton_toMedicalHistory_onListOfPatients_clicked",
    "on_pushButton_saveMedicalHistory_onMedicalHistory_clicked",
    "on_pushButton_fromMedicalHistoryBack_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  176,    2, 0x08,    1 /* Private */,
       3,    0,  177,    2, 0x08,    2 /* Private */,
       4,    0,  178,    2, 0x08,    3 /* Private */,
       5,    0,  179,    2, 0x08,    4 /* Private */,
       6,    0,  180,    2, 0x08,    5 /* Private */,
       7,    0,  181,    2, 0x08,    6 /* Private */,
       8,    1,  182,    2, 0x08,    7 /* Private */,
      11,    0,  185,    2, 0x08,    9 /* Private */,
      12,    0,  186,    2, 0x08,   10 /* Private */,
      13,    0,  187,    2, 0x08,   11 /* Private */,
      14,    0,  188,    2, 0x08,   12 /* Private */,
      15,    0,  189,    2, 0x08,   13 /* Private */,
      16,    0,  190,    2, 0x08,   14 /* Private */,
      17,    0,  191,    2, 0x08,   15 /* Private */,
      18,    0,  192,    2, 0x08,   16 /* Private */,
      19,    0,  193,    2, 0x08,   17 /* Private */,
      20,    0,  194,    2, 0x08,   18 /* Private */,
      21,    0,  195,    2, 0x08,   19 /* Private */,
      22,    0,  196,    2, 0x08,   20 /* Private */,
      23,    0,  197,    2, 0x08,   21 /* Private */,
      24,    1,  198,    2, 0x08,   22 /* Private */,
      25,    0,  201,    2, 0x08,   24 /* Private */,
      26,    0,  202,    2, 0x08,   25 /* Private */,
      27,    0,  203,    2, 0x08,   26 /* Private */,
      28,    0,  204,    2, 0x08,   27 /* Private */,
      29,    0,  205,    2, 0x08,   28 /* Private */,
      30,    0,  206,    2, 0x08,   29 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_button_Registration_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_CreateNewAcc_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_EnterToProg_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_allPatients_onMain_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_addNewPatient_onListOfPatients_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_deletePatient_onListOfPatients_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableView_listOfPatients_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_pushButton_backFromNewAcc_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_backFromNewAppointment_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_backFromAllPatients_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_newAppointment_onMain_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_findByFilter_onPatientsList_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clearFilter_onPatientsList_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_findIDByFilter_onNewAppointment_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_calendarWidget_selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_createAppointment_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_comboBox_chooseDoctor_onNewAppoinmet_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_comboBox_chooseTime_onNewAppoinmet_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_allAppointments_onMain_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_deleteAppointment_onAllAppointments_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableView_allAppointments_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_pushButton_backFromAllAppointments_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_findByID_onAllAppointments_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clearFilter_onAllAppointments_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_toMedicalHistory_onListOfPatients_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_saveMedicalHistory_onMedicalHistory_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_fromMedicalHistoryBack_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_button_Registration_clicked(); break;
        case 1: _t->on_pushButton_CreateNewAcc_clicked(); break;
        case 2: _t->on_button_EnterToProg_clicked(); break;
        case 3: _t->on_pushButton_allPatients_onMain_clicked(); break;
        case 4: _t->on_pushButton_addNewPatient_onListOfPatients_clicked(); break;
        case 5: _t->on_pushButton_deletePatient_onListOfPatients_clicked(); break;
        case 6: _t->on_tableView_listOfPatients_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 7: _t->on_pushButton_backFromNewAcc_clicked(); break;
        case 8: _t->on_pushButton_backFromNewAppointment_clicked(); break;
        case 9: _t->on_pushButton_backFromAllPatients_clicked(); break;
        case 10: _t->on_pushButton_newAppointment_onMain_clicked(); break;
        case 11: _t->on_pushButton_findByFilter_onPatientsList_clicked(); break;
        case 12: _t->on_pushButton_clearFilter_onPatientsList_clicked(); break;
        case 13: _t->on_pushButton_findIDByFilter_onNewAppointment_clicked(); break;
        case 14: _t->on_calendarWidget_selectionChanged(); break;
        case 15: _t->on_pushButton_createAppointment_clicked(); break;
        case 16: _t->on_comboBox_chooseDoctor_onNewAppoinmet_activated(); break;
        case 17: _t->on_comboBox_chooseTime_onNewAppoinmet_activated(); break;
        case 18: _t->on_pushButton_allAppointments_onMain_clicked(); break;
        case 19: _t->on_pushButton_deleteAppointment_onAllAppointments_clicked(); break;
        case 20: _t->on_tableView_allAppointments_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 21: _t->on_pushButton_backFromAllAppointments_clicked(); break;
        case 22: _t->on_pushButton_findByID_onAllAppointments_clicked(); break;
        case 23: _t->on_pushButton_clearFilter_onAllAppointments_clicked(); break;
        case 24: _t->on_pushButton_toMedicalHistory_onListOfPatients_clicked(); break;
        case 25: _t->on_pushButton_saveMedicalHistory_onMedicalHistory_clicked(); break;
        case 26: _t->on_pushButton_fromMedicalHistoryBack_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 27;
    }
    return _id;
}
QT_WARNING_POP
