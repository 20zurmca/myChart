#ifndef PATIENT_H
#define PATIENT_H
#include <QObject>

class Patient : public QObject
{
    Q_OBJECT
public:
    explicit Patient(QObject *parent = nullptr);
    virtual ~Patient();

signals:

public slots:
};

#endif // PATIENT_H
