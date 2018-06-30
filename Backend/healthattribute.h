#ifndef HEALTHATTRIBUTE_H
#define HEALTHATTRIBUTE_H
#include <QVector>
#include <QString>
#include <QDebug>
#include "healthobservation.h"

template <typename T>
class HealthAttribute
{
public:
    HealthAttribute(QString name_)
    {
        name = name_;
    }
     ~HealthAttribute()
    {

    }

    Q_INVOKABLE QString getName() const;

    Q_INVOKABLE QVector<HealthObservation<T>> getObservations() const;

    Q_INVOKABLE void addObservation(HealthObservation<T> obs)
    {
        observations.push_back(obs);
    }

    Q_INVOKABLE void clearObservations()
    {
        observations.clear();
    }

    Q_INVOKABLE HealthObservation<T> getObservation(int pos)
    {
        if(pos < observations.size()) {
            return observations.at(pos);
        } else {
            qDebug() << "Position out of bounds in call to HealthAttribute::getObservation(pos).\n";
        }
    }

private:
    QString name;
    QVector<HealthObservation<T>> observations;

};

#endif // HEALTHATTRIBUTE_H
