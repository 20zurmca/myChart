#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <QObject>

class Appointment : public QObject
{
    Q_OBJECT
public:
    explicit Appointment(QObject *parent = nullptr);
    virtual ~Appointment();

signals:

public slots:
};

#endif // APPOINTMENT_H
