#ifndef VIEWLOADER_H
#define VIEWLOADER_H

#include <QObject>

class ViewLoader : public QObject
{
    Q_OBJECT
public:
    explicit ViewLoader(QObject *parent = 0);
    
signals:
    
public slots:
    void on_loadFinished ( bool ok );
    void on_loadProgress ( int progress );
    void on_loadStarted ();
    
};

#endif // VIEWLOADER_H
