#ifndef APPOINTMENTLIST_H
#define APPOINTMENTLIST_H

#include <QObject>
#include <QVector>
#include "../Components/appointment.h"

class AppointmentList : public QObject
{
    Q_OBJECT
public:
    explicit AppointmentList(QObject *parent = nullptr);

   Q_INVOKABLE QVector<AppointmentList*> appointmentList() const;

   Q_INVOKABLE bool setAppointmentAt(int index, Appointment *appointment);

signals:
    void preAppointmentAppended();
    void postAppointmentAppended();

    void preAppointmentRemoved(int index);
    void postAppointmentRemoved();

public slots:
    void appendAppointment(Appointment* appointment);

    int appointmentCount() const;

    Appointment* appointmentAt(int pos) const;

    void removeAppointmentAt(int pos);

    void clearAppointments();

private:
    QVector<AppointmentList*> m_appointmentList;

    void loadList();
};

#endif // APPOINTMENTLIST_H
