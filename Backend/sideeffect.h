#ifndef SIDEEFFECT_H
#define SIDEEFFECT_H

#include <QObject>
#include <QString>

class SideEffect : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int id READ getId WRITE setId NOTIFY idChanged)

    Q_PROPERTY(QString description READ getDescription WRITE setDescription NOTIFY descriptionChanged)

public:
    explicit SideEffect(QObject *parent = nullptr);
    virtual ~SideEffect();

signals:

public slots:

private:
    int m_id;
    QString m_description;
};

#endif // SIDEEFFECT_H
