#include "symptom.h"

Symptom::Symptom(QObject *parent) : QObject(parent)
{

}

Symptom::Symptom(const QString &name, const QString &dateRecorded, QObject *parent): QObject(parent), m_name(name), m_dateRecorded(dateRecorded)
{

}

Symptom::~Symptom()
{

}

QString Symptom::getName() const
{
    return m_name;
}

QString Symptom::getDateRecorded() const
{
    return m_dateRecorded;
}

void Symptom::setName(const QString &name)
{
    if(name != m_name)
    {
        m_name = name;
        emit nameChanged();
    }
}
