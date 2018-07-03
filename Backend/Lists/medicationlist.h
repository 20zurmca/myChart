#ifndef MEDICATIONLIST_H
#define MEDICATIONLIST_H

#include <QObject>
#include <QVector>
#include "../Components/medication.h"

class MedicationList : public QObject
{
    Q_OBJECT
public:
    explicit MedicationList(QObject *parent = nullptr);

   Q_INVOKABLE QVector<Medication*> Medications() const;

   Q_INVOKABLE bool setMedicationAt(int index, Medication *medication);

signals:
    void preMedicationAppended();
    void postMedicationAppended();

    void preMedicationRemoved(int index);
    void postMedicationRemoved();

public slots:
    void appendMedication(Medication *provider);

    int medicationCount() const;

    Medication* medicationAt(int pos) const;

    void removeMedication(int pos);

    void clearMedications();

private:
    QVector<Medication*> m_medicationList;
};

#endif // MEDICATIONLIST_H
