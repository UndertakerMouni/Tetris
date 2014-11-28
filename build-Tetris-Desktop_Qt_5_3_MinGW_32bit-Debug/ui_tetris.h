/********************************************************************************
** Form generated from reading UI file 'tetris.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TETRIS_H
#define UI_TETRIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tetris
{
public:
    QAction *action_start;
    QAction *action_pause;
    QAction *action_quit;
    QAction *action_help;
    QAction *action_about;
    QAction *action_easy;
    QAction *action_middle;
    QAction *action_difficult;
    QAction *action_classic;
    QAction *action_magic;
    QWidget *centralWidget;
    QLabel *label_scorel;
    QLabel *label_scorel_2;
    QMenuBar *menuBar;
    QMenu *menu_G;
    QMenu *menu_S;
    QMenu *menu_H;

    void setupUi(QMainWindow *Tetris)
    {
        if (Tetris->objectName().isEmpty())
            Tetris->setObjectName(QStringLiteral("Tetris"));
        Tetris->resize(724, 500);
        action_start = new QAction(Tetris);
        action_start->setObjectName(QStringLiteral("action_start"));
        action_pause = new QAction(Tetris);
        action_pause->setObjectName(QStringLiteral("action_pause"));
        action_quit = new QAction(Tetris);
        action_quit->setObjectName(QStringLiteral("action_quit"));
        action_help = new QAction(Tetris);
        action_help->setObjectName(QStringLiteral("action_help"));
        action_about = new QAction(Tetris);
        action_about->setObjectName(QStringLiteral("action_about"));
        action_easy = new QAction(Tetris);
        action_easy->setObjectName(QStringLiteral("action_easy"));
        action_middle = new QAction(Tetris);
        action_middle->setObjectName(QStringLiteral("action_middle"));
        action_difficult = new QAction(Tetris);
        action_difficult->setObjectName(QStringLiteral("action_difficult"));
        action_classic = new QAction(Tetris);
        action_classic->setObjectName(QStringLiteral("action_classic"));
        action_magic = new QAction(Tetris);
        action_magic->setObjectName(QStringLiteral("action_magic"));
        centralWidget = new QWidget(Tetris);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_scorel = new QLabel(centralWidget);
        label_scorel->setObjectName(QStringLiteral("label_scorel"));
        label_scorel->setGeometry(QRect(320, 80, 31, 21));
        label_scorel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"background-color: rgb(255, 255, 127);\n"
"font: 75 14pt \"\346\245\267\344\275\223\";"));
        label_scorel->setAlignment(Qt::AlignCenter);
        label_scorel_2 = new QLabel(centralWidget);
        label_scorel_2->setObjectName(QStringLiteral("label_scorel_2"));
        label_scorel_2->setGeometry(QRect(440, 80, 31, 21));
        label_scorel_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"background-color: rgb(255, 255, 127);\n"
"font: 75 14pt \"\346\245\267\344\275\223\";"));
        label_scorel_2->setAlignment(Qt::AlignCenter);
        Tetris->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Tetris);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 724, 23));
        menu_G = new QMenu(menuBar);
        menu_G->setObjectName(QStringLiteral("menu_G"));
        menu_S = new QMenu(menuBar);
        menu_S->setObjectName(QStringLiteral("menu_S"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        Tetris->setMenuBar(menuBar);

        menuBar->addAction(menu_G->menuAction());
        menuBar->addAction(menu_S->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu_G->addAction(action_start);
        menu_G->addAction(action_pause);
        menu_G->addAction(action_quit);
        menu_S->addAction(action_easy);
        menu_S->addAction(action_middle);
        menu_S->addAction(action_difficult);
        menu_S->addSeparator();
        menu_S->addAction(action_classic);
        menu_S->addAction(action_magic);
        menu_H->addAction(action_help);
        menu_H->addAction(action_about);

        retranslateUi(Tetris);

        QMetaObject::connectSlotsByName(Tetris);
    } // setupUi

    void retranslateUi(QMainWindow *Tetris)
    {
        Tetris->setWindowTitle(QApplication::translate("Tetris", "Tetris", 0));
        action_start->setText(QApplication::translate("Tetris", "\345\274\200\345\247\213", 0));
        action_pause->setText(QApplication::translate("Tetris", "\346\232\202\345\201\234", 0));
        action_quit->setText(QApplication::translate("Tetris", "\351\200\200\345\207\272", 0));
        action_help->setText(QApplication::translate("Tetris", "\346\270\270\346\210\217\350\257\264\346\230\216", 0));
        action_about->setText(QApplication::translate("Tetris", "\345\205\263\344\272\216Tetris", 0));
        action_easy->setText(QApplication::translate("Tetris", "\345\256\271\346\230\223", 0));
        action_middle->setText(QApplication::translate("Tetris", "\344\270\255\347\255\211", 0));
        action_difficult->setText(QApplication::translate("Tetris", "\351\253\230\347\272\247", 0));
        action_classic->setText(QApplication::translate("Tetris", "\347\273\217\345\205\270\346\250\241\345\274\217", 0));
        action_magic->setText(QApplication::translate("Tetris", "\345\245\207\345\271\273\346\250\241\345\274\217", 0));
        label_scorel->setText(QString());
        label_scorel_2->setText(QString());
        menu_G->setTitle(QApplication::translate("Tetris", "\346\270\270\346\210\217(&G)", 0));
        menu_S->setTitle(QApplication::translate("Tetris", "\350\256\276\347\275\256(&S)", 0));
        menu_H->setTitle(QApplication::translate("Tetris", "\345\270\256\345\212\251(&H)", 0));
    } // retranslateUi

};

namespace Ui {
    class Tetris: public Ui_Tetris {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TETRIS_H
