#ifndef EMERGENCYCONTACTLIST_H
#define EMERGENCYCONTACTLIST_H

#include <QObject>
#include <QVector>
#include "../Components/emergencycontact.h"

class EmergencyContactList : public QObject
{
    Q_OBJECT
public:
    explicit EmergencyContactList(QObject *parent = nullptr);

   Q_INVOKABLE QVector<EmergencyContact*> emergencyContacts() const;

   Q_INVOKABLE bool setEmergencyContactAt(int index, EmergencyContact *ec);

signals:
    void preEmergencyContactAppended();
    void postEmergencyContactAppended();

    void preEmergencyContactRemoved(int index);
    void postEmergencyContactRemoved();

public slots:
    void appendEmergencyContact(EmergencyContact* provider);

    int EmergencyContactCount() const;

    EmergencyContact* emergencyContactAt(int pos) const;

    void removeEmergencyContactAt(int pos);

    void clearEmergencyContact();

private:
    QVector<EmergencyContact*> m_emergencyContactList;

     void loadList();
};

#endif // EMERGENCYCONTACTLIST_H
