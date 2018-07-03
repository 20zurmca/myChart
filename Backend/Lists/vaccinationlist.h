#ifndef VACCINATIONLIST_H
#define VACCINATIONLIST_H

#include <QObject>
#include <QVector>
#include "../Components/vaccine.h"

class VaccinationList : public QObject
{
    Q_OBJECT
public:
    explicit VaccinationList(QObject *parent = nullptr);

   Q_INVOKABLE QVector<Vaccine*> vaccines() const;

   Q_INVOKABLE bool setVaccineAt(int index, Vaccine *vaccine);

signals:
    void preVaccinationAppended();
    void postVaccinationAppended();

    void preVaccinationRemoved(int index);
    void postVaccinationRemoved();

public slots:
    void appendVaccine(Vaccine* provider);

    int vaccineCount() const;

    Vaccine* vaccineAt(int pos) const;

    void removeVaccine(int pos);

    void clearVaccines();

private:
    QVector<Vaccine*> m_vaccinationList;
};

#endif // VACCINATIONLIST_H
