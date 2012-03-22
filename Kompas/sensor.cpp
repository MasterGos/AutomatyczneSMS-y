#include "sensor.h"
#include <QDebug>
#include <QtWebKit/QWebFrame>

Sensor::Sensor(QWebView *view, QObject *parent) : QObject(parent), lastValue(0)
{
    this->view = view;
    connect(view->page()->mainFrame(),
            SIGNAL(javaScriptWindowObjectCleared()), this, SLOT(addToJavaScriptSlot()));
    compass = new QtMobility::QCompass();
    if(compass)
    {
        compass->start();
        reader = compass->reading();
        if(reader)
        {
            connect(compass, SIGNAL(readingChanged()), this, SLOT(compassUpdate()));
        }
        else
        {
            qDebug() << "reader is empty!"<<reader;
            qDebug() << compass->error();
        }
     }
     else
     {
        qDebug() << "compass error!";
     }
}

Sensor::~Sensor()
{
    delete reader;
    delete compass;
}

void Sensor::addToJavaScriptSlot()
{
    view->page()->mainFrame()->addToJavaScriptWindowObject("ComarchCompass", this);
}

void Sensor::debug(QString txt)
{
    qDebug() << txt;
}

void Sensor::compassUpdate()
{
    qreal value = reader->azimuth();
    if(lastValue != value)
    {
        lastValue = value;
        /*qDebug() << value;*/
        emit update(value);
    }

}
