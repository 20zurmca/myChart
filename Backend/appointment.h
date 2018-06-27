#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <QObject>
#include <QString>
#include <QDateTime>

class Appointment : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int id READ getId WRITE setId NOTIFY idChanged)

    Q_PROPERTY(QDateTime date READ getDate WRITE setDate NOTIFY dateChanged)

    Q_PROPERTY(QString time READ getTime WRITE setTime NOTIFY timeChanged)

    Q_PROPERTY(QString location READ getLocation WRITE setLocation NOTIFY locationChanged)

    Q_PROPERTY(QString reason READ getReason WRITE setReason NOTIFY reasonChanged)

public:
    explicit Appointment(QObject *parent = nullptr);
    virtual ~Appointment();

signals:

public slots:

private:
    int m_id;
    QDateTime m_date;
    QString m_time;
    QString m_location;
    QString m_reason;
};

#endif // APPOINTMENT_H
