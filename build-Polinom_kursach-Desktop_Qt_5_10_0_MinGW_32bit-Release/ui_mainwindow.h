/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_8;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *EnterLine;
    QPushButton *pushButton_10;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(582, 465);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 150, 561, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_8, 4, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 3, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(pushButton_3, 0, 5, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_5, 2, 2, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_6, 2, 5, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_7, 4, 0, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_9, 4, 5, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 2, 1, 1);

        EnterLine = new QLineEdit(centralWidget);
        EnterLine->setObjectName(QStringLiteral("EnterLine"));
        EnterLine->setGeometry(QRect(22, 30, 381, 61));
        QFont font;
        font.setPointSize(12);
        EnterLine->setFont(font);
        EnterLine->setMaxLength(32766);
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(430, 30, 141, 61));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 582, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setEnabled(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\261\320\276\321\202\320\260 \321\201 \320\277\320\276\320\273\320\270\320\275\320\276\320\274\320\260\320\274\320\270", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260 \321\200\320\260\320\262\320\265\320\275\321\201\321\202\320\262\320\260", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "\320\243\320\274\320\275\320\276\320\266\320\265\320\275\320\270\320\265 \320\275\320\260 \320\272\320\276\320\275\321\201\321\202\320\260\320\275\321\202\321\203", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "\320\241\320\273\320\276\320\266\320\265\320\275\320\270\320\265", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\262\320\276\320\264 \320\275\320\260 \321\215\320\272\321\200\320\260\320\275", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "\320\243\320\274\320\275\320\276\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\320\273\320\270\320\275\320\276\320\274\320\276\320\262", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \320\267\320\275\320\260\320\272\320\276\320\262", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\321\201\320\262\320\260\320\270\320\262\320\260\320\275\320\270\320\265", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\262\320\276\320\264 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \320\264\320\260\320\275\320\275\321\213\321\205 \321\201 \321\204\320\260\320\271\320\273\320\260", nullptr));
        EnterLine->setText(QString());
        pushButton_10->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\321\201\321\202\320\270 \321\201\320\262\320\276\320\271 \320\277\320\276\320\273\320\270\320\275\320\276\320\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
