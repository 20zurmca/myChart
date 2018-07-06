#include "surgery.h"

Surgery::~Surgery()
{

}

int Surgery::getPatientId() const
{
    return m_id;
}

QString Surgery::getPreOpInstructions() const
{
    return m_preOpInstructions;
}

QString Surgery::getPostOpInstructions() const
{
    return m_postOpInstructions;
}

QString Surgery::getSurgeon() const
{
    return m_surgeon;
}

QString Surgery::getRecoveryTime() const
{
    return m_recoveryTime;
}

QString Surgery::getRecoveryNotes() const
{
    return m_recoveryNotes;
}

QString Surgery::getProcedureDate() const
{
    return m_procedureDate;
}

void Surgery::setPatientId(const int &patientId)
{
    if(patientId != m_id)
    {
        m_id = patientId;
        emit patientIdChanged();
    }
}

void Surgery::setPreOpInstructions(const QString &preOpInstructions)
{
    if(preOpInstructions != m_preOpInstructions)
    {
        m_preOpInstructions = preOpInstructions;
        emit preOpInstructionsChanged(prepOpInstructions);
    }
}

void Surgery::setPostOpInstructions(const QString &postOpInstructions)
{
    if(postOpInstructions != m_postOpInstructions)
    {
        m_postOpInstructions = postOpInstructions;
        emit postOpInstructionsChanged(postOpInstructions);
    }
}

void Surgery::setSurgeon(const QString &surgeon)
{
    if(surgeon != m_surgeon)
    {
        m_surgeon = surgeon;
        emit surgeonChanged(surgeon);
    }
}

void Surgery::setRecoveryTime(const QString &recoveryTime)
{
    if(recoveryTime != m_recoveryTime)
    {
        m_recoveryTime = recoveryTime;
        emit recoveryTimeChanged(recoveryTime);
    }
}

void Surgery::setRecoveryNotes(const QString &recoveryNotes)
{
    if(recoveryNotes != m_recoveryNotes)
    {
        m_recoveryNotes = recoveryNotes;
        emit recoveryNotesChanged(recoveryNotes);
    }
}

void Surgery::setProcedureDate(const QString &procedureDate)
{
    if(procedureDate != m_procedureDate)
    {
        m_procedureDate = procedureDate;
        emit procedureDateChanged(procedureDate);
    }
}
