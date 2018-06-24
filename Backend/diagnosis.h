#ifndef DIAGNOSIS_H
#define DIAGNOSIS_H

#include <QObject>

class Diagnosis : public QObject
{
    Q_OBJECT
public:
    explicit Diagnosis(QObject *parent = nullptr);
    virtual ~Diagnosis();

signals:

public slots:
};

#endif // DIAGNOSIS_H
