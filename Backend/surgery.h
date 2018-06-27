#ifndef SURGERY_H
#define SURGERY_H
#include "healthevent.h"

class Surgery : public HealthEvent
{
    Q_OBJECT

    Q_PROPERTY(int id READ getId WRITE setId NOTIFY idChanged)

    Q_PROPERTY(QString preOpInstructions READ getPreOpInstruction WRITE setPreOpInstruction NOTIFY preOpInstructionChanged)

    Q_PROPERTY(QString postOpInstructions READ getPostOpInstructions WRITE setPostOpInstructions NOTIFY postOpInstructionsChanged)

    Q_PROPERTY(QString surgeon READ getSurgeon WRITE setSurgeon NOTIFY surgeonChanged)

    Q_PROPERTY(QString recoveryTime READ getRecoveryTime WRITE setRecoveryTime NOTIFY recoveryTimeChanged)

    Q_PROPERTY(QString recoveryNotes READ getRecoveryNotes WRITE setRecoveryNotes NOTIFY recoveryNotesChanged)



public:
    using HealthEvent::HealthEvent;
    virtual ~Surgery();
signals:

public slots:

private:
    int m_id;
    QString m_preOpInstructions;
    QString m_postOpInstructions;
    QString m_surgeon;
    QString m_recoveryTime;
    QString m_recoveryNotes;
};

#endif // SURGERY_H
