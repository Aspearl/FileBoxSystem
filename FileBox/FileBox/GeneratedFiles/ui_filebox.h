/********************************************************************************
** Form generated from reading UI file 'filebox.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEBOX_H
#define UI_FILEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileBoxClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FileBoxClass)
    {
        if (FileBoxClass->objectName().isEmpty())
            FileBoxClass->setObjectName(QStringLiteral("FileBoxClass"));
        FileBoxClass->resize(600, 400);
        menuBar = new QMenuBar(FileBoxClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        FileBoxClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FileBoxClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FileBoxClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(FileBoxClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        FileBoxClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(FileBoxClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FileBoxClass->setStatusBar(statusBar);

        retranslateUi(FileBoxClass);

        QMetaObject::connectSlotsByName(FileBoxClass);
    } // setupUi

    void retranslateUi(QMainWindow *FileBoxClass)
    {
        FileBoxClass->setWindowTitle(QApplication::translate("FileBoxClass", "FileBox", 0));
    } // retranslateUi

};

namespace Ui {
    class FileBoxClass: public Ui_FileBoxClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEBOX_H
