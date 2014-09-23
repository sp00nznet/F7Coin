/****************************************************************************
** Meta object code from reading C++ file 'bitcoingui.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/bitcoingui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bitcoingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BitcoinGUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   34,   40,   40, 0x0a,
      41,   63,   40,   40, 0x0a,
      82,  102,   40,   40, 0x0a,
     118,  143,   40,   40, 0x0a,
     150,  178,   40,   40, 0x0a,
     198,  219,   40,   40, 0x0a,
     239,  258,   40,   40, 0x0a,
     265,  290,   40,   40, 0x0a,
     295,   40,   40,   40, 0x2a,
     313,   40,   40,   40, 0x08,
     332,   40,   40,   40, 0x08,
     349,   40,   40,   40, 0x08,
     367,   40,   40,   40, 0x08,
     389,   40,   40,   40, 0x08,
     412,   40,   40,   40, 0x08,
     432,   40,   40,   40, 0x08,
     449,   40,   40,   40, 0x08,
     464,  505,   40,   40, 0x08,
     522,  143,   40,   40, 0x08,
     542,   40,   40,   40, 0x08,
     557,   40,   40,   40, 0x08,
     576,   40,   40,   40, 0x08,
     592,   40,   40,   40, 0x08,
     607,  635,   40,   40, 0x08,
     649,   40,   40,   40, 0x28,
     673,   40,   40,   40, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BitcoinGUI[] = {
    "BitcoinGUI\0setNumConnections(int)\0"
    "count\0\0setNumBlocks(int,int)\0"
    "count,countOfPeers\0setMining(bool,int)\0"
    "mining,hashrate\0setEncryptionStatus(int)\0"
    "status\0error(QString,QString,bool)\0"
    "title,message,modal\0askFee(qint64,bool*)\0"
    "nFeeRequired,payFee\0handleURI(QString)\0"
    "strURI\0gotoMessagePage(QString)\0addr\0"
    "gotoMessagePage()\0gotoOverviewPage()\0"
    "gotoMiningPage()\0gotoHistoryPage()\0"
    "gotoAddressBookPage()\0gotoReceiveCoinsPage()\0"
    "gotoSendCoinsPage()\0optionsClicked()\0"
    "aboutClicked()\0incomingTransaction(QModelIndex,int,int)\0"
    "parent,start,end\0encryptWallet(bool)\0"
    "backupWallet()\0changePassphrase()\0"
    "verifyMessage()\0unlockWallet()\0"
    "showNormalIfMinimized(bool)\0fToggleHidden\0"
    "showNormalIfMinimized()\0toggleHidden()\0"
};

void BitcoinGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BitcoinGUI *_t = static_cast<BitcoinGUI *>(_o);
        switch (_id) {
        case 0: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setMining((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->setEncryptionStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 5: _t->askFee((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 6: _t->handleURI((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->gotoMessagePage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->gotoMessagePage(); break;
        case 9: _t->gotoOverviewPage(); break;
        case 10: _t->gotoMiningPage(); break;
        case 11: _t->gotoHistoryPage(); break;
        case 12: _t->gotoAddressBookPage(); break;
        case 13: _t->gotoReceiveCoinsPage(); break;
        case 14: _t->gotoSendCoinsPage(); break;
        case 15: _t->optionsClicked(); break;
        case 16: _t->aboutClicked(); break;
        case 17: _t->incomingTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 18: _t->encryptWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->backupWallet(); break;
        case 20: _t->changePassphrase(); break;
        case 21: _t->verifyMessage(); break;
        case 22: _t->unlockWallet(); break;
        case 23: _t->showNormalIfMinimized((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->showNormalIfMinimized(); break;
        case 25: _t->toggleHidden(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BitcoinGUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BitcoinGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BitcoinGUI,
      qt_meta_data_BitcoinGUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BitcoinGUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BitcoinGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BitcoinGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BitcoinGUI))
        return static_cast<void*>(const_cast< BitcoinGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BitcoinGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
