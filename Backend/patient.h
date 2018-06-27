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

    Q_PROPERTY(QString vision READ getVision WRITE setVision NOTIFY visionChanged)

    Q_PROPERTY(QDateTime birthDate READ getBirthDate WRITE setBirthDate NOTIFY birthDateChanged)

    Q_PROPERTY(int age READ getAge WRITE setAge NOTIFY ageChanged)

    Q_PROPERTY(QString currentAddress READ getCurrentAddress WRITE setCurrentAddress NOTIFY currentAddressChanged)

    Q_PROPERTY(QString homePhone READ getHomePhone WRITE setHomePhone NOTIFY homePhoneChanged)

    Q_PROPERTY(QString workPhone READ getWorkPhone WRITE setWorkPhone NOTIFY workPhoneChanged)

    Q_PROPERTY(QString cellPhone READ getCellPhone WRITE setCellPhone NOTIFY cellPhoneChanged)

    Q_PROPERTY(int id READ getId WRITE setId NOTIFY idChanged)

public:
    explicit Patient(QObject *parent = nullptr);
    virtual ~Patient();

signals:

public slots:

private:
    QVector<Allergy> m_allergies;
    QVector<Appointment> m_appointments;
    QVector<Medication> m_medications;
    QVector<Vaccine> m_vaccines;
    QString m_bloodType;
    QVector<Insurance> m_insurances;
    QVector<Surgery> m_surgeries;
    QString m_vision;
    QVector<EmergencyContact> m_emergencyContacts;
    HealthAttribute<QString> m_heights;
    HealthAttribute<float> m_weights;
    HealthAttribute<float> m_bmis;
    QDateTime m_BirthDate;
    int m_age;
    int m_id;
    QString m_currentREsidence;
    QString m_homePhone;
    QString m_workPhone;
    QString m_cellPhone;
    QVector<HealthCareProvider> m_healthCareProviders;
    QVector<Symptom> m_symptoms;
    QVector<Diagnosis> m_diagnosis;
    QVector<Patient*> m_patientAccounts;
    Patient* m_relatedPatient;
    bool hasSameInsuranceAsRelatedPatient;
    HealthAttribute<QString> m_bloodPressures;




};

#endif // PATIENT_H
