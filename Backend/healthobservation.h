#ifndef HEALTHOBSERVATION_H
#define HEALTHOBSERVATION_H
#include <QObject>
#include <QDateTime>

template <class T>
class HealthObservation
{
public:
    HealthObservation();
    virtual ~HealthObservation();

private:
    QDate dateObserved;
    T value;



};

#endif // HEALTHOBSERVATION_H
