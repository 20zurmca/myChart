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

}

void Patient::addBmiObservation(HealthObservation<float> *bmi)
{

}

void Patient::clearBmiObservations()
{

}

float* Patient::getBmiObservation(int pos)
{

}

void Patient::removeBmiObservation(int pos)
{

}

HealthAttribute<QString> *Patient::getVisions() const
{

}

void Patient::addVisionObservation(HealthObservation<QString> *vision)
{

}

void Patient::clearVisionObservations()
{

}

QString* Patient::getVisionObservation(int pos)
{

}

void Patient::removeVisionObservation(int pos)
{

}


SymptomList *Patient::getSymptoms() const
{

}

DiagnosesList *Patient::getDiagnoses() const
{

}

AllergyList *Patient::getAllergies() const
{

}

AppointmentList *Patient::getAppointments() const
{

}

MedicationList *Patient::getMedications() const
{

}

VaccinationList *Patient::getVaccines() const
{

}

InsuranceList *Patient::getInsurances() const
{

}

SurgeryList *Patient::getSurgeries() const
{

}

EmergencyContactList *Patient::getEmergencyContacts() const
{

}

HealthCareProviderList *Patient::getHealthCareProviders() const
{

}

void Patient::setFirstName(const QString &firstName)
{

}

void Patient::setLastName(const QString &lastName)
{

}

void Patient::setVision(const QString &vision)
{

}

void Patient::setBirthDate(const QString &birthdate)
{

}

void Patient::setAge(const int &age)
{

}

void Patient::setCurrentAddress(const QString &currentAddress)
{

}

void Patient::setHomePhone(const QString &homePhone)
{

}

void Patient::setWorkPhone(const QString &workPhone)
{

}

void Patient::setCellPhone(const QString &cellPhone)
{

}

void Patient::setId(const int &id)
{

}

void Patient::setInsurances(InsuranceList *insurance)
{

}

void Patient::setEmergencyContacts(EmergencyContactList *emergencyContacts)
{

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
