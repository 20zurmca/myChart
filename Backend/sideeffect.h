#ifndef SIDEEFFECT_H
#define SIDEEFFECT_H

#include <QObject>

class SideEffect : public QObject
{
    Q_OBJECT
public:
    explicit SideEffect(QObject *parent = nullptr);
    virtual ~SideEffect();

signals:

public slots:
};

#endif // SIDEEFFECT_H
