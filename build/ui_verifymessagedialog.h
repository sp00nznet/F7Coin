/********************************************************************************
** Form generated from reading UI file 'verifymessagedialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERIFYMESSAGEDIALOG_H
#define UI_VERIFYMESSAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_VerifyMessageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QValidatedLineEdit *lnAddress;
    QValidatedLineEdit *lnSig;
    QPlainTextEdit *edMessage;
    QHBoxLayout *horizontalLayout;
    QPushButton *verifyMessage;
    QPushButton *clearButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lblStatus;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *VerifyMessageDialog)
    {
        if (VerifyMessageDialog->objectName().isEmpty())
            VerifyMessageDialog->setObjectName(QString::fromUtf8("VerifyMessageDialog"));
        VerifyMessageDialog->resize(650, 380);
        verticalLayout = new QVBoxLayout(VerifyMessageDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(VerifyMessageDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        lnAddress = new QValidatedLineEdit(VerifyMessageDialog);
        lnAddress->setObjectName(QString::fromUtf8("lnAddress"));

        verticalLayout->addWidget(lnAddress);

        lnSig = new QValidatedLineEdit(VerifyMessageDialog);
        lnSig->setObjectName(QString::fromUtf8("lnSig"));

        verticalLayout->addWidget(lnSig);

        edMessage = new QPlainTextEdit(VerifyMessageDialog);
        edMessage->setObjectName(QString::fromUtf8("edMessage"));

        verticalLayout->addWidget(edMessage);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verifyMessage = new QPushButton(VerifyMessageDialog);
        verifyMessage->setObjectName(QString::fromUtf8("verifyMessage"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/transaction_0"), QSize(), QIcon::Normal, QIcon::Off);
        verifyMessage->setIcon(icon);

        horizontalLayout->addWidget(verifyMessage);

        clearButton = new QPushButton(VerifyMessageDialog);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon1);

        horizontalLayout->addWidget(clearButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        lblStatus = new QLabel(VerifyMessageDialog);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
        lblStatus->setMinimumSize(QSize(0, 48));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblStatus->setFont(font);
        lblStatus->setWordWrap(true);

        horizontalLayout->addWidget(lblStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(VerifyMessageDialog);

        QMetaObject::connectSlotsByName(VerifyMessageDialog);
    } // setupUi

    void retranslateUi(QDialog *VerifyMessageDialog)
    {
        VerifyMessageDialog->setWindowTitle(QApplication::translate("VerifyMessageDialog", "Verify Signed Message", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("VerifyMessageDialog", "Enter the signing address, signature and message below (be careful to correctly copy newlines, spaces, tabs and other invisible characters) to verify the message.", 0, QApplication::UnicodeUTF8));
        lnAddress->setText(QString());
        lnSig->setText(QString());
#ifndef QT_NO_TOOLTIP
        verifyMessage->setToolTip(QApplication::translate("VerifyMessageDialog", "Verify a message to ensure it was signed with the specified F7Coin address", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        verifyMessage->setText(QApplication::translate("VerifyMessageDialog", "&Verify Message", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("VerifyMessageDialog", "Reset all verify message fields", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QApplication::translate("VerifyMessageDialog", "Clear &All", 0, QApplication::UnicodeUTF8));
        lblStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VerifyMessageDialog: public Ui_VerifyMessageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFYMESSAGEDIALOG_H
