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

    explicit EmergencyContact(const int &id,
                              const QString &name,
                              const QString &homePhone,
                              const QString &workPhone,
                              const QString &cellPhone,
                              const QString &relationshipToPatient,
                              QObject *parent = nullptr);

    virtual ~EmergencyContact();
    
    QString getName() const;

    QString getHomePhone() const;

    QString getWorkPhone() const;

    QString getCellPhone() const;

    QString getRelationshipToPatient() const;

    int getId() const;
    

signals:


    void nameChanged(QString name);

    void homePhoneChanged(QString homePhone);

    void workPhoneChanged(QString workPhone);

    void cellPhoneChanged(QString cellPhone);

    void relationshipToPatientChanged(QString relationshipToPatient);

    void idChanged(int id);

public slots:
    void setName(const QString &name);

    void setHomePhone(const QString &homePhone);

    void setWorkPhone(const QString &workPhone);

    void setCellPhone(const QString &cellPhone);

    void setRelationshipToPatient(const QString &relationshipToPatient);

    void setId(const int &id);

private:
    int m_id;

    QString m_name;

    QString m_homePhone;

    QString m_workPhone;

    QString m_cellPhone;

    QString m_relationshipToPatient;

};

#endif // EMERGENCYCONTACT_H
