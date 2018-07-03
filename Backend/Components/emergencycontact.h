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
    
    QString getName() const;

    QString getHomePhone() const;

    QString getWorkPhone() const;

    QString getCellPhone() const;

    QString getRelationshipToPatient() const;

    int getId() const;
    

signals:
    void nameChanged();

    void homePhoneChanged();

    void workPhoneChanged();

    void cellPhoneChanged();

    void relationshipToPatientChanged();

    void idChanged();

public slots:
    void setName(QString name);

    void setHomePhone(QString homePhone);

    void setWorkPhone(QString workPhone);

    void setCellPhone(QString cellPhone);

    void setRelationshipToPatient(QString relationshipToPatient);

    void setId(int id);

private:
    QString m_name;

    QString m_homePhone;

    QString m_workPhone;

    QString m_cellPhone;

    QString m_relationshipToPatient;

    int m_id;

};

#endif // EMERGENCYCONTACT_H
