#include "allergy.h"

Allergy::Allergy(QObject *parent) : QObject(parent), m_type("N/A"), m_isSeasonal(false), m_isLifeThreatening(false)
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

void Allergy::setIsLifeThreatening(bool isLifeThreatening)
{
    if(isLifeThreatening != m_isLifeThreatening)
    {
        m_isLifeThreatening = isLifeThreatening;
        emit isLifeThreateningChanged();
    }

}

void Allergy::setIsSeasonal(bool isSeasonal)
{
    if(isSeasonal != m_isSeasonal)
    {
        m_isSeasonal = isSeasonal;
        emit isSeasonalChanged();
    }

}

void Allergy::setType(QString newType)
{
    if(newType != m_type)
    {
        m_type = newType;
        emit typeChanged();

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
