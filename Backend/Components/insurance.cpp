#include "insurance.h"

Insurance::Insurance(QObject *parent) : QObject(parent)
{

}

Insurance::Insurance(const QString &memberId,
                     const QString &type,
                     const QString &carrier,
                     const QString &employer,
                     const QString &groupNumber,
                     const QString &sponser,
                     QObject *parent) : QObject(parent),
                                        m_memberId(memberId),
                                        m_type(type),
                                        m_carrier(carrier),
                                        m_employer(employer),
                                        m_groupNumber(groupNumber),
                                        m_sponser(sponser) {}

Insurance::~Insurance()
{

}

QString Insurance::getMemberId() const
{
    return m_memberId;
}

QString Insurance::getType() const
{
    return m_type;
}

QString Insurance::getCarrier() const
{
    return m_carrier;
}

QString Insurance::getEmployer() const
{
    return m_employer;
}

QString Insurance::getGroupNumber() const
{
    return m_groupNumber;
}

QString Insurance::getSponser() const
{
    return m_sponser;
}

void Insurance::setMemberId(const QString &memberId)
{
    if(memberId != m_memberId)
    {
        m_memberId = memberId;
        emit memberIdChanged(memberId);
    }
}

void Insurance::setType(const QString &type)
{
    if(type != m_type)
    {
        m_type = type;
        emit typeChanged(type);
    }
}

void Insurance::setCarrier(const QString &carrier)
{
    if(carrier != m_carrier)
    {
        m_carrier = carrier;
        emit carrierChanged(carrier);
    }
}

void Insurance::setEmployer(const QString &employer)
{
    if(employer != m_employer)
    {
        m_employer = employer;
        emit employerChanged(employer);
    }

}

void Insurance::setGroupNumber(const QString &groupNumber)
{
    if(groupNumber != m_groupNumber)
    {
        m_groupNumber = groupNumber;
        emit groupNumberChanged(groupNumber);
    }

}

void Insurance::setSponser(const QString &sponser)
{
    if(sponser != m_sponser)
    {
        m_sponser = sponser;
        emit sponserChanged(sponser);
    }
}
