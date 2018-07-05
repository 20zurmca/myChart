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

    explicit HealthCareProvider(const QString &name, const QString &type, const QString &officeAddress, const QString &officePhone, QObject *parent = nullptr);

    virtual ~HealthCareProvider();
    
    QString getName() const;

    QString getType() const;

    QString getOfficeAddress() const;

    QString getOfficePhone() const;

signals:


    void nameChanged(QString name);

    void typeChanged(QString type);

    void officeAddressChanged(QString officeAddress);

    void officePhoneChanged(QString officePhone);

public slots:
    void setName(const QString &name);

    void setType(const QString &type);

    void setOfficeAddress(const QString &officeAddress);

    void setOfficePhone(const QString &officePhone);

private:
    QString m_name;

    QString m_type;

    QString m_officeAddress;

    QString m_officePhone;
};

#endif // HEALTHCAREPROVIDER_H
