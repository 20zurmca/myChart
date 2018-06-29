#ifndef HEALTHEVENT_H
#define HEALTHEVENT_H
#include <QObject>
#include <QString>


class HealthEvent : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ getName WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QString dateRecorded READ getDateRecorded)
public:
    explicit HealthEvent(QObject *parent = nullptr);
    virtual ~HealthEvent();
    
    QString getName() const;
    QString getDateRecorded();

signals:
    void nameChagned();

public slots:
    void setName(QString name);

private:
    QString m_name;
    QString m_dateRecorded;
};

#endif // HEALTHEVENT_H
