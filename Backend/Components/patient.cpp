#include "patient.h"

Patient::Patient(QObject *parent) : QObject(parent),
                                    m_firstName("-"),
                                    m_lastName("-"),
                                    m_birthDate("-"),
                                    m_bloodType("-"),
                                    m_age(0),
                                    m_currentAddress("-"),
                                    m_homePhone("-"),
                                    m_workPhone("-"),
                                    m_cellPhone("-"),
                                    m_id(0)

{
    m_bloodPressures = new HealthAttribute<QString>("Blood Pressure");
    m_heights = new HealthAttribute<float>("Height");
    m_weights = new HealthAttribute<float>("Weight");
    m_bmis = new HealthAttribute<float>("BMI");
    m_visions = new HealthAttribute<QString>("Vision");
    m_symptoms = new SymptomList();
    m_diagnoses = new DiagnosesList();
    m_allergies = new AllergyList();
    m_appointments = new AppointmentList();
    m_medications = new MedicationList();
    m_vaccines = new VaccinationList();
    m_insurances = new InsuranceList();
    m_surgeries = new SurgeryList();
    m_emergencyContacts = new EmergencyContactList();
}

Patient::Patient(const QString &firstName,
                 const QString &lastName,
                 const QString &birthDate,
                 const QString &bloodType,
                 const int &age,
                 const QString &currentAddress,
                 const QString &homePhone,
                 const QString &workPhone,
                 const QString &cellPhone,
                 const int &id,
                 QObject *parent) : QObject(parent),
                                    m_firstName(firstName),
                                    m_lastName(lastName),
                                    m_birthDate(birthDate),
                                    m_bloodType(bloodType),
                                    m_age(age),
                                    m_currentAddress(currentAddress),
                                    m_homePhone(homePhone),
                                    m_workPhone(workPhone),
                                    m_cellPhone(cellPhone),
                                    m_id(id)
{
    m_bloodPressures = new HealthAttribute<QString>("Blood Pressure");
    m_heights = new HealthAttribute<float>("Height");
    m_weights = new HealthAttribute<float>("Weight");
    m_bmis = new HealthAttribute<float>("BMI");
    m_visions = new HealthAttribute<QString>("Vision");
    m_symptoms = new SymptomList();
    m_diagnoses = new DiagnosesList();
    m_allergies = new AllergyList;
    m_appointments = new AppointmentList();
    m_medications = new MedicationList();
    m_vaccines = new VaccinationList();
    m_insurances = new InsuranceList();
    m_surgeries = new SurgeryList();
    m_emergencyContacts = new EmergencyContactList();
}

Patient::~Patient()
{
    delete m_bloodPressures;
    delete m_heights;
    delete m_weights;
    delete m_bmis;
    delete m_visions;
    delete m_symptoms;
    delete m_diagnoses;
    delete m_allergies;
    delete m_appointments;
    delete m_medications;
    delete m_vaccines;
    delete m_insurances;
    delete m_surgeries;
    delete m_emergencyContacts;
}

QString Patient::getFirstName() const
{
    return m_firstName;
}

QString Patient::getLastName() const
{
    return m_lastName;
}

QString Patient::getBirthDate() const
{
    return m_birthDate;
}

int Patient::getAge() const
{
    return m_age;
}

QString Patient::getCurrentAddress() const
{
    return m_currentAddress;
}

QString Patient::getHomePhone() const
{
    return m_homePhone;
}

QString Patient::getWorkPhone() const
{
    return m_workPhone;
}

QString Patient::getCellPhone() const
{
    return m_cellPhone;
}

int Patient::getId() const
{
    return m_id;
}

HealthAttribute<QString>* Patient::getBloodPressures() const
{
    return m_bloodPressures;
}

void Patient::addBloodPressureObservation(HealthObservation<QString> *bloodPressure)
{
    m_bloodPressures->addObservation(bloodPressure);
}

void Patient::clearBloodPressureObservations()
{
    m_bloodPressures->clearObservations();
}

QString* Patient::getBloodPressureObservation(int pos)
{
    return m_bloodPressures->getObservation(pos);
}

void Patient::removeBloodPressureObservation(int pos)
{
    m_bloodPressures->removeObservation(pos);
}

HealthAttribute<float> *Patient::getHeights() const
{
    return m_heights;
}

void Patient::addHeightObservation(HealthObservation<float> *height)
{
    m_heights->addObservation(height);
}

void Patient::clearHeightObservations()
{
    m_heights->clearObservations();
}

float* Patient::getHeightObservation(int pos)
{
    return m_heights->getObservation(pos);
}

void Patient::removeHeightObservation(int pos)
{
    m_heights->removeObservation(pos);
}

HealthAttribute<float> *Patient::getWeights() const
{
    return m_weights;
}

void Patient::addWeightObservation(HealthObservation<float> *weight)
{
    m_weights->addObservation(weight);
}

void Patient::clearWeightObservations()
{
    m_weights->clearObservations();
}

float* Patient::getWeightObservation(int pos)
{
    return m_weights->getObservation(pos);
}

void Patient::removeWeightObservation(int pos)
{
    m_weights->removeObservation(pos);
}

HealthAttribute<float> *Patient::getBmis() const
{
    return m_bmis;
}

void Patient::addBmiObservation(HealthObservation<float> *bmi)
{
    return m_bmis->addObservation(bmi);
}

void Patient::clearBmiObservations()
{
    return m_bmis->clearObservations();
}

float* Patient::getBmiObservation(int pos)
{
    return m_bmis->getObservation(pos);
}

void Patient::removeBmiObservation(int pos)
{
    m_bmis->removeObservation(pos);
}

HealthAttribute<QString> *Patient::getVisions() const
{
    return m_visions;
}

void Patient::addVisionObservation(HealthObservation<QString> *vision)
{
    m_visions->addObservation(vision);
}

void Patient::clearVisionObservations()
{
    m_visions->clearObservations();
}

QString* Patient::getVisionObservation(int pos)
{
    return m_visions->getObservation(pos);
}

void Patient::removeVisionObservation(int pos)
{
    m_visions->removeObservation(pos);
}


SymptomList *Patient::getSymptoms() const
{
    return m_symptoms;
}

DiagnosesList *Patient::getDiagnoses() const
{
    return m_diagnoses;
}

AllergyList *Patient::getAllergies() const
{
    return m_allergies;
}

AppointmentList *Patient::getAppointments() const
{
    return m_appointments;
}

MedicationList *Patient::getMedications() const
{
    return m_medications;
}

VaccinationList *Patient::getVaccines() const
{
    return m_vaccines;
}

InsuranceList *Patient::getInsurances() const
{
    return m_insurances;
}

SurgeryList *Patient::getSurgeries() const
{
    return m_surgeries;
}

EmergencyContactList *Patient::getEmergencyContacts() const
{
    return m_emergencyContacts;
}

HealthCareProviderList *Patient::getHealthCareProviders() const
{
    return m_healthCareProviders;
}

QString Patient::getBloodtype() const
{
    return m_bloodType;
}

void Patient::setFirstName(const QString &firstName)
{
    if(firstName != m_firstName)
    {
        m_firstName = firstName;
        emit firstNameChanged(firstName);
    }
}

void Patient::setLastName(const QString &lastName)
{
    if(lastName != m_lastName)
    {
        m_lastName = lastName;
        emit lastNameChanged(lastName);
    }
}


void Patient::setBirthDate(const QString &birthdate)
{
    if(birthdate != m_birthDate)
    {
        m_birthDate = birthdate;
        emit birthDateChanged(birthdate);
    }
}

void Patient::setAge(const int &age)
{
    if(age != m_age)
    {
        m_age = age;
        emit ageChanged(age);
    }
}

void Patient::setCurrentAddress(const QString &currentAddress)
{
    if(currentAddress != m_currentAddress)
    {
        m_currentAddress = currentAddress;
        emit currentAddressChanged(currentAddress);
    }
}

void Patient::setHomePhone(const QString &homePhone)
{
    if(homePhone != m_homePhone)
    {
        m_homePhone = homePhone;
        emit homePhoneChanged(homePhone);
    }
}

void Patient::setWorkPhone(const QString &workPhone)
{
    if(workPhone != m_workPhone)
    {
        m_workPhone = workPhone;
        emit workPhoneChanged(workPhone);
    }

}

void Patient::setCellPhone(const QString &cellPhone)
{
    if(cellPhone != m_cellPhone)
    {
        m_cellPhone = cellPhone;
        emit cellPhoneChanged(cellPhone);
    }

}

void Patient::setId(const int &id)
{
    if(id != m_id)
    {
        m_id = id;
        emit idChanged(id);
    }

}

void Patient::setInsurances(InsuranceList *insurances)
{
    if(insurances != m_insurances)
    {
        m_insurances = insurances;
        emit insurancesChanged(insurances);
    }

}

void Patient::setEmergencyContacts(EmergencyContactList *emergencyContacts)
{
    if(emergencyContacts != m_emergencyContacts)
    {
        m_emergencyContacts = emergencyContacts;
        emit emergencyContactsChanged(emergencyContacts);
    }
}

void Patient::setBloodType(const QString &bloodType)
{
    if(bloodType != m_bloodType)
    {
        m_bloodType = bloodType;
        emit bloodTypeChanged(bloodType);
    }
}

void Patient::loadBloodPressures()

{

}

void Patient::loadHeights()
{

}

void Patient::loadWeights()
{

}

void Patient::loadBMIs()
{

}

void Patient::loadVisions()
{

}
