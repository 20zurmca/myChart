#ifndef DIAGNOSESLIST_H
#define DIAGNOSESLIST_H

#include <QObject>
#include <QVector>
#include "../Components/diagnosis.h"

class DiagnosesList : public QObject
{
    Q_OBJECT
public:
    explicit DiagnosesList(QObject *parent = nullptr);

   Q_INVOKABLE QVector<Diagnosis*> diagnosesList() const;

   Q_INVOKABLE bool setDiagnosisAt(int index, Diagnosis *diagnosis);

signals:
    void preDiagnosisAppended();
    void postDiagnosisAppended();

    void preDiagnosisRemoved(int index);
    void postDiagnosisRemoved();

public slots:
    void appendDiagnosis(Diagnosis* provider);

    int DiagnosisCount() const;

    Diagnosis* DiagnosisAt(int pos) const;

    void removeDiagnosisAt(int pos);

    void clearDiagnoses();

private:
    QVector<Diagnosis*> m_diagnosesList;

     void loadList();
};

#endif // DIAGNOSESLIST_H
