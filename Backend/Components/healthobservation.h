#ifndef HEALTHOBSERVATION_H
#define HEALTHOBSERVATION_H
#include <QObject>
#include <QString>
#include <QDate>

template <typename T>
class HealthObservation
{
public:
    HealthObservation(T value_)
    {
        value = value_;
    }
     ~HealthObservation()
    {

    }

    Q_INVOKABLE QString getDateObserved() const
    {
        return dateObserved.currentDate().toString("M/dd/yyyy");
    }

    Q_INVOKABLE T getValue() const
    {
        return value;
    }

private:
    QDate dateObserved;

    T value;



};

#endif // HEALTHOBSERVATION_H
