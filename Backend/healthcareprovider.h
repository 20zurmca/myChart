#ifndef HEALTHCAREPROVIDER_H
#define HEALTHCAREPROVIDER_H

#include <QObject>
#include <QString>

class HealthCareProvider : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ getName WRITE setName NOTIFY nameChanged)

    Q_PROPERTY(QString type READ getType WRITE setType NOTIFY typeChanged)

    Q_PROPERTY(QString officeAddress READ getOfficeAddress WRITE setOfficeAddress NOTIFY officeAddressChanged)

    Q_PROPERTY(QString officePhone READ getOfficePhone WRITE setOfficePhone NOTIFY officePhoneChanged)



public:
    explicit HealthCareProvider(QObject *parent = nullptr);
    virtual ~HealthCareProvider();

signals:

public slots:

private:
    QString m_name;
    QString m_type;
    QString m_officeAddress;
    QString m_officePhone;
};

#endif // HEALTHCAREPROVIDER_H
