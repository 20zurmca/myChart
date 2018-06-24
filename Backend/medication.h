#ifndef MEDICATION_H
#define MEDICATION_H

#include <QObject>

class Medication : public QObject
{
    Q_OBJECT
public:
    explicit Medication(QObject *parent = nullptr);

    virtual ~Medication();

signals:

public slots:
};

#endif // MEDICATION_H
