#ifndef MEDICATION_H
#define MEDICATION_H

#include "sideeffect.h"

class Medication : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ getName WRITE setName NOTIFY nameChanged)

    Q_PROPERTY(int frequencyToRemind READ getFrequencyToRemind WRITE setFrequencyToRemind NOTIFY frequencyToRemindChanged)

    Q_PROPERTY(bool isPrescription READ getIsPrescription WRITE setIsPrescription NOTIFY isPrescriptionChanged)

    Q_PROPERTY(QString dosage READ getDosage WRITE setDosage NOTIFY dosageChanged)

    Q_PROPERTY(QString dateStarted READ getDateStarted WRITE setDateStarted NOTIFY dateStartedChanged)

    Q_PROPERTY(QString dateEnded READ getDateEnded WRITE setDateEnded NOTIFY dateEndedChanged)

    Q_PROPERTY(SideEffect* sideEffect READ getSideEffect WRITE setSideEffect NOTIFY sideEffectChanged)

public:
    explicit Medication(QObject *parent = nullptr);

    explicit Medication(const QString &name,
                        const int &frequencyToRemind,
                        const bool &isPrescription,
                        const QString &dosage,
                        const QString &dateStarted,
                        const QString &dateEnded,
                        SideEffect *sideEffect,
                        QObject *parent);

    virtual ~Medication();
    
    QString getName() const;

    int getFrequencyToRemind() const;

    bool getIsPrescription() const;

    QString getDosage() const;

    QString getDateStarted() const;

    QString getDateEnded() const;

    SideEffect* getSideEffect() const;
    
signals:
    void nameChanged();

    void frequencyToRemindChanged();

    void isPrescriptionChanged();

    void dosageChanged();

    void dateStartedChanged();

    void sideEffectChanged();

    void dateEndedChanged();

public slots:
    void setName(const QString &name);

    void setFrequencyToRemind(const int &frequencyToRemind);

    void setIsPrescription(const bool &isPrescription);

    void setDosage(const QString &dosage);

    void setDateStarted(const QString &dateStarted);

    void setDateEnded(const QString &dateEnded);

    void setSideEffect(SideEffect *sideEffect);
    
private:
    QString m_name;

    int m_frequencyToRemind;

    bool m_isPrescription;

    QString m_dosage;

    QString m_dateStarted;

    QString m_dateEnded;

    SideEffect* m_sideEffect;

};

#endif // MEDICATION_H
