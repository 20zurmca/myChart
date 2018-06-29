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
    
    int getId() const;
    QString getPreOpInstruction() const;
    QString getPostOpInstruction() const;
    QString getSurgeon() const;
    QString getRecoveryTime() const;
    QString getRecoveryNotes() const;
    QString getProcedureDate() const;

signals:
    void idChanged();
    void preOpInstructionChanged();
    void postOpInstructionChanged();
    void surgeonChanged();
    void recoveryTimeChanged();
    void recoveryNotesChanged();
    void procedureDateChanged();

public slots:
    void setId(int id);
    void setPreOpInstruction(QString preOpInstruction);
    void setPostOpInstruction(QString postOpInstruction);
    void setSurgeon(QString surgeon);
    void setRecoveryTime(QString recoveryTime);
    void setRecoveryNotes(QString recoveryNotes);
    void setProcedureDate(QDate procedureDate);

private:
    int m_id;
    QString m_preOpInstructions;
    QString m_postOpInstructions;
    QString m_surgeon;
    QString m_recoveryTime;
    QString m_recoveryNotes;
};

#endif // SURGERY_H
