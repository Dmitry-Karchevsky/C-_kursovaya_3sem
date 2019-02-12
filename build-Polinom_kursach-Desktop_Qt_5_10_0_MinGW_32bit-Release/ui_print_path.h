/********************************************************************************
** Form generated from reading UI file 'print_path.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINT_PATH_H
#define UI_PRINT_PATH_H

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

class Ui_Print_Path
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *path;
    QPushButton *pushButton;

    void setupUi(QDialog *Print_Path)
    {
        if (Print_Path->objectName().isEmpty())
            Print_Path->setObjectName(QStringLiteral("Print_Path"));
        Print_Path->resize(292, 149);
        horizontalLayoutWidget = new QWidget(Print_Path);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 10, 281, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        path = new QLineEdit(horizontalLayoutWidget);
        path->setObjectName(QStringLiteral("path"));

        horizontalLayout->addWidget(path);

        pushButton = new QPushButton(Print_Path);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 110, 75, 23));

        retranslateUi(Print_Path);

        QMetaObject::connectSlotsByName(Print_Path);
    } // setupUi

    void retranslateUi(QDialog *Print_Path)
    {
        Print_Path->setWindowTitle(QApplication::translate("Print_Path", "Dialog", nullptr));
        label->setText(QApplication::translate("Print_Path", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\321\203\321\202\321\214:", nullptr));
        path->setText(QApplication::translate("Print_Path", "data_pol_in.txt", nullptr));
        pushButton->setText(QApplication::translate("Print_Path", "\320\236\320\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Print_Path: public Ui_Print_Path {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINT_PATH_H
