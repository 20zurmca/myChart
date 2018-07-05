#include "surgery.h"

Surgery::~Surgery()
{

}

int Surgery::getId() const
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

void Surgery::setId(const int &id)
{
    if(id != m_id)
    {
        m_id = id;
        emit idChanged();
    }
}

void Surgery::setPreOpInstructions(const QString &preOpInstructions)
{
    if(preOpInstructions != m_preOpInstructions)
    {
        m_preOpInstructions = preOpInstructions;
        emit preOpInstructionsChanged();
    }
}

void Surgery::setPostOpInstructions(const QString &postOpInstructions)
{
    if(postOpInstructions != m_postOpInstructions)
    {
        m_postOpInstructions = postOpInstructions;
        emit postOpInstructionsChanged();
    }
}

void Surgery::setSurgeon(const QString &surgeon)
{
    if(surgeon != m_surgeon)
    {
        m_surgeon = surgeon;
        emit surgeonChanged();
    }
}

void Surgery::setRecoveryTime(const QString &recoveryTime)
{
    if(recoveryTime != m_recoveryTime)
    {
        m_recoveryTime = recoveryTime;
        emit recoveryTimeChanged();
    }
}

void Surgery::setRecoveryNotes(const QString &recoveryNotes)
{
    if(recoveryNotes != m_recoveryNotes)
    {
        m_recoveryNotes = recoveryNotes;
        emit recoveryNotesChanged();
    }
}

void Surgery::setProcedureDate(const QString &procedureDate)
{
    if(procedureDate != m_procedureDate)
    {
        m_procedureDate = procedureDate;
        emit procedureDateChanged();
    }
}
