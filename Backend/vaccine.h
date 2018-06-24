#ifndef VACCINE_H
#define VACCINE_H
#include "healthevent.h"

class Vaccine : public HealthEvent
{
    Q_OBJECT
public:
    using HealthEvent::HealthEvent;
    virtual ~Vaccine();
signals:

public slots:
};

#endif // VACCINE_H
