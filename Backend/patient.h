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
#include <QQmlListProperty>


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

    Q_PROPERTY(HealthAttribute<QString> bloodPressures READ getBloodPressures)

    Q_PROPERTY(HealthAttribute<float> heights READ getHeights)

    Q_PROPERTY(HealthAttribute<float> bmis READ getBmis)

    Q_PROPERTY(HealthAttribute<float> weights READ getWeights)

    Q_PROPERTY(HealthAttribute<QString> visions READ getVisions)

    Q_PROPERTY(QQmlListProperty<HealthCareProvider> healthCareProviders READ getHealthCareProviders)

    Q_PROPERTY(QQmlListProperty<Symptom> symptoms READ getSymptoms)

    Q_PROPERTY(QQmlListProperty<Diagnosis> diagnoses READ getDiagnoses)

    Q_PROPERTY(QQmlListProperty<Allergy> allergies READ getAllergies)

    Q_PROPERTY(QQmlListProperty<Appointment> appointments READ getAppointments)

    Q_PROPERTY(QQmlListProperty<Medication> medications READ getMedications)

    Q_PROPERTY(QQmlListProperty<Vaccine> vaccines READ getVaccines)

    Q_PROPERTY(QQmlListProperty<Insurance> insurances READ getInsurances)

    Q_PROPERTY(QQmlListProperty<Surgery> surgeries READ getSurgeries)

    Q_PROPERTY(QQmlListProperty<EmergencyContact> emergencyContacts READ getEmergencyContacts)

public:
    explicit Patient(QObject *parent = nullptr);

    virtual ~Patient();
    
    QString getFirstName() const;

    QString getLastName() const;

    QString getBirthDate() const;

    int getAge() const;

    QString getCurrentAddress() const;

    QString getHomePhone() const;

    QString getWorkPhone() const;

    QString getCellPhone() const;

    int getId() const;

    HealthAttribute<QString> getBloodPressures() const;

    void addBloodPressureObservation(HealthObservation<QString> bloodPressure);

    HealthAttribute<float> getHeights() const;

    HealthAttribute<float> getWeights() const;

    HealthAttribute<float> getBmis() const;

    HealthAttribute<QString> getVisions() const;

    QQmlListProperty<HealthCareProvider> getHealthCareProviders();

    void appendHealthCareProvider(HealthCareProvider* provider);

    int healthCareProviderCount() const;

    HealthCareProvider *healthCareProvider(int pos) const;

    void removeHealthCareProvider(int pos);

    void clearHealthCareProviders();

    QQmlListProperty<Symptom> getSymptoms();

    void appendSymptom(Symptom* symptom);

    int symptomCount() const;

    Symptom *symptom(int pos) const;

    void removeSymptom(int pos);

    void clearSymptoms();

    QQmlListProperty<Diagnosis> getDiagnoses();

    void appendDiagnosis(Diagnosis* diagnosis);

    int diagnosisCount() const;

    Diagnosis *diagnosis(int pos) const;

    void removeDiagnosis(int pos);

    void clearDiagnoses();

    QQmlListProperty<Appointment> getAppointments();

    void appendAppointment(Appointment* symptom);

    int appointmentCount() const;

    Appointment *appointment(int pos) const;

    void removeAppointment(int pos);

    void clearAppointments();

    QQmlListProperty<Allergy> getAllergies();

    void appendAllergy(Allergy* allergy);

    int allergyCount() const;

    Allergy *allergy(int pos) const;

    void removeAllergy(int pos);

    void clearAllergies();

    QQmlListProperty<Medication> getMedications();

    void appendMedication(Medication* symptom);

    int medicationCount() const;

    Medication *medication(int pos) const;

    void removeMedication(int pos);

    void clearMedications();

    QQmlListProperty<Vaccine> getVaccines();

    void appendVaccine(Vaccine* vaccine);

    int vaccineCount() const;

    Vaccine *vaccine(int pos) const;

    void removeVaccine(int pos);

    void clearVaccines();

    QQmlListProperty<Insurance> getInsurances();

    void appendInsurance(Insurance* symptom);

    int insuranceCount() const;

    Insurance *insurance(int pos) const;

    void removeInsurance(int pos);

    void clearInsurances();

    QQmlListProperty<Surgery> getSurgeries();

    void appendSurgery(Surgery* surgery);

    int surgeryCount() const;

    Surgery *surgery(int pos) const;

    void removeSurgery(int pos);

    void clearSurgeries();

    QQmlListProperty<EmergencyContact> getEmergencyContacts();

    void appendEmergencyContact(EmergencyContact* emergencyContact);

    int emergencyContactCount() const;

    EmergencyContact *emergencyContact(int pos) const;

    void removeEmergencyContact(int pos);

    void clearEmergencyContacts();


signals:
    void firstNameChanged();

    void lastNameChanged();

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
    QString m_firstName;

    QString m_lastName;

    QString m_bloodType;

    QString m_birthDate;

    int m_age;

    int m_id;

    QString m_currentResidence;

    QString m_homePhone;

    QString m_workPhone;

    QString m_cellPhone;

    HealthAttribute<QString> m_bloodPressures;

    HealthAttribute<float> m_heights;

    HealthAttribute<float> m_weights;

    HealthAttribute<float> m_bmis;

    HealthAttribute<QString> m_visions;

    QVector<HealthCareProvider*> m_healthCareProviders;

    QVector<Symptom*> m_symptoms;

    QVector<Diagnosis*> m_diagnoses;

    QVector<Allergy*> m_allergies;

    QVector<Appointment*> m_appointments;

    QVector<Medication*> m_medications;

    QVector<Vaccine*> m_vaccines;

    QVector<Insurance*> m_insurances;

    QVector<Surgery*> m_surgeries;

    QVector<EmergencyContact*> m_emergencyContacts;
};

#endif // PATIENT_H
