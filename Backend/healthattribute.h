#ifndef HEALTHATTRIBUTE_H
#define HEALTHATTRIBUTE_H
#include <QObject>
#include <QVector>
#include <QString>
#include "healthobservation.h"

template <class T>
class HealthAttribute
{
public:
    HealthAttribute();
    virtual ~HealthAttribute();

private:
    QString name;
    QVector<HealthObservation<T>> observations;

};

#endif // HEALTHATTRIBUTE_H
