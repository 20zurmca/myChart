#include "emergencycontact.h"

EmergencyContact::EmergencyContact(QObject *parent) : QObject(parent)
{

}

EmergencyContact::EmergencyContact(const int &id,
                                   const QString &name,
                                   const QString &homePhone,
                                   const QString &workPhone,
                                   const QString &cellPhone,
                                   const QString &relationshipToPatient,
                                   QObject *parent) : QObject(parent),
                                                      m_id(id),
                                                      m_name(name),
                                                      m_homePhone(homePhone),
                                                      m_workPhone(workPhone),
                                                      m_cellPhone(cellPhone),
                                                      m_relationshipToPatient(relationshipToPatient) {}


EmergencyContact::~EmergencyContact()
{

}

QString EmergencyContact::getName() const
{
    return m_name;
}

QString EmergencyContact::getHomePhone() const
{
    return m_homePhone;
}

QString EmergencyContact::getWorkPhone() const
{
    return m_workPhone;
}

QString EmergencyContact::getCellPhone() const
{
    return m_cellPhone;
}

QString EmergencyContact::getRelationshipToPatient() const
{
    return m_relationshipToPatient;
}

int EmergencyContact::getId() const
{
    return m_id;
}

void EmergencyContact::setName(const QString &name)
{
    if(name != m_name)
    {
        m_name = name;
        emit nameChanged(name);
    }
}

void EmergencyContact::setHomePhone(const QString &homePhone)
{
    if(homePhone != m_homePhone)
    {
        m_homePhone = homePhone;
        emit homePhoneChanged(homePhone);
    }

}

void EmergencyContact::setWorkPhone(const QString &workPhone)
{
    if(workPhone != m_workPhone)
    {
        m_workPhone = workPhone;
        emit workPhoneChanged(workPhone);
    }

}

void EmergencyContact::setCellPhone(const QString &cellPhone)
{
    if(cellPhone != m_cellPhone)
    {
        m_cellPhone = cellPhone;
        emit cellPhoneChanged(cellPhone);
    }

}

void EmergencyContact::setRelationshipToPatient(const QString &relationshipToPatient)
{
    if (relationshipToPatient != m_relationshipToPatient)
    {
        m_relationshipToPatient = relationshipToPatient;
        emit relationshipToPatientChanged(relationshipToPatient);
    }

}

void EmergencyContact::setId(const int &id)
{
    if (id != m_id)
    {
        m_id = id;
        emit idChanged(id);
    }

}
