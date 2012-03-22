#include <QtGui/QApplication>
#include <QWebView>
#include <QFileInfo>
#include <QUrl>
#include <QDebug>
#include <QDir>
#include "viewloader.h"
#include "sensor.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWebView* view;
    view = new QWebView();
    ViewLoader loader;

    //connect view signals with splashscreen
    QObject::connect(view, SIGNAL(loadStarted()),
                      &loader, SLOT(on_loadStarted()));
    QObject::connect(view, SIGNAL(loadProgress(int)),
                      &loader, SLOT(on_loadProgress(int)));
    QObject::connect(view, SIGNAL(loadFinished(bool)),
                      &loader, SLOT(on_loadFinished(bool)));

    Sensor *sensor = new Sensor(view);
    qDebug() << QDir::currentPath();
    QFileInfo myFileInfo("html/index.html");
    QUrl url = QUrl( "file://" + myFileInfo.absoluteFilePath());
    qDebug() << url;
    view->load(url);
    view->showFullScreen();
    return app.exec();
}
