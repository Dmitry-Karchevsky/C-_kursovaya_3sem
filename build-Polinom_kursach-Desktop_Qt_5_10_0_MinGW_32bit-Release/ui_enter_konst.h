/********************************************************************************
** Form generated from reading UI file 'enter_konst.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTER_KONST_H
#define UI_ENTER_KONST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Enter_konst
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *konstanta;
    QPushButton *pushButton;

    void setupUi(QDialog *Enter_konst)
    {
        if (Enter_konst->objectName().isEmpty())
            Enter_konst->setObjectName(QStringLiteral("Enter_konst"));
        Enter_konst->resize(304, 147);
        horizontalLayoutWidget = new QWidget(Enter_konst);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 30, 241, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        konstanta = new QLineEdit(horizontalLayoutWidget);
        konstanta->setObjectName(QStringLiteral("konstanta"));

        horizontalLayout->addWidget(konstanta);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        retranslateUi(Enter_konst);

        QMetaObject::connectSlotsByName(Enter_konst);
    } // setupUi

    void retranslateUi(QDialog *Enter_konst)
    {
        Enter_konst->setWindowTitle(QApplication::translate("Enter_konst", "Dialog", nullptr));
        label->setText(QApplication::translate("Enter_konst", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202", nullptr));
        pushButton->setText(QApplication::translate("Enter_konst", "\320\236\320\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Enter_konst: public Ui_Enter_konst {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTER_KONST_H
