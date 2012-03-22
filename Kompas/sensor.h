#ifndef SENSOR_H
#define SENSOR_H
#include <QObject>
#include <QCompass>
#include <QtWebKit/QWebView>

class Sensor : public QObject
{
    Q_OBJECT
public:
    Sensor(QWebView *view, QObject *parent = 0);
    ~Sensor();

signals:
    void update(qreal value);
public slots:
    void debug(QString txt);

private slots:
    void addToJavaScriptSlot();
    void compassUpdate();
private:
    QWebView* view;
    QtMobility::QCompassReading *reader;
    QtMobility::QCompass *compass;
    qreal lastValue;
};

#endif // SENSOR_H
