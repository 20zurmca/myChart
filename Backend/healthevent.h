#ifndef HEALTHEVENT_H
#define HEALTHEVENT_H
#include <QObject>

class HealthEvent : public QObject
{
    Q_OBJECT
public:
    explicit HealthEvent(QObject *parent = nullptr);
    virtual ~HealthEvent();

signals:

public slots:
};

#endif // HEALTHEVENT_H
