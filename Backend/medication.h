#ifndef MEDICATION_H
#define MEDICATION_H

#include <QObject>
#include <QDateTime>
#include <QString>
#include "sideeffect.h"

class Medication : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ getName WRITE setName NOTIFY nameChanged)

    Q_PROPERTY(QString frequencyToRemind READ getFrequencyToRemind WRITE setFrequencyToRemind NOTIFY frequencyToRemindChanged)

    Q_PROPERTY(bool isPrescription READ getIsPrescription WRITE setIsPrescription NOTIFY isPrescriptionChanged)

    Q_PROPERTY(QString dosage READ getDosage WRITE setDosage NOTIFY dosageChanged)

    Q_PROPERTY(QDateTime dateStarted READ getDateStarted WRITE setDateStarted NOTIFY dateStartedChanged)

    Q_PROPERTY(QDateTime dateEnded READ getDateEnded WRITE setDateEnded NOTIFY dateEndedChanged)

    Q_PROPERTY(SideEffect sideEffect READ getSideEffect WRITE setSideEffect NOTIFY sideEffectChanged)

public:
    explicit Medication(QObject *parent = nullptr);

    virtual ~Medication();

signals:

public slots:

private:
    QString m_name;
    QString m_frequencyToRemind;
    bool m_isPrescription;
    QString m_dosage;
    QDateTime m_dateStarted;
    QDateTime m_dateEnded;
    SideEffect m_sideEffect;

};

#endif // MEDICATION_H
