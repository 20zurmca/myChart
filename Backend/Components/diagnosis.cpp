#include "diagnosis.h"

Diagnosis::Diagnosis(QObject *parent) : QObject(parent)
{

}

Diagnosis::Diagnosis(const QString &diagnosis, const QString &treatmentPlan, QObject *parent) : QObject(parent), m_diagnosis(diagnosis), m_treatmentPlan(treatmentPlan)
{

}

Diagnosis::~Diagnosis()
{

}

QString Diagnosis::getDiagnosis() const
{
    return m_diagnosis;
}

QString Diagnosis::getTreatmentPlan() const
{
    return m_treatmentPlan;
}

void Diagnosis::setDiagnosis(const QString &diagnosis)
{
    if(diagnosis != m_diagnosis)
    {
        m_diagnosis = diagnosis;
        emit diagnosisChanged();
    }
}

void Diagnosis::setTreatmentPlan(const QString &treatmentPlan)
{
    if(treatmentPlan != m_treatmentPlan)
    {
        m_treatmentPlan = treatmentPlan;
        emit treatmentPlanChanged();
    }

}
