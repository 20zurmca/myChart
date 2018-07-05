#include "healthevent.h"

HealthEvent::HealthEvent(QObject *parent) : QObject(parent)
{

}

HealthEvent::HealthEvent(const QString &name, const QString &dateRecorded, QObject *parent) : QObject(parent), m_name(name), m_dateRecorded(dateRecorded)
{
    date = new DateGetter();
}

HealthEvent::~HealthEvent()
{
    delete date;
}

QString HealthEvent::getName() const
{
    return m_name;
}

QString HealthEvent::getDateRecorded() const
{
    return date->getAbbrDate();
}

void HealthEvent::setName(const QString &name)
{
    if (name != m_name)
    {
        m_name = name;
        emit nameChanged(name);
    }
}
