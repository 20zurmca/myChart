#ifndef VACCINE_H
#define VACCINE_H
#include "healthevent.h"
#include "sideeffect.h"

class Vaccine : public HealthEvent
{
    Q_OBJECT

    Q_PROPERTY(SideEffect sideEffect READ getSideEffect WRITE setSideEffect NOTIFY sideEffectChanged)
public:
    using HealthEvent::HealthEvent;
    virtual ~Vaccine();
signals:

public slots:

private:
    SideEffect m_sideEffect;
};

#endif // VACCINE_H
