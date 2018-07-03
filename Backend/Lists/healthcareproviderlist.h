#ifndef HEALTHCAREPROVIDERLIST_H
#define HEALTHCAREPROVIDERLIST_H

#include <QObject>
#include <QVector>
#include "../Components/healthcareprovider.h"

class HealthCareProviderList : public QObject
{
    Q_OBJECT
public:
    explicit HealthCareProviderList(QObject *parent = nullptr);

   Q_INVOKABLE QVector<HealthCareProvider*> healthCareProviders() const;

   Q_INVOKABLE bool setHealthCareProviderAt(int index, HealthCareProvider *provider);

signals:
    void preHealthCareProviderAppended();
    void postHealthCareProviderAppended();

    void preHealthCareProviderRemoved(int index);
    void postHealthCareProviderRemoved();

public slots:
    void appendHealthCareProvider(HealthCareProvider* provider);

    int healthCareProviderCount() const;

    HealthCareProvider* healthCareProviderAt(int pos) const;

    void removeHealthCareProviderAt(int pos);

    void clearHealthCareProviders();

private:
    QVector<HealthCareProvider*> m_healthCareProviderList;
};

#endif // HEALTHCAREPROVIDERLIST_H
