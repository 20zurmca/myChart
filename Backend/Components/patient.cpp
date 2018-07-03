#include "patient.h"

Patient::Patient(QObject *parent) : QObject(parent), m_bloodPressures("Blood Pressure"), m_heights("Height"), m_weights("Weight"), m_bmis("BMI"), m_visions("Vision")
{

}

Patient::~Patient()
{

}
