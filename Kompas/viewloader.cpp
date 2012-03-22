#include <QDebug>
#include "viewloader.h"

ViewLoader::ViewLoader(QObject *parent) :
    QObject(parent)
{
}

void ViewLoader::on_loadFinished(bool ok)
{
    qDebug() << QString("on_loadFinished (bool = %1)").arg(QString(ok?"True":"False"));
}

void ViewLoader::on_loadProgress(int progress)
{
    qDebug() << QString("on_loadProgress (int = %1)").arg(progress);
}

void ViewLoader::on_loadStarted()
{
    qDebug("on_loadStarted");
}
