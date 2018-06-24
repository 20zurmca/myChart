#ifndef SURGERY_H
#define SURGERY_H
#include "healthevent.h"

class Surgery : public HealthEvent
{
    Q_OBJECT
public:
    using HealthEvent::HealthEvent;
    virtual ~Surgery();
signals:

public slots:
};

#endif // SURGERY_H
