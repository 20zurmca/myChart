#ifndef HEALTHEVENT_H
#define HEALTHEVENT_H
#include <QObject>
#include <QString>
#include <QDateTime>

class HealthEvent : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QDateTime dateRecorded READ getDateRecorded)
public:
    explicit HealthEvent(QObject *parent = nullptr);
    virtual ~HealthEvent();

signals:

public slots:

private:
    QString m_name;
    QDateTime m_dateRecorded;
};

#endif // HEALTHEVENT_H
