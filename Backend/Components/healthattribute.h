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
        for(auto i = observations.begin(), i != observations.end(), i++)
        {
            delete *i;
        }

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

    Q_INVOKABLE T getObservation(int pos)
    {
        if(pos < observations.size()) {
            return observations.at(pos)->getValue();
        } else {
            qDebug() << "ERROR: Position out of bounds in call to HealthAttribute::getObservation(pos).\n";
        }
    }

    Q_INVOKABLE void removeObservation(int pos)
    {
        if (pos < observations.size() && pos > 0)
        {
            observations.remove(pos);
        }
    }

private:
    QString name;

    QVector<HealthObservation<T>*> observations;

};

#endif // HEALTHATTRIBUTE_H
