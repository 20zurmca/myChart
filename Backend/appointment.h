#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <QObject>
#include <QString>

class Appointment : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int id READ getId WRITE setId NOTIFY idChanged)

    Q_PROPERTY(QString date READ getDate WRITE setDate NOTIFY dateChanged)

    Q_PROPERTY(QString time READ getTime WRITE setTime NOTIFY timeChanged)

    Q_PROPERTY(QString location READ getLocation WRITE setLocation NOTIFY locationChanged)

    Q_PROPERTY(QString reason READ getReason WRITE setReason NOTIFY reasonChanged)

public:
    explicit Appointment(QObject *parent = nullptr);

    virtual ~Appointment();

    int getId() const;

    QString getDate() const;

    QString getTime() const;

    QString getLocation() const;

    QString getReason() const;

signals:
    void idChanged();

    void dateChanged();

    void timeChanged();

    void locationChanged();

    void reasonChanged();

public slots:
    void setId(int id);

    void setDate(QString date);

    void setTime(QString time);

    void setLocation(QString location);

    void setReason(QString reason);

private:
    int m_id;

    QString m_date;

    QString m_time;

    QString m_location;

    QString m_reason;
};

#endif // APPOINTMENT_H
