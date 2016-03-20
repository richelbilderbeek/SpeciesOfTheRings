/********************************************************************************
** Form generated from reading UI file 'qtspeciesoftheringsmaindialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTSPECIESOFTHERINGSMAINDIALOG_H
#define UI_QTSPECIESOFTHERINGSMAINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtSpeciesOfTheRingsMainDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QDoubleSpinBox *box_distance_halflife;
    QSpinBox *box_width;
    QLabel *label_rng_seed;
    QDoubleSpinBox *box_mutation_rate;
    QSpinBox *box_rng_seed;
    QLabel *label_width;
    QLabel *label_mutation_rate;
    QSpacerItem *verticalSpacer;
    QLabel *label_height;
    QLabel *label_threshold;
    QSpinBox *box_height;
    QLabel *label_grid_type;
    QComboBox *box_grid_type;
    QWidget *widget_right;
    QWidget *widget_output;
    QGridLayout *gridLayout_2;
    QLabel *image_histogram;

    void setupUi(QDialog *QtSpeciesOfTheRingsMainDialog)
    {
        if (QtSpeciesOfTheRingsMainDialog->objectName().isEmpty())
            QtSpeciesOfTheRingsMainDialog->setObjectName(QString::fromUtf8("QtSpeciesOfTheRingsMainDialog"));
        QtSpeciesOfTheRingsMainDialog->resize(552, 327);
        horizontalLayout = new QHBoxLayout(QtSpeciesOfTheRingsMainDialog);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(QtSpeciesOfTheRingsMainDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        box_distance_halflife = new QDoubleSpinBox(widget);
        box_distance_halflife->setObjectName(QString::fromUtf8("box_distance_halflife"));
        box_distance_halflife->setDecimals(4);
        box_distance_halflife->setMaximum(1000);
        box_distance_halflife->setSingleStep(0.1);
        box_distance_halflife->setValue(0.5);

        gridLayout->addWidget(box_distance_halflife, 3, 1, 1, 1);

        box_width = new QSpinBox(widget);
        box_width->setObjectName(QString::fromUtf8("box_width"));
        box_width->setMinimum(10);
        box_width->setMaximum(1000);
        box_width->setValue(200);

        gridLayout->addWidget(box_width, 0, 1, 1, 1);

        label_rng_seed = new QLabel(widget);
        label_rng_seed->setObjectName(QString::fromUtf8("label_rng_seed"));

        gridLayout->addWidget(label_rng_seed, 4, 0, 1, 1);

        box_mutation_rate = new QDoubleSpinBox(widget);
        box_mutation_rate->setObjectName(QString::fromUtf8("box_mutation_rate"));
        box_mutation_rate->setDecimals(4);
        box_mutation_rate->setMaximum(1);
        box_mutation_rate->setSingleStep(0.1);
        box_mutation_rate->setValue(0.1);

        gridLayout->addWidget(box_mutation_rate, 2, 1, 1, 1);

        box_rng_seed = new QSpinBox(widget);
        box_rng_seed->setObjectName(QString::fromUtf8("box_rng_seed"));
        box_rng_seed->setMaximum(10000);
        box_rng_seed->setValue(42);

        gridLayout->addWidget(box_rng_seed, 4, 1, 1, 1);

        label_width = new QLabel(widget);
        label_width->setObjectName(QString::fromUtf8("label_width"));

        gridLayout->addWidget(label_width, 0, 0, 1, 1);

        label_mutation_rate = new QLabel(widget);
        label_mutation_rate->setObjectName(QString::fromUtf8("label_mutation_rate"));

        gridLayout->addWidget(label_mutation_rate, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        label_height = new QLabel(widget);
        label_height->setObjectName(QString::fromUtf8("label_height"));

        gridLayout->addWidget(label_height, 1, 0, 1, 1);

        label_threshold = new QLabel(widget);
        label_threshold->setObjectName(QString::fromUtf8("label_threshold"));

        gridLayout->addWidget(label_threshold, 3, 0, 1, 1);

        box_height = new QSpinBox(widget);
        box_height->setObjectName(QString::fromUtf8("box_height"));
        box_height->setMinimum(1);
        box_height->setMaximum(1000);
        box_height->setValue(1);

        gridLayout->addWidget(box_height, 1, 1, 1, 1);

        label_grid_type = new QLabel(widget);
        label_grid_type->setObjectName(QString::fromUtf8("label_grid_type"));

        gridLayout->addWidget(label_grid_type, 5, 0, 1, 1);

        box_grid_type = new QComboBox(widget);
        box_grid_type->setObjectName(QString::fromUtf8("box_grid_type"));

        gridLayout->addWidget(box_grid_type, 5, 1, 1, 1);


        horizontalLayout->addWidget(widget);

        widget_right = new QWidget(QtSpeciesOfTheRingsMainDialog);
        widget_right->setObjectName(QString::fromUtf8("widget_right"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_right->sizePolicy().hasHeightForWidth());
        widget_right->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(widget_right);

        widget_output = new QWidget(QtSpeciesOfTheRingsMainDialog);
        widget_output->setObjectName(QString::fromUtf8("widget_output"));
        sizePolicy.setHeightForWidth(widget_output->sizePolicy().hasHeightForWidth());
        widget_output->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(widget_output);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        image_histogram = new QLabel(widget_output);
        image_histogram->setObjectName(QString::fromUtf8("image_histogram"));

        gridLayout_2->addWidget(image_histogram, 0, 0, 1, 1);


        horizontalLayout->addWidget(widget_output);

        QWidget::setTabOrder(box_width, box_height);
        QWidget::setTabOrder(box_height, box_mutation_rate);
        QWidget::setTabOrder(box_mutation_rate, box_distance_halflife);
        QWidget::setTabOrder(box_distance_halflife, box_rng_seed);
        QWidget::setTabOrder(box_rng_seed, box_grid_type);

        retranslateUi(QtSpeciesOfTheRingsMainDialog);

        box_grid_type->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QtSpeciesOfTheRingsMainDialog);
    } // setupUi

    void retranslateUi(QDialog *QtSpeciesOfTheRingsMainDialog)
    {
        QtSpeciesOfTheRingsMainDialog->setWindowTitle(QApplication::translate("QtSpeciesOfTheRingsMainDialog", "Species Of The Rings", 0, QApplication::UnicodeUTF8));
        label_rng_seed->setText(QApplication::translate("QtSpeciesOfTheRingsMainDialog", "RNG seed", 0, QApplication::UnicodeUTF8));
        label_width->setText(QApplication::translate("QtSpeciesOfTheRingsMainDialog", "Width", 0, QApplication::UnicodeUTF8));
        label_mutation_rate->setText(QApplication::translate("QtSpeciesOfTheRingsMainDialog", "Mutation rate", 0, QApplication::UnicodeUTF8));
        label_height->setText(QApplication::translate("QtSpeciesOfTheRingsMainDialog", "Height", 0, QApplication::UnicodeUTF8));
        label_threshold->setText(QApplication::translate("QtSpeciesOfTheRingsMainDialog", "Distance half-life", 0, QApplication::UnicodeUTF8));
        label_grid_type->setText(QApplication::translate("QtSpeciesOfTheRingsMainDialog", "Grid type", 0, QApplication::UnicodeUTF8));
        box_grid_type->clear();
        box_grid_type->insertItems(0, QStringList()
         << QApplication::translate("QtSpeciesOfTheRingsMainDialog", "Square with mountain", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QtSpeciesOfTheRingsMainDialog", "Torus", 0, QApplication::UnicodeUTF8)
        );
        image_histogram->setText(QApplication::translate("QtSpeciesOfTheRingsMainDialog", "[HISTOGRAM]", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QtSpeciesOfTheRingsMainDialog: public Ui_QtSpeciesOfTheRingsMainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTSPECIESOFTHERINGSMAINDIALOG_H
