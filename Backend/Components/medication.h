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

    Q_PROPERTY(QString startTime READ getStartTime WRITE setStartTime NOTIFY startTimeChanged)

   // Q_PROPERTY(type TIME_LIST READ name WRITE setName NOTIFY nameChanged)

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
    
    QString getStartTime() const;


signals:


    void nameChanged(QString name);

    void frequencyToRemindChanged(int frequencyToRemind);

    void isPrescriptionChanged(bool isPrescription);

    void dosageChanged(QString dosage);

    void dateStartedChanged(QString dateStarted);

    void dateEndedChanged(QString dateEnded);

    void sideEffectChanged(SideEffect* sideEffect);

    void startTimeChanged(QString startTime);

public slots:
    void setName(const QString &name);

    void setFrequencyToRemind(const int &frequencyToRemind);

    void setIsPrescription(const bool &isPrescription);

    void setDosage(const QString &dosage);

    void setDateStarted(const QString &dateStarted);

    void setDateEnded(const QString &dateEnded);

    void setSideEffect(SideEffect *sideEffect);
    
    void setStartTime(const QString &startTime);


private:
    QString m_name;

    int m_frequencyToRemind;

    bool m_isPrescription;

    QString m_dosage;

    QString m_dateStarted;

    QString m_dateEnded;

    SideEffect* m_sideEffect;

    QString m_startTime;
};

#endif // MEDICATION_H
