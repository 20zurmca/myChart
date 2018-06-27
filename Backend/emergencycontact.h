#ifndef EMERGENCYCONTACT_H
#define EMERGENCYCONTACT_H

#include <QObject>
#include <QString>
class EmergencyContact : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ getName WRITE setName NOTIFY nameChanged)

    Q_PROPERTY(QString homePhone READ getHomePhone WRITE setHomePhone NOTIFY homePhoneChanged)

    Q_PROPERTY(QString workPhone READ getWorkPhone WRITE setWorkPhone NOTIFY workPhoneChanged)

    Q_PROPERTY(QString cellPhone READ getCellPhone WRITE setCellPhone NOTIFY cellPhoneChanged)

    Q_PROPERTY(QString relationshipToPatient READ getRelationshipToPatient WRITE setRelationshipToPatient NOTIFY relationshipToPatientChanged)

    Q_PROPERTY(int id READ getId WRITE setId NOTIFY idChanged)

public:
    explicit EmergencyContact(QObject *parent = nullptr);
    virtual ~EmergencyContact();

signals:

public slots:

private:
    QString m_name;
    QString m_homePhone;
    QString m_workPhone;
    QString m_cellPhone;
    QString m_relationshipToPatient;
    int m_id;

};

#endif // EMERGENCYCONTACT_H
