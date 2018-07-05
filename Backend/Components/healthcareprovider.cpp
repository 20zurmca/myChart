#include "healthcareprovider.h"

HealthCareProvider::HealthCareProvider(QObject *parent) : QObject(parent)
{

}

HealthCareProvider::HealthCareProvider(const QString &name,
                                       const QString &type,
                                       const QString &officeAddress,
                                       const QString &officePhone,
                                       QObject *parent): QObject(parent),
                                                        m_name(name),
                                                        m_type(type),
                                                        m_officeAddress(officeAddress),
                                                        m_officePhone(officePhone) {}

HealthCareProvider::~HealthCareProvider()
{

}

QString HealthCareProvider::getName() const
{
    return m_name;
}

QString HealthCareProvider::getType() const
{
    return m_type;
}

QString HealthCareProvider::getOfficeAddress() const
{
    return m_officeAddress;
}

QString HealthCareProvider::getOfficePhone() const
{
    return m_officePhone;
}

void HealthCareProvider::setName(const QString &name)
{
    if(name != m_name)
    {
        m_name = name;
        emit nameChanged(name);
    }
}

void HealthCareProvider::setType(const QString &type)
{
    if(type != m_type)
    {
        m_type = type;
        emit typeChanged(type);
    }
}

void HealthCareProvider::setOfficeAddress(const QString &officeAddress)
{
    if(officeAddress != m_officeAddress)
    {
        m_officeAddress = officeAddress;
        emit officeAddressChanged(officeAddress);
    }

}

void HealthCareProvider::setOfficePhone(const QString &officePhone)
{
    if(officePhone != m_officePhone)
    {
        m_officePhone = officePhone;
        emit officePhoneChanged(officePhone);
    }
}
