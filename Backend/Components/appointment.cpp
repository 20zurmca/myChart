#include "appointment.h"

Appointment::Appointment(QObject *parent) : QObject(parent)
{

}

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

QString Appointment::getTime() const
{
    return m_time;
}

void Appointment::setDate(QString date)
{
    if(date != m_date)
    {
        m_date = date;
        emit dateChanged();
    }
}

void Appointment::setId(int id)
{
    if(id != m_id)
    {
        m_id = id;
        emit idChanged();
    }
}

void Appointment::setLocation(QString location)
{
    if(location != m_location)
    {
        m_location = location;
        emit locationChanged();
    }

}

void Appointment::setReason(QString reason)
{
    if (reason != m_reason)
    {
        m_reason = reason;
        emit reasonChanged();
    }
}

void Appointment::setTime(QString time)
{
    if(time != m_time)
    {
        m_time = time;
        emit timeChanged();
    }
}

