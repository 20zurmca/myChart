#ifndef SURGERY_H
#define SURGERY_H
#include "healthevent.h"

class Surgery : public HealthEvent
{
    Q_OBJECT

    Q_PROPERTY(int id READ getId WRITE setId NOTIFY idChanged)

    Q_PROPERTY(QString preOpInstructions READ getPreOpInstructions WRITE setPreOpInstructions NOTIFY preOpInstructionsChanged)

    Q_PROPERTY(QString postOpInstructions READ getPostOpInstructions WRITE setPostOpInstructions NOTIFY postOpInstructionsChanged)

    Q_PROPERTY(QString surgeon READ getSurgeon WRITE setSurgeon NOTIFY surgeonChanged)

    Q_PROPERTY(QString recoveryTime READ getRecoveryTime WRITE setRecoveryTime NOTIFY recoveryTimeChanged)

    Q_PROPERTY(QString recoveryNotes READ getRecoveryNotes WRITE setRecoveryNotes NOTIFY recoveryNotesChanged)

    Q_PROPERTY(QString procedureDate READ getProcedureDate WRITE setProcedureDate NOTIFY procedureDateChanged)



public:
    using HealthEvent::HealthEvent;
    virtual ~Surgery();
    
    int getId() const;
    QString getPreOpInstructions() const;
    QString getPostOpInstructions() const;
    QString getSurgeon() const;
    QString getRecoveryTime() const;
    QString getRecoveryNotes() const;
    QString getProcedureDate() const;


signals:
    void idChanged();
    void preOpInstructionsChanged();
    void postOpInstructionsChanged();
    void surgeonChanged();
    void recoveryTimeChanged();
    void recoveryNotesChanged();
    void procedureDateChanged();

public slots:
    void setId(int id);
    void setPreOpInstructions(QString preOpInstructions);
    void setPostOpInstructions(QString postOpInstructions);
    void setSurgeon(QString surgeon);
    void setRecoveryTime(QString recoveryTime);
    void setRecoveryNotes(QString recoveryNotes);
    void setProcedureDate(QString procedureDate);

private:
    int m_id;
    QString m_preOpInstructions;
    QString m_postOpInstructions;
    QString m_procedureDate;
    QString m_surgeon;
    QString m_recoveryTime;
    QString m_recoveryNotes;
};

#endif // SURGERY_H
