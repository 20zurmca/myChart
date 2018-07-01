#ifndef DIAGNOSIS_H
#define DIAGNOSIS_H

#include <QObject>
#include <QString>

class Diagnosis : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString diagnosis READ getDiagnosis WRITE setDiagnosis NOTIFY diagnosisChanged)

    Q_PROPERTY(QString treatmentPlan READ getTreatmentPlan WRITE setTreatmentPlan NOTIFY treatmentPlanChanged)

public:
    explicit Diagnosis(QObject *parent = nullptr);

    virtual ~Diagnosis();
    
    QString getDiagnosis() const;

    QString getTreatmentPlan() const;

signals:
    void diagnosisChanged();

    void treatmentPlanChanged();

public slots:
    void setDiagnosis(QString diagnosis);

    void setTreatmentPlan(QString treatmentPlan);

private:
    QString m_diagnosis;

    QString m_treatmentPlan;

};

#endif // DIAGNOSIS_H
