#ifndef HEALTHEVENT_H
#define HEALTHEVENT_H
#include <QObject>
#include "dategetter.h"
#include <QString>


class HealthEvent : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ getName WRITE setName NOTIFY nameChanged)

    Q_PROPERTY(QString dateRecorded READ getDateRecorded)

public:
    explicit HealthEvent(QObject *parent = nullptr);

    explicit HealthEvent(const QString &name, const QString &dateRecorded, QObject *parent = nullptr);

    virtual ~HealthEvent();
    
    QString getName() const;

    QString getDateRecorded() const;

signals:
    void nameChanged();

public slots:
    void setName(const QString &name);

private:
    QString m_name;

    QString m_dateRecorded;

    DateGetter* date;
};

#endif // HEALTHEVENT_H
