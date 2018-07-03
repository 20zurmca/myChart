#ifndef INSURANCELIST_H
#define INSURANCELIST_H

#include <QObject>
#include <QVector>
#include "../Components/insurance.h"

class InsuranceList : public QObject
{
    Q_OBJECT
public:
    explicit InsuranceList(QObject *parent = nullptr);

   Q_INVOKABLE QVector<Insurance*> Insurances() const;

   Q_INVOKABLE bool setInsuranceAt(int index, Insurance *insurance);

signals:
    void preInsuranceAppended();
    void postInsuranceAppended();

    void preInsuranceRemoved(int index);
    void postInsuranceRemoved();

public slots:
    void appendInsurance(Insurance *provider);

    int InsuranceCount() const;

    Insurance *InsuranceAt(int pos) const;

    void removeInsurance(int pos);

    void clearInsurances();

private:
    QVector<Insurance*> m_insuranceList;
};

#endif // INSURANCELIST_H
