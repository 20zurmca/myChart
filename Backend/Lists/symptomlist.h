#ifndef SYMPTOMLIST_H
#define SYMPTOMLIST_H

#include <QObject>
#include <QVector>
#include "../Components/symptom.h"

class SymptomList : public QObject
{
    Q_OBJECT
public:
    explicit SymptomList(QObject *parent = nullptr);

   Q_INVOKABLE QVector<Symptom*> symptoms() const;

   Q_INVOKABLE bool setSymptom(int index, Symptom *symptom);

signals:
    void preSymptomAppended();
    void postSymptomAppended();

    void preSymptomRemoved(int index);
    void postSymptomRemoved();

public slots:
    void appendSymptom(Symptom* symptom);

    int symptomCount() const;

    Symptom* symptomAt(int pos) const;

    void removeSymptom(int pos);

    void clearSymptoms();

private:
    QVector<Symptom*> m_symptomList;

     void loadList();
};

#endif // SYMPTOMLIST_H
