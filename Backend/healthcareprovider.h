#ifndef HEALTHCAREPROVIDER_H
#define HEALTHCAREPROVIDER_H

#include <QObject>

class HealthCareProvider : public QObject
{
    Q_OBJECT
public:
    explicit HealthCareProvider(QObject *parent = nullptr);
    virtual ~HealthCareProvider();

signals:

public slots:
};

#endif // HEALTHCAREPROVIDER_H
