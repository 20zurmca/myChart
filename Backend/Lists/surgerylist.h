#ifndef SURGERYLIST_H
#define SURGERYLIST_H

#include <QObject>
#include <QVector>
#include "../Components/surgery.h"

class SurgeryList : public QObject
{
    Q_OBJECT
public:
    explicit SurgeryList(QObject *parent = nullptr);

   Q_INVOKABLE QVector<Surgery*> Surgerys() const;

   Q_INVOKABLE bool setSurgeryAt(int index, Surgery *surgery);

signals:
    void preSurgeryAppended();
    void postSurgeryAppended();

    void preSurgeryRemoved(int index);
    void postSurgeryRemoved();

public slots:
    void appendSurgery(Surgery *provider);

    int surgeryCount() const;

    Surgery* surgeryAt(int pos) const;

    void removeSurgery(int pos);

    void clearSurgerys();

private:
    QVector<Surgery*> m_surgeryList;

     void loadList();
};

#endif // SURGERYLIST_H
