#ifndef SURGERY_H
#define SURGERY_H
#include "healthevent.h"

class Surgery : public HealthEvent
{
    Q_OBJECT
public:
    explicit Surgery(QObject *parent = nullptr);
    virtual ~Surgery();
signals:

public slots:
};

#endif // SURGERY_H
