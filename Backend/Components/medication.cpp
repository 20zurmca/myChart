#include "medication.h"

Medication::Medication(QObject *parent) : QObject(parent)
{

}

Medication::Medication(const QString &name,
                       const int &frequencyToRemind,
                       const bool &isPrescription,
                       const QString &dosage,
                       const QString &dateStarted,
                       const QString &dateEnded,
                       SideEffect *sideEffect,
                       QObject *parent) : QObject(parent),
                                          m_name(name),
                                          m_frequencyToRemind(frequencyToRemind),
                                          m_isPrescription(isPrescription),
                                          m_dosage(dosage),
                                          m_dateStarted(dateStarted),
                                          m_dateEnded(dateEnded),
                                          m_sideEffect(sideEffect){}

Medication::~Medication()
{
    delete m_sideEffect;
}

QString Medication::getName() const
{
    return m_name;
}

int Medication::getFrequencyToRemind() const
{
    return m_frequencyToRemind;
}

bool Medication::getIsPrescription() const
{
    return m_isPrescription;
}

QString Medication::getDosage() const
{
    return m_dosage;
}

QString Medication::getDateStarted() const
{
    return m_dateStarted;
}

QString Medication::getDateEnded() const
{
    return m_dateEnded;
}

SideEffect *Medication::getSideEffect() const
{
    return m_sideEffect;
}

void Medication::setName(const QString &name)
{
    if(name != m_name)
    {
        m_name = name;
        emit nameChanged();
    }
}

void Medication::setFrequencyToRemind(const int &frequencyToRemind)
{
    if(frequencyToRemind != m_frequencyToRemind)
    {
        m_frequencyToRemind = frequencyToRemind;
        emit frequencyToRemindChanged();
    }
}

void Medication::setIsPrescription(const bool &isPrescription)
{
    if(isPrescription != m_isPrescription)
    {
        m_isPrescription = isPrescription;
        emit isPrescriptionChanged();
    }
}

void Medication::setDosage(const QString &dosage)
{
    if(dosage != m_dosage)
    {
        m_dosage = dosage;
        emit dosageChanged();
    }
}

void Medication::setDateStarted(const QString &dateStarted)
{
    if(dateStarted != m_dateStarted)
    {
        m_dateStarted = dateStarted;
        emit dateStartedChanged();
    }

}

void Medication::setDateEnded(const QString &dateEnded)
{
    if(dateEnded != m_dateEnded)
    {
        m_dateEnded = dateEnded;
        emit dateEndedChanged();
    }

}

void Medication::setSideEffect(SideEffect *sideEffect)
{
    if(sideEffect != m_sideEffect)
    {
        m_sideEffect = sideEffect;
        emit sideEffectChanged();
    }
}
