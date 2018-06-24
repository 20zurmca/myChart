#ifndef EMERGENCYCONTACT_H
#define EMERGENCYCONTACT_H

#include <QObject>

class EmergencyContact : public QObject
{
    Q_OBJECT
public:
    explicit EmergencyContact(QObject *parent = nullptr);
    virtual ~EmergencyContact();

signals:

public slots:
};

#endif // EMERGENCYCONTACT_H
