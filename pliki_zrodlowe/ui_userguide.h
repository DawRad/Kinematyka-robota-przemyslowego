/********************************************************************************
** Form generated from reading UI file 'userguide.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERGUIDE_H
#define UI_USERGUIDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserGuide
{
public:
    QWidget *centralwidget;
    QLabel *lbXY;
    QLabel *lbYZ;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbTeta;
    QLineEdit *leTeta;
    QHBoxLayout *horizontalLayout;
    QLabel *lbPsi;
    QLineEdit *lePsi;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbL_1;
    QLineEdit *leL_1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lbL_2;
    QLineEdit *leL_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lbL_3;
    QLineEdit *leL_3;
    QHBoxLayout *horizontalLayout_12;
    QLabel *lbD;
    QLineEdit *leD;
    QHBoxLayout *horizontalLayout_13;
    QLabel *lbE;
    QLineEdit *leE;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lbL_4;
    QLineEdit *leL_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lbL_5;
    QLineEdit *leL_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *lbL_6;
    QLineEdit *leL_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *lbDelta_1;
    QComboBox *cbDelta_1;
    QHBoxLayout *horizontalLayout_10;
    QLabel *lbDelta_2;
    QComboBox *cbDelta_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *lbDelta_5;
    QComboBox *cbDelta_5;
    QHBoxLayout *horizontalLayout_21;
    QLabel *lbSkala;
    QLineEdit *leSkala;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *lbPtcp;
    QHBoxLayout *horizontalLayout_20;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbPPoczatek;
    QHBoxLayout *horizontalLayout_14;
    QLabel *lbXT_1;
    QLineEdit *leXT_1;
    QHBoxLayout *horizontalLayout_15;
    QLabel *lbYT_1;
    QLineEdit *leYT_1;
    QHBoxLayout *horizontalLayout_16;
    QLabel *lbZT_1;
    QLineEdit *leZT_1;
    QVBoxLayout *verticalLayout_3;
    QLabel *lbPKoniec;
    QHBoxLayout *horizontalLayout_18;
    QLabel *lbXT_2;
    QLineEdit *leXT_2;
    QHBoxLayout *horizontalLayout_19;
    QLabel *lbYT_2;
    QLineEdit *leYT_2;
    QHBoxLayout *horizontalLayout_17;
    QLabel *lbZT_2;
    QLineEdit *leZT_2;
    QListWidget *lwWczytane;
    QPushButton *pbWczytaj;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *lbWyniki;
    QLabel *lbPolozTCP;
    QHBoxLayout *horizontalLayout_27;
    QLabel *lbTCPx;
    QLineEdit *leTCPx;
    QHBoxLayout *horizontalLayout_28;
    QLabel *lbTCPy;
    QLineEdit *leTCPy;
    QHBoxLayout *horizontalLayout_29;
    QLabel *lbTCPz;
    QLineEdit *leTCPz;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_5;
    QLabel *lbWspolrzMaszyn;
    QHBoxLayout *horizontalLayout_22;
    QLabel *lbFi_1;
    QLineEdit *leFi_1;
    QHBoxLayout *horizontalLayout_23;
    QLabel *lbFi_2;
    QLineEdit *leFi_2;
    QHBoxLayout *horizontalLayout_24;
    QLabel *lbFi_3;
    QLineEdit *leFi_3;
    QHBoxLayout *horizontalLayout_25;
    QLabel *lbFi_4;
    QLineEdit *leFi_4;
    QHBoxLayout *horizontalLayout_26;
    QLabel *lbFi_5;
    QLineEdit *leFi_5;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_8;
    QLabel *lbLbKrokow;
    QLineEdit *leLbKrokow;
    QLabel *lbXZ;
    QGraphicsView *gvOsXY;
    QGraphicsView *gvOsYZ;
    QGraphicsView *gvOsXZ;
    QWidget *widget;
    QVBoxLayout *verticalLayout_10;
    QPushButton *pbRysuj;
    QPushButton *pbPokazOsie;
    QPushButton *pbUkryjOsie;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_9;
    QLabel *lbNrKroku;
    QSpinBox *sbNrKroku;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserGuide)
    {
        if (UserGuide->objectName().isEmpty())
            UserGuide->setObjectName(QString::fromUtf8("UserGuide"));
        UserGuide->resize(1920, 1080);
        centralwidget = new QWidget(UserGuide);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lbXY = new QLabel(centralwidget);
        lbXY->setObjectName(QString::fromUtf8("lbXY"));
        lbXY->setGeometry(QRect(910, 520, 50, 29));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);        
        lbXY->setFont(font);
        lbXY->setFocusPolicy(Qt::ClickFocus);
        lbYZ = new QLabel(centralwidget);
        lbYZ->setObjectName(QString::fromUtf8("lbYZ"));
        lbYZ->setGeometry(QRect(1410, 30, 50, 29));
        lbYZ->setFont(font);
        lbYZ->setFocusPolicy(Qt::ClickFocus);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 60, 171, 591));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lbTeta = new QLabel(verticalLayoutWidget);
        lbTeta->setObjectName(QString::fromUtf8("lbTeta"));
        lbTeta->setFont(font);

        horizontalLayout_2->addWidget(lbTeta);

        leTeta = new QLineEdit(verticalLayoutWidget);
        leTeta->setObjectName(QString::fromUtf8("leTeta"));

        horizontalLayout_2->addWidget(leTeta);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lbPsi = new QLabel(verticalLayoutWidget);
        lbPsi->setObjectName(QString::fromUtf8("lbPsi"));
        lbPsi->setFont(font);
        lbPsi->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout->addWidget(lbPsi);

        lePsi = new QLineEdit(verticalLayoutWidget);
        lePsi->setObjectName(QString::fromUtf8("lePsi"));

        horizontalLayout->addWidget(lePsi);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lbL_1 = new QLabel(verticalLayoutWidget);
        lbL_1->setObjectName(QString::fromUtf8("lbL_1"));
        lbL_1->setFont(font);
        lbL_1->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_3->addWidget(lbL_1);

        leL_1 = new QLineEdit(verticalLayoutWidget);
        leL_1->setObjectName(QString::fromUtf8("leL_1"));
        leL_1->setEnabled(true);

        horizontalLayout_3->addWidget(leL_1);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lbL_2 = new QLabel(verticalLayoutWidget);
        lbL_2->setObjectName(QString::fromUtf8("lbL_2"));
        lbL_2->setFont(font);
        lbL_2->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_4->addWidget(lbL_2);

        leL_2 = new QLineEdit(verticalLayoutWidget);
        leL_2->setObjectName(QString::fromUtf8("leL_2"));

        horizontalLayout_4->addWidget(leL_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lbL_3 = new QLabel(verticalLayoutWidget);
        lbL_3->setObjectName(QString::fromUtf8("lbL_3"));
        lbL_3->setFont(font);
        lbL_3->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_5->addWidget(lbL_3);

        leL_3 = new QLineEdit(verticalLayoutWidget);
        leL_3->setObjectName(QString::fromUtf8("leL_3"));

        horizontalLayout_5->addWidget(leL_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        lbD = new QLabel(verticalLayoutWidget);
        lbD->setObjectName(QString::fromUtf8("lbD"));
        lbD->setFont(font);
        lbD->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_12->addWidget(lbD);

        leD = new QLineEdit(verticalLayoutWidget);
        leD->setObjectName(QString::fromUtf8("leD"));

        horizontalLayout_12->addWidget(leD);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        lbE = new QLabel(verticalLayoutWidget);
        lbE->setObjectName(QString::fromUtf8("lbE"));
        lbE->setFont(font);

        horizontalLayout_13->addWidget(lbE);

        leE = new QLineEdit(verticalLayoutWidget);
        leE->setObjectName(QString::fromUtf8("leE"));

        horizontalLayout_13->addWidget(leE);


        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        lbL_4 = new QLabel(verticalLayoutWidget);
        lbL_4->setObjectName(QString::fromUtf8("lbL_4"));
        lbL_4->setFont(font);
        lbL_4->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_6->addWidget(lbL_4);

        leL_4 = new QLineEdit(verticalLayoutWidget);
        leL_4->setObjectName(QString::fromUtf8("leL_4"));

        horizontalLayout_6->addWidget(leL_4);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lbL_5 = new QLabel(verticalLayoutWidget);
        lbL_5->setObjectName(QString::fromUtf8("lbL_5"));
        lbL_5->setFont(font);
        lbL_5->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_7->addWidget(lbL_5);

        leL_5 = new QLineEdit(verticalLayoutWidget);
        leL_5->setObjectName(QString::fromUtf8("leL_5"));

        horizontalLayout_7->addWidget(leL_5);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        lbL_6 = new QLabel(verticalLayoutWidget);
        lbL_6->setObjectName(QString::fromUtf8("lbL_6"));
        lbL_6->setFont(font);
        lbL_6->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_8->addWidget(lbL_6);

        leL_6 = new QLineEdit(verticalLayoutWidget);
        leL_6->setObjectName(QString::fromUtf8("leL_6"));

        horizontalLayout_8->addWidget(leL_6);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        lbDelta_1 = new QLabel(verticalLayoutWidget);
        lbDelta_1->setObjectName(QString::fromUtf8("lbDelta_1"));
        lbDelta_1->setFont(font);
        lbDelta_1->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_9->addWidget(lbDelta_1);

        cbDelta_1 = new QComboBox(verticalLayoutWidget);
        cbDelta_1->addItem(QString());
        cbDelta_1->addItem(QString());
        cbDelta_1->setObjectName(QString::fromUtf8("cbDelta_1"));

        horizontalLayout_9->addWidget(cbDelta_1);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        lbDelta_2 = new QLabel(verticalLayoutWidget);
        lbDelta_2->setObjectName(QString::fromUtf8("lbDelta_2"));
        lbDelta_2->setFont(font);
        lbDelta_2->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_10->addWidget(lbDelta_2);

        cbDelta_2 = new QComboBox(verticalLayoutWidget);
        cbDelta_2->addItem(QString());
        cbDelta_2->addItem(QString());
        cbDelta_2->setObjectName(QString::fromUtf8("cbDelta_2"));

        horizontalLayout_10->addWidget(cbDelta_2);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        lbDelta_5 = new QLabel(verticalLayoutWidget);
        lbDelta_5->setObjectName(QString::fromUtf8("lbDelta_5"));
        lbDelta_5->setFont(font);
        lbDelta_5->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_11->addWidget(lbDelta_5);

        cbDelta_5 = new QComboBox(verticalLayoutWidget);
        cbDelta_5->addItem(QString());
        cbDelta_5->addItem(QString());
        cbDelta_5->setObjectName(QString::fromUtf8("cbDelta_5"));

        horizontalLayout_11->addWidget(cbDelta_5);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        lbSkala = new QLabel(verticalLayoutWidget);
        lbSkala->setObjectName(QString::fromUtf8("lbSkala"));

        horizontalLayout_21->addWidget(lbSkala);

        leSkala = new QLineEdit(verticalLayoutWidget);
        leSkala->setObjectName(QString::fromUtf8("leSkala"));

        horizontalLayout_21->addWidget(leSkala);


        verticalLayout->addLayout(horizontalLayout_21);

        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(220, 60, 401, 151));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lbPtcp = new QLabel(verticalLayoutWidget_4);
        lbPtcp->setObjectName(QString::fromUtf8("lbPtcp"));
        lbPtcp->setFont(font);
        lbPtcp->setFocusPolicy(Qt::ClickFocus);

        verticalLayout_4->addWidget(lbPtcp);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lbPPoczatek = new QLabel(verticalLayoutWidget_4);
        lbPPoczatek->setObjectName(QString::fromUtf8("lbPPoczatek"));
        lbPPoczatek->setFont(font);
        lbPPoczatek->setFocusPolicy(Qt::ClickFocus);

        verticalLayout_2->addWidget(lbPPoczatek);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        lbXT_1 = new QLabel(verticalLayoutWidget_4);
        lbXT_1->setObjectName(QString::fromUtf8("lbXT_1"));
        lbXT_1->setFont(font);
        lbXT_1->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_14->addWidget(lbXT_1);

        leXT_1 = new QLineEdit(verticalLayoutWidget_4);
        leXT_1->setObjectName(QString::fromUtf8("leXT_1"));

        horizontalLayout_14->addWidget(leXT_1);


        verticalLayout_2->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        lbYT_1 = new QLabel(verticalLayoutWidget_4);
        lbYT_1->setObjectName(QString::fromUtf8("lbYT_1"));
        lbYT_1->setFont(font);
        lbYT_1->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_15->addWidget(lbYT_1);

        leYT_1 = new QLineEdit(verticalLayoutWidget_4);
        leYT_1->setObjectName(QString::fromUtf8("leYT_1"));

        horizontalLayout_15->addWidget(leYT_1);


        verticalLayout_2->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        lbZT_1 = new QLabel(verticalLayoutWidget_4);
        lbZT_1->setObjectName(QString::fromUtf8("lbZT_1"));
        lbZT_1->setFont(font);
        lbZT_1->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_16->addWidget(lbZT_1);

        leZT_1 = new QLineEdit(verticalLayoutWidget_4);
        leZT_1->setObjectName(QString::fromUtf8("leZT_1"));

        horizontalLayout_16->addWidget(leZT_1);


        verticalLayout_2->addLayout(horizontalLayout_16);


        horizontalLayout_20->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lbPKoniec = new QLabel(verticalLayoutWidget_4);
        lbPKoniec->setObjectName(QString::fromUtf8("lbPKoniec"));
        lbPKoniec->setFont(font);
        lbPKoniec->setFocusPolicy(Qt::ClickFocus);

        verticalLayout_3->addWidget(lbPKoniec);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        lbXT_2 = new QLabel(verticalLayoutWidget_4);
        lbXT_2->setObjectName(QString::fromUtf8("lbXT_2"));
        lbXT_2->setFont(font);
        lbXT_2->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_18->addWidget(lbXT_2);

        leXT_2 = new QLineEdit(verticalLayoutWidget_4);
        leXT_2->setObjectName(QString::fromUtf8("leXT_2"));

        horizontalLayout_18->addWidget(leXT_2);


        verticalLayout_3->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        lbYT_2 = new QLabel(verticalLayoutWidget_4);
        lbYT_2->setObjectName(QString::fromUtf8("lbYT_2"));
        lbYT_2->setFont(font);
        lbYT_2->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_19->addWidget(lbYT_2);

        leYT_2 = new QLineEdit(verticalLayoutWidget_4);
        leYT_2->setObjectName(QString::fromUtf8("leYT_2"));

        horizontalLayout_19->addWidget(leYT_2);


        verticalLayout_3->addLayout(horizontalLayout_19);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        lbZT_2 = new QLabel(verticalLayoutWidget_4);
        lbZT_2->setObjectName(QString::fromUtf8("lbZT_2"));
        lbZT_2->setFont(font);
        lbZT_2->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_17->addWidget(lbZT_2);

        leZT_2 = new QLineEdit(verticalLayoutWidget_4);
        leZT_2->setObjectName(QString::fromUtf8("leZT_2"));

        horizontalLayout_17->addWidget(leZT_2);


        verticalLayout_3->addLayout(horizontalLayout_17);


        horizontalLayout_20->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_20);

        lwWczytane = new QListWidget(centralwidget);
        lwWczytane->setObjectName(QString::fromUtf8("lwWczytane"));
        lwWczytane->setGeometry(QRect(30, 660, 851, 271));
        pbWczytaj = new QPushButton(centralwidget);
        pbWczytaj->setObjectName(QString::fromUtf8("pbWczytaj"));
        pbWczytaj->setGeometry(QRect(780, 610, 101, 41));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(630, 60, 181, 341));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        lbWyniki = new QLabel(layoutWidget);
        lbWyniki->setObjectName(QString::fromUtf8("lbWyniki"));

        verticalLayout_6->addWidget(lbWyniki);

        lbPolozTCP = new QLabel(layoutWidget);
        lbPolozTCP->setObjectName(QString::fromUtf8("lbPolozTCP"));

        verticalLayout_6->addWidget(lbPolozTCP);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        lbTCPx = new QLabel(layoutWidget);
        lbTCPx->setObjectName(QString::fromUtf8("lbTCPx"));
        lbTCPx->setFont(font);

        horizontalLayout_27->addWidget(lbTCPx);

        leTCPx = new QLineEdit(layoutWidget);
        leTCPx->setObjectName(QString::fromUtf8("leTCPx"));
        leTCPx->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leTCPx->sizePolicy().hasHeightForWidth());
        leTCPx->setSizePolicy(sizePolicy);
        leTCPx->setBaseSize(QSize(5, 20));

        horizontalLayout_27->addWidget(leTCPx);


        verticalLayout_6->addLayout(horizontalLayout_27);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        lbTCPy = new QLabel(layoutWidget);
        lbTCPy->setObjectName(QString::fromUtf8("lbTCPy"));
        lbTCPy->setFont(font);

        horizontalLayout_28->addWidget(lbTCPy);

        leTCPy = new QLineEdit(layoutWidget);
        leTCPy->setObjectName(QString::fromUtf8("leTCPy"));
        leTCPy->setEnabled(false);
        sizePolicy.setHeightForWidth(leTCPy->sizePolicy().hasHeightForWidth());
        leTCPy->setSizePolicy(sizePolicy);
        leTCPy->setBaseSize(QSize(5, 20));

        horizontalLayout_28->addWidget(leTCPy);


        verticalLayout_6->addLayout(horizontalLayout_28);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        lbTCPz = new QLabel(layoutWidget);
        lbTCPz->setObjectName(QString::fromUtf8("lbTCPz"));
        lbTCPz->setFont(font);

        horizontalLayout_29->addWidget(lbTCPz);

        leTCPz = new QLineEdit(layoutWidget);
        leTCPz->setObjectName(QString::fromUtf8("leTCPz"));
        leTCPz->setEnabled(false);
        sizePolicy.setHeightForWidth(leTCPz->sizePolicy().hasHeightForWidth());
        leTCPz->setSizePolicy(sizePolicy);
        leTCPz->setBaseSize(QSize(5, 20));

        horizontalLayout_29->addWidget(leTCPz);


        verticalLayout_6->addLayout(horizontalLayout_29);


        verticalLayout_7->addLayout(verticalLayout_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        lbWspolrzMaszyn = new QLabel(layoutWidget);
        lbWspolrzMaszyn->setObjectName(QString::fromUtf8("lbWspolrzMaszyn"));

        verticalLayout_5->addWidget(lbWspolrzMaszyn);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        lbFi_1 = new QLabel(layoutWidget);
        lbFi_1->setObjectName(QString::fromUtf8("lbFi_1"));
        lbFi_1->setFont(font);

        horizontalLayout_22->addWidget(lbFi_1);

        leFi_1 = new QLineEdit(layoutWidget);
        leFi_1->setObjectName(QString::fromUtf8("leFi_1"));
        leFi_1->setEnabled(false);
        sizePolicy.setHeightForWidth(leFi_1->sizePolicy().hasHeightForWidth());
        leFi_1->setSizePolicy(sizePolicy);
        leFi_1->setBaseSize(QSize(5, 20));

        horizontalLayout_22->addWidget(leFi_1);


        verticalLayout_5->addLayout(horizontalLayout_22);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        lbFi_2 = new QLabel(layoutWidget);
        lbFi_2->setObjectName(QString::fromUtf8("lbFi_2"));
        lbFi_2->setFont(font);

        horizontalLayout_23->addWidget(lbFi_2);

        leFi_2 = new QLineEdit(layoutWidget);
        leFi_2->setObjectName(QString::fromUtf8("leFi_2"));
        leFi_2->setEnabled(false);
        sizePolicy.setHeightForWidth(leFi_2->sizePolicy().hasHeightForWidth());
        leFi_2->setSizePolicy(sizePolicy);

        horizontalLayout_23->addWidget(leFi_2);


        verticalLayout_5->addLayout(horizontalLayout_23);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        lbFi_3 = new QLabel(layoutWidget);
        lbFi_3->setObjectName(QString::fromUtf8("lbFi_3"));
        lbFi_3->setFont(font);

        horizontalLayout_24->addWidget(lbFi_3);

        leFi_3 = new QLineEdit(layoutWidget);
        leFi_3->setObjectName(QString::fromUtf8("leFi_3"));
        leFi_3->setEnabled(false);
        sizePolicy.setHeightForWidth(leFi_3->sizePolicy().hasHeightForWidth());
        leFi_3->setSizePolicy(sizePolicy);

        horizontalLayout_24->addWidget(leFi_3);


        verticalLayout_5->addLayout(horizontalLayout_24);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        lbFi_4 = new QLabel(layoutWidget);
        lbFi_4->setObjectName(QString::fromUtf8("lbFi_4"));
        lbFi_4->setFont(font);

        horizontalLayout_25->addWidget(lbFi_4);

        leFi_4 = new QLineEdit(layoutWidget);
        leFi_4->setObjectName(QString::fromUtf8("leFi_4"));
        leFi_4->setEnabled(false);
        sizePolicy.setHeightForWidth(leFi_4->sizePolicy().hasHeightForWidth());
        leFi_4->setSizePolicy(sizePolicy);

        horizontalLayout_25->addWidget(leFi_4);


        verticalLayout_5->addLayout(horizontalLayout_25);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        lbFi_5 = new QLabel(layoutWidget);
        lbFi_5->setObjectName(QString::fromUtf8("lbFi_5"));
        lbFi_5->setFont(font);

        horizontalLayout_26->addWidget(lbFi_5);

        leFi_5 = new QLineEdit(layoutWidget);
        leFi_5->setObjectName(QString::fromUtf8("leFi_5"));
        leFi_5->setEnabled(false);
        sizePolicy.setHeightForWidth(leFi_5->sizePolicy().hasHeightForWidth());
        leFi_5->setSizePolicy(sizePolicy);

        horizontalLayout_26->addWidget(leFi_5);


        verticalLayout_5->addLayout(horizontalLayout_26);


        verticalLayout_7->addLayout(verticalLayout_5);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(220, 230, 231, 61));
        verticalLayout_8 = new QVBoxLayout(layoutWidget1);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        lbLbKrokow = new QLabel(layoutWidget1);
        lbLbKrokow->setObjectName(QString::fromUtf8("lbLbKrokow"));
        lbLbKrokow->setFont(font);
        lbLbKrokow->setLayoutDirection(Qt::LeftToRight);
        lbLbKrokow->setScaledContents(true);

        verticalLayout_8->addWidget(lbLbKrokow);

        leLbKrokow = new QLineEdit(layoutWidget1);
        leLbKrokow->setObjectName(QString::fromUtf8("leLbKrokow"));

        verticalLayout_8->addWidget(leLbKrokow);

        lbXZ = new QLabel(centralwidget);
        lbXZ->setObjectName(QString::fromUtf8("lbXZ"));
        lbXZ->setGeometry(QRect(910, 30, 21, 41));
        lbXZ->setFont(font);
        lbXZ->setFocusPolicy(Qt::ClickFocus);
        gvOsXY = new QGraphicsView(centralwidget);
        gvOsXY->setObjectName(QString::fromUtf8("gvOsXY"));
        gvOsXY->setGeometry(QRect(900, 510, 480, 480));
        gvOsYZ = new QGraphicsView(centralwidget);
        gvOsYZ->setObjectName(QString::fromUtf8("gvOsYZ"));
        gvOsYZ->setGeometry(QRect(1400, 20, 480, 480));
        sizePolicy.setHeightForWidth(gvOsYZ->sizePolicy().hasHeightForWidth());
        gvOsYZ->setSizePolicy(sizePolicy);
        gvOsXZ = new QGraphicsView(centralwidget);
        gvOsXZ->setObjectName(QString::fromUtf8("gvOsXZ"));
        gvOsXZ->setGeometry(QRect(900, 20, 480, 480));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gvOsXZ->sizePolicy().hasHeightForWidth());
        gvOsXZ->setSizePolicy(sizePolicy1);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(1610, 620, 111, 181));
        verticalLayout_10 = new QVBoxLayout(widget);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        pbRysuj = new QPushButton(widget);
        pbRysuj->setObjectName(QString::fromUtf8("pbRysuj"));
        pbRysuj->setFont(font);

        verticalLayout_10->addWidget(pbRysuj);

        pbPokazOsie = new QPushButton(widget);
        pbPokazOsie->setObjectName(QString::fromUtf8("pbPokazOsie"));

        verticalLayout_10->addWidget(pbPokazOsie);

        pbUkryjOsie = new QPushButton(widget);
        pbUkryjOsie->setObjectName(QString::fromUtf8("pbUkryjOsie"));

        verticalLayout_10->addWidget(pbUkryjOsie);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_2);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        lbNrKroku = new QLabel(widget);
        lbNrKroku->setObjectName(QString::fromUtf8("lbNrKroku"));

        verticalLayout_9->addWidget(lbNrKroku);

        sbNrKroku = new QSpinBox(widget);
        sbNrKroku->setObjectName(QString::fromUtf8("sbNrKroku"));

        verticalLayout_9->addWidget(sbNrKroku);


        verticalLayout_10->addLayout(verticalLayout_9);

        UserGuide->setCentralWidget(centralwidget);
        gvOsXY->raise();
        gvOsXZ->raise();
        gvOsYZ->raise();
        pbRysuj->raise();
        verticalLayoutWidget->raise();
        verticalLayoutWidget_4->raise();
        lwWczytane->raise();
        pbWczytaj->raise();
        layoutWidget->raise();
        pbUkryjOsie->raise();
        pbPokazOsie->raise();
        layoutWidget->raise();
        sbNrKroku->raise();
        lbNrKroku->raise();
        gvOsXY->raise();
        gvOsYZ->raise();
        gvOsXZ->raise();
        lbYZ->raise();
        lbXY->raise();
        lbXZ->raise();
        menubar = new QMenuBar(UserGuide);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 21));
        UserGuide->setMenuBar(menubar);
        statusbar = new QStatusBar(UserGuide);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        UserGuide->setStatusBar(statusbar);

        retranslateUi(UserGuide);

        QMetaObject::connectSlotsByName(UserGuide);
    } // setupUi

    void retranslateUi(QMainWindow *UserGuide)
    {
        UserGuide->setWindowTitle(QCoreApplication::translate("UserGuide", "UserGuide", nullptr));
        lbXY->setText(QCoreApplication::translate("UserGuide", "XY", nullptr));
        lbYZ->setText(QCoreApplication::translate("UserGuide", "YZ", nullptr));
        lbTeta->setText(QCoreApplication::translate("UserGuide", "\316\230 [ \302\260 ]", nullptr));
        leTeta->setText(QCoreApplication::translate("UserGuide", "30", nullptr));
        lbPsi->setText(QCoreApplication::translate("UserGuide", "\316\250 [ \302\260 ]", nullptr));
        lePsi->setText(QCoreApplication::translate("UserGuide", "45", nullptr));
        lbL_1->setText(QCoreApplication::translate("UserGuide", " L1 [mm]", nullptr));
        leL_1->setText(QCoreApplication::translate("UserGuide", "500", nullptr));
        lbL_2->setText(QCoreApplication::translate("UserGuide", " L2 [mm]", nullptr));
        leL_2->setText(QCoreApplication::translate("UserGuide", "1200", nullptr));
        lbL_3->setText(QCoreApplication::translate("UserGuide", " L3 [mm]", nullptr));
        leL_3->setText(QCoreApplication::translate("UserGuide", "1000", nullptr));
        lbD->setText(QCoreApplication::translate("UserGuide", "  d [mm]", nullptr));
        leD->setText(QCoreApplication::translate("UserGuide", "200", nullptr));
        lbE->setText(QCoreApplication::translate("UserGuide", "  e [mm]", nullptr));
        leE->setText(QCoreApplication::translate("UserGuide", "200", nullptr));
        lbL_4->setText(QCoreApplication::translate("UserGuide", " L4 [mm]", nullptr));
        leL_4->setText(QCoreApplication::translate("UserGuide", "500", nullptr));
        lbL_5->setText(QCoreApplication::translate("UserGuide", " L5 [mm]", nullptr));
        leL_5->setText(QCoreApplication::translate("UserGuide", "250", nullptr));
        lbL_6->setText(QCoreApplication::translate("UserGuide", " L6 [mm]", nullptr));
        leL_6->setText(QCoreApplication::translate("UserGuide", "150", nullptr));
        lbDelta_1->setText(QCoreApplication::translate("UserGuide", "<html><head/><body><p>\316\264<span style=\" font-size:12pt; vertical-align:sub;\">1</span></p></body></html>", nullptr));
        cbDelta_1->setItemText(0, QCoreApplication::translate("UserGuide", "1", nullptr));
        cbDelta_1->setItemText(1, QCoreApplication::translate("UserGuide", "-1", nullptr));

        lbDelta_2->setText(QCoreApplication::translate("UserGuide", "<html><head/><body><p>\316\264<span style=\" vertical-align:sub;\">2</span></p></body></html>", nullptr));
        cbDelta_2->setItemText(0, QCoreApplication::translate("UserGuide", "1", nullptr));
        cbDelta_2->setItemText(1, QCoreApplication::translate("UserGuide", "-1", nullptr));

        lbDelta_5->setText(QCoreApplication::translate("UserGuide", "<html><head/><body><p>\316\264<span style=\" vertical-align:sub;\">5</span></p></body></html>", nullptr));
        cbDelta_5->setItemText(0, QCoreApplication::translate("UserGuide", "1", nullptr));
        cbDelta_5->setItemText(1, QCoreApplication::translate("UserGuide", "-1", nullptr));

        lbSkala->setText(QCoreApplication::translate("UserGuide", "<html><head/><body><p align=\"center\">Skala</p></body></html>", nullptr));
        leSkala->setText(QCoreApplication::translate("UserGuide", "1", nullptr));
        lbPtcp->setText(QCoreApplication::translate("UserGuide", "Punkt TCP:", nullptr));
        lbPPoczatek->setText(QCoreApplication::translate("UserGuide", "pocz\304\205tkowy", nullptr));
        lbXT_1->setText(QCoreApplication::translate("UserGuide", " X [mm]", nullptr));
        leXT_1->setText(QCoreApplication::translate("UserGuide", "1000", nullptr));
        lbYT_1->setText(QCoreApplication::translate("UserGuide", " Y [mm]", nullptr));
        leYT_1->setText(QCoreApplication::translate("UserGuide", "600", nullptr));
        lbZT_1->setText(QCoreApplication::translate("UserGuide", " Z [mm]", nullptr));
        leZT_1->setText(QCoreApplication::translate("UserGuide", "1100", nullptr));
        lbPKoniec->setText(QCoreApplication::translate("UserGuide", "ko\305\204cowy", nullptr));
        lbXT_2->setText(QCoreApplication::translate("UserGuide", " X [mm]", nullptr));
        leXT_2->setText(QCoreApplication::translate("UserGuide", "1300", nullptr));
        lbYT_2->setText(QCoreApplication::translate("UserGuide", " Y [mm]", nullptr));
        leYT_2->setText(QCoreApplication::translate("UserGuide", "-700", nullptr));
        lbZT_2->setText(QCoreApplication::translate("UserGuide", " Z [mm]", nullptr));
        leZT_2->setText(QCoreApplication::translate("UserGuide", "1400", nullptr));
        pbWczytaj->setText(QCoreApplication::translate("UserGuide", "Wczytaj", nullptr));
        lbWyniki->setText(QCoreApplication::translate("UserGuide", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Wyniki:</span></p></body></html>", nullptr));
        lbPolozTCP->setText(QCoreApplication::translate("UserGuide", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">Po\305\202o\305\274enie TCP</span></p></body></html>", nullptr));
        lbTCPx->setText(QCoreApplication::translate("UserGuide", "<html><head/><body><p>x</p></body></html>", nullptr));
        lbTCPy->setText(QCoreApplication::translate("UserGuide", "<html><head/><body><p>y</p></body></html>", nullptr));
        lbTCPz->setText(QCoreApplication::translate("UserGuide", "<html><head/><body><p>z</p></body></html>", nullptr));
        lbWspolrzMaszyn->setText(QCoreApplication::translate("UserGuide", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">Wsp\303\263\305\202rz\304\231dne maszynowe</span></p></body></html>", nullptr));
        lbFi_1->setText(QCoreApplication::translate("UserGuide", "<html><head/><body><p>\317\206<span style=\" vertical-align:sub;\">1</span> [ \302\260 ]</p></body></html>", nullptr));
        lbFi_2->setText(QCoreApplication::translate("UserGuide", "<html><head/><body><p>\317\206<span style=\" vertical-align:sub;\">2</span> [ \302\260 ]</p></body></html>", nullptr));
        lbFi_3->setText(QCoreApplication::translate("UserGuide", "<html><head/><body><p>\317\206<span style=\" vertical-align:sub;\">3</span> [ \302\260 ]</p></body></html>", nullptr));
        lbFi_4->setText(QCoreApplication::translate("UserGuide", "<html><head/><body><p>\317\206<span style=\" vertical-align:sub;\">4</span> [ \302\260 ]</p></body></html>", nullptr));
        lbFi_5->setText(QCoreApplication::translate("UserGuide", "<html><head/><body><p>\317\206<span style=\" vertical-align:sub;\">5</span> [ \302\260 ]</p></body></html>", nullptr));
        lbLbKrokow->setText(QCoreApplication::translate("UserGuide", "Liczba krok\303\263w animacji", nullptr));
        leLbKrokow->setText(QCoreApplication::translate("UserGuide", "100", nullptr));
        lbXZ->setText(QCoreApplication::translate("UserGuide", "XZ", nullptr));
        pbRysuj->setText(QCoreApplication::translate("UserGuide", "Animacja", nullptr));
        pbPokazOsie->setText(QCoreApplication::translate("UserGuide", "Poka\305\274 Osie", nullptr));
        pbUkryjOsie->setText(QCoreApplication::translate("UserGuide", "Ukryj osie", nullptr));
        lbNrKroku->setText(QCoreApplication::translate("UserGuide", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Krok      </span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserGuide: public Ui_UserGuide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERGUIDE_H
