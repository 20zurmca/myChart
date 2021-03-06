#include "appointment.h"

Appointment::Appointment(QObject *parent) : QObject(parent)
{

}

Appointment::Appointment(const int &id,
                         const QString &date,
                         const QString &time,
                         const QString &location,
                         const QString &reason,
                         QObject *parent) : QObject(parent),
                                            m_id(id),
                                            m_date(date),
                                            m_time(time),
                                            m_location(location),
                                            m_reason(reason) {}

Appointment::~Appointment()
{

}

int Appointment::getId() const
{
    return m_id;
}

QString Appointment::getDate() const
{
    return m_date;
}

QString Appointment::getLocation() const
{
    return m_location;
}

QString Appointment::getReason() const
{
    return m_reason;
}

QString Appointment::getDateMade() const
{

}

QString Appointment::getTime() const
{
    return m_time;
}

void Appointment::setDate(const QString &date)
{
    if(date != m_date)
    {
        m_date = date;
        emit dateChanged(date);
    }
}

void Appointment::setId(const int &id)
{
    if(id != m_id)
    {
        m_id = id;
        emit idChanged(id);
    }
}

void Appointment::setLocation(const QString &location)
{
    if(location != m_location)
    {
        m_location = location;
        emit locationChanged(location);
    }

}

void Appointment::setReason(const QString &reason)
{
    if (reason != m_reason)
    {
        m_reason = reason;
        emit reasonChanged(reason);
    }
}

void Appointment::setDateMade(QString dateMade)
{

}

void Appointment::setTime(const QString &time)
{
    if(time != m_time)
    {
        m_time = time;
        emit timeChanged(time);
    }
}

