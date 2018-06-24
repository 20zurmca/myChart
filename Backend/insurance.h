#ifndef INSURANCE_H
#define INSURANCE_H

#include <QObject>

class Insurance : public QObject
{
    Q_OBJECT
public:
    explicit Insurance(QObject *parent = nullptr);

    virtual ~Insurance();

signals:

public slots:
};

#endif // INSURANCE_H
