#ifndef INSURANCE_H
#define INSURANCE_H

#include <QObject>
#include <QString>

class Insurance : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString memberId READ getMemberId WRITE setMemberId NOTIFY memberIdChanged)

    Q_PROPERTY(QString type READ getType WRITE setType NOTIFY typeChanged)

    Q_PROPERTY(QString carrier READ getCarrier WRITE setCarrier NOTIFY carrierChanged)

    Q_PROPERTY(QString employer READ getEmployer WRITE setEmployer NOTIFY employerChanged)

    Q_PROPERTY(QString groupNumber READ getGroupNumber WRITE setGroupNumber NOTIFY groupNumberChanged)

    Q_PROPERTY(QString sponser READ getSponser WRITE setSponser NOTIFY sponserChanged)
public:
    explicit Insurance(QObject *parent = nullptr);

    virtual ~Insurance();

signals:

public slots:

private:
    QString m_memberId;
    QString m_type;
    QString m_carrier;
    QString m_employer;
    QString m_groupNumber;
    QString m_sponser;

};

#endif // INSURANCE_H
