#ifndef VACCINE_H
#define VACCINE_H
#include "healthevent.h"

class Vaccine : public HealthEvent
{
    Q_OBJECT
public:
    explicit Vaccine(QObject *parent = nullptr);
    virtual ~Vaccine();
signals:

public slots:
};

#endif // VACCINE_H
