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
#include "../Lists/allergylist.h"
#include "../Lists/appointmentlist.h"
#include "../Lists/diagnoseslist.h"
#include "../Lists/emergencycontactlist.h"
#include "../Lists/healthcareproviderlist.h"
#include "../Lists/insurancelist.h"
#include "../Lists/medicationlist.h"
#include "../Lists/surgerylist.h"
#include "../Lists/symptomlist.h"
#include "../Lists/vaccinationlist.h"


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

    Q_PROPERTY(HealthAttribute<QString>* bloodPressures READ getBloodPressures)

    Q_PROPERTY(HealthAttribute<float>* heights READ getHeights)

    Q_PROPERTY(HealthAttribute<float>* bmis READ getBmis)

    Q_PROPERTY(HealthAttribute<float>* weights READ getWeights)

    Q_PROPERTY(HealthAttribute<QString>* visions READ getVisions)

    Q_PROPERTY(HealthCareProviderList* healthCareProviders READ getHealthCareProviders)

    Q_PROPERTY(SymptomList* symptoms READ getSymptoms)

    Q_PROPERTY(DiagnosesList* diagnoses READ getDiagnoses)

    Q_PROPERTY(AllergyList* allergies READ getAllergies)

    Q_PROPERTY(AppointmentList* appointments READ getAppointments)

    Q_PROPERTY(MedicationList* medications READ getMedications)

    Q_PROPERTY(VaccinationList* vaccines READ getVaccines)

    Q_PROPERTY(InsuranceList* insurances READ getInsurances WRITE setInsurances)

    Q_PROPERTY(SurgeryList* surgeries READ getSurgeries)

    Q_PROPERTY(EmergencyContactList* emergencyContacts READ getEmergencyContacts WRITE setEmergencyContacts)

public:
    explicit Patient(QObject *parent = nullptr);

    explicit Patient(const QString &firstName,
                     const QString &lastName,
                     const QString birthDate,
                     const int &age,
                     const QString &currentAddress,
                     const QString &homePhone,
                     const QString &workPhone,
                     const QString &cellPhone,
                     const int &id,
                     QObject *parent = nullptr);

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

    Q_INVOKABLE void addBloodPressureObservation(HealthObservation<QString>* bloodPressure);

    Q_INVOKABLE void clearBloodPressureObservations();

    Q_INVOKABLE QString getBloodPressureObservation(int pos);

    Q_INVOKABLE void removeBloodPressureObservation(int pos);

    HealthAttribute<float>* getHeights() const;

    Q_INVOKABLE void addHeightObservation(HealthObservation<float>* height);

    Q_INVOKABLE void clearHeightObservations();

    Q_INVOKABLE float getHeightObservation(int pos);

    Q_INVOKABLE void removeHeightObservation(int pos);

    HealthAttribute<float>* getWeights() const;

    Q_INVOKABLE void addWeightObservation(HealthObservation<float>* weight);

    Q_INVOKABLE void clearWeightObservations();

    Q_INVOKABLE float getWeightObservation(int pos);

    Q_INVOKABLE void removeWeightObservation(int pos);

    HealthAttribute<float>* getBmis() const;

    Q_INVOKABLE void addBmiObservation(HealthObservation<float>* bmi);

    Q_INVOKABLE void clearBmiObservations();

    Q_INVOKABLE float getBmiObservation(int pos);

    Q_INVOKABLE void removeBmiObservation(int pos);

    HealthAttribute<QString>* getVisions() const;

    Q_INVOKABLE void addVisionObservation(HealthObservation<QString>* vision);

    Q_INVOKABLE void clearVisionObservations();

    Q_INVOKABLE QString getVisionObservation(int pos);

    Q_INVOKABLE void removeVisionObservation(int pos);

    SymptomList* getSymptoms() const;

    DiagnosesList* getDiagnoses() const;

    AllergyList* getAllergies() const;

    AppointmentList* getAppointments() const;

    MedicationList* getMedications() const;

    VaccinationList* getVaccines() const;

    InsuranceList* getInsurances() const;

    SurgeryList* getSurgeries() const;

    EmergencyContactList* getEmergencyContacts() const;

    HealthCareProviderList* getHealthCareProviders() const;



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
    void setFirstName(const QString &firstName);

    void setLastName(const QString &lastName);

    void setVision(const QString &vision);

    void setBirthDate(const QString &birthdate);

    void setAge(const int &age);

    void setCurrentAddress(const QString &currentAddress);

    void setHomePhone(const QString &homePhone);

    void setWorkPhone(const QString &workPhone);

    void setCellPhone(const QString &cellPhone);

    void setId(const int &id);

    void setInsurances(InsuranceList* insurance);

    void setEmergencyContacts(EmergencyContactList* emergencyContacts);

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

    HealthAttribute<QString>* m_bloodPressures;

    HealthAttribute<float>* m_heights;

    HealthAttribute<float>* m_weights;

    HealthAttribute<float>* m_bmis;

    HealthAttribute<QString>* m_visions;

    HealthCareProviderList* m_healthCareProviders;

    SymptomList* m_symptoms;

    DiagnosesList* m_diagnoses;

    AllergyList* m_allergies;

    AppointmentList* m_appointments;

    MedicationList* m_medications;

    VaccinationList* m_vaccines;

    InsuranceList* m_insurances;

    SurgeryList* m_surgeries;

    EmergencyContactList* m_emergencyContacts;

    void loadBloodPressures();

    void loadHeights();

    void loadWeights();

    void loadBMIs();

    void loadVisions();
};

#endif // PATIENT_H
