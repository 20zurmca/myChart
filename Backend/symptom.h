#ifndef SYMPTOM_H
#define SYMPTOM_H
#include <QObject>

class Symptom : public QObject
{
    Q_OBJECT
public:
    explicit Symptom(QObject *parent = nullptr);
    virtual ~Symptom();

signals:

public slots:
};

#endif // SYMPTOM_H
