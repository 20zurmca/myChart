#include "allergy.h"

Allergy::Allergy(QObject *parent) : QObject(parent), m_type("-"), m_isSeasonal(false), m_isLifeThreatening(false)
{

}

Allergy::Allergy(const QString &type, const bool &isSeasonal, const bool &isLifeThreatening, QObject *parent) : QObject(parent), m_type(type), m_isSeasonal(isSeasonal), m_isLifeThreatening(isLifeThreatening)
{

}


Allergy::~Allergy()
{

}

QString Allergy::getType() const
{
    return m_type;
}

bool Allergy::getIsLifeThreatening() const
{
    return m_isLifeThreatening;
}

bool Allergy::getIsSeasonal() const
{
    return m_isSeasonal;
}

void Allergy::setIsLifeThreatening(const bool &isLifeThreatening)
{
    if(isLifeThreatening != m_isLifeThreatening)
    {
        m_isLifeThreatening = isLifeThreatening;
        emit isLifeThreateningChanged(isLifeThreatening);
    }

}

void Allergy::setIsSeasonal(const bool &isSeasonal)
{
    if(isSeasonal != m_isSeasonal)
    {
        m_isSeasonal = isSeasonal;
        emit isSeasonalChangedisSeasonal;
    }

}

void Allergy::setType(const QString &newType)
{
    if(newType != m_type)
    {
        m_type = newType;
        emit typeChanged(newType);

    }
}

QString Allergy::isLifeThreateningAsQstr() const
{
    return m_isLifeThreatening ? QString("Yes") : QString("No");

}

QString Allergy::isSeasonalAsQstr() const
{
    return m_isSeasonal ? QString ("Yes") : QString ("No");

}
