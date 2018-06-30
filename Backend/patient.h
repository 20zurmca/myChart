#ifndef PATIENT_H
#define PATIENT_H
#include "healthattribute.h"
#include "allergy.h"
#include "appointment.h"
#include "diagnosis.h"
#include "emergencycontact.h"
#include "healthcareprovider.h"
#include "insurance.h"
#include "medication.h"
#include "surgery.h"
#include "symptom.h"
#include "vaccine.h"


class Patient : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString firstName READ getFirstName WRITE setFirstName NOTIFY firstNameChanged)

    Q_PROPERTY(QString lastName READ getLastName WRITE setLastName NOTIFY lastNameChanged)

    Q_PROPERTY(QString birthDate READ getBirthDate WRITE setBirthDate NOTIFY birthDateChanged)

    Q_PROPERTY(int age READ getAge WRITE setAge)

    Q_PROPERTY(QString currentAddress READ getCurrentAddress WRITE setCurrentAddress NOTIFY currentAddressChanged)

    Q_PROPERTY(QString homePhone READ getHomePhone WRITE setHomePhone NOTIFY homePhoneChanged)

    Q_PROPERTY(QString workPhone READ getWorkPhone WRITE setWorkPhone NOTIFY workPhoneChanged)

    Q_PROPERTY(QString cellPhone READ getCellPhone WRITE setCellPhone NOTIFY cellPhoneChanged)

    Q_PROPERTY(int id READ getId WRITE setId NOTIFY idChanged)

public:
    explicit Patient(QObject *parent = nullptr);

    virtual ~Patient();

    HealthAttribute<QString> m_bloodPressures;

    HealthAttribute<QString> m_heights;

    HealthAttribute<float> m_weights;

    HealthAttribute<float> m_bmis;

    HealthAttribute<QString> m_visions;

    QVector<HealthCareProvider*> m_healthCareProviders;

    QVector<Symptom*> m_symptoms;

    QVector<Diagnosis*> m_diagnoses;

    QVector<Patient*> m_patientAccounts;

    QVector<Allergy*> m_allergies;

    QVector<Appointment*> m_appointments;

    QVector<Medication*> m_medications;

    QVector<Vaccine*> m_vaccines;

    QVector<Insurance*> m_insurances;

    QVector<Surgery*> m_surgeries;

    QVector<EmergencyContact*> m_emergencyContacts;
    
    QString getFirstName() const;

    QString getLastName() const;

    QString getVision() const;

    QString getBirthDate() const;

    int getAge() const;

    QString getCurrentAddress() const;

    QString getHomePhone() const;

    QString getWorkPhone() const;

    QString getCellPhone() const;

    int getId() const;

signals:
    void firstNameChanged();

    void lastNameChanged();

    void visionChanged();

    void birthDateChanged();

    void currentAddressChanged();

    void homePhoneChanged();

    void workPhoneChanged();

    void cellPhoneChanged();

    void idChanged();

public slots:
    void setFirstName(QString firstName);

    void setLastName(QString lastName);

    void setVision(QString vision);

    void setBirthDate(QString birthdate);

    void setAge(int age);

    void setCurrentAddress(QString currentAddress);

    void setHomePhone(QString homePhone);

    void setWorkPhone(QString workPhone);

    void setCellPhone(QString cellPhone);

    void setId(int id);

private:
    QString m_bloodType;

    QString m_BirthDate;

    int m_age;

    int m_id;

    QString m_currentResidence;

    QString m_homePhone;

    QString m_workPhone;

    QString m_cellPhone;

    Patient* m_relatedPatient;

    bool hasSameInsuranceAsRelatedPatient;
};

#endif // PATIENT_H
