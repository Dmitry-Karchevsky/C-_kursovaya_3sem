/********************************************************************************
** Form generated from reading UI file 'enter_pol.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTER_POL_H
#define UI_ENTER_POL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Enter_pol
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Degree;
    QPushButton *pushButton;
    QPushButton *AssignButton;

    void setupUi(QDialog *Enter_pol)
    {
        if (Enter_pol->objectName().isEmpty())
            Enter_pol->setObjectName(QStringLiteral("Enter_pol"));
        Enter_pol->resize(455, 382);
        groupBox = new QGroupBox(Enter_pol);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 221, 361));
        QFont font;
        font.setPointSize(8);
        groupBox->setFont(font);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 201, 321));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        Degree = new QLineEdit(layoutWidget);
        Degree->setObjectName(QStringLiteral("Degree"));

        horizontalLayout->addWidget(Degree);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(Enter_pol);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 40, 161, 41));
        AssignButton = new QPushButton(Enter_pol);
        AssignButton->setObjectName(QStringLiteral("AssignButton"));
        AssignButton->setGeometry(QRect(260, 110, 161, 41));
        AssignButton->setCheckable(false);
        AssignButton->setAutoRepeat(false);
        AssignButton->setAutoExclusive(false);

        retranslateUi(Enter_pol);

        QMetaObject::connectSlotsByName(Enter_pol);
    } // setupUi

    void retranslateUi(QDialog *Enter_pol)
    {
        Enter_pol->setWindowTitle(QApplication::translate("Enter_pol", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("Enter_pol", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\276 \320\275\320\276\320\262\320\276\320\274 \320\277\320\276\320\273\320\270\320\275\320\276\320\274\320\265 ", nullptr));
        label->setText(QApplication::translate("Enter_pol", "\320\241\321\202\320\265\320\277\320\265\320\275\321\214 \320\277\320\276\320\273\320\270\320\275\320\276\320\274\320\260", nullptr));
        Degree->setText(QString());
        pushButton->setText(QApplication::translate("Enter_pol", "\320\222\320\262\320\265\321\201\321\202\320\270 \321\201\321\202\320\265\320\277\320\265\320\275\321\214", nullptr));
        AssignButton->setText(QApplication::translate("Enter_pol", "\320\237\321\200\320\270\321\201\320\262\320\276\320\270\321\202\321\214 \320\272\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Enter_pol: public Ui_Enter_pol {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTER_POL_H
