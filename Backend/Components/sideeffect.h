#ifndef SIDEEFFECT_H
#define SIDEEFFECT_H

#include <QObject>
#include <QString>

class SideEffect : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString description READ getDescription WRITE setDescription NOTIFY descriptionChanged)

public:
    explicit SideEffect(QObject *parent = nullptr);

    explicit SideEffect( const QString &description, QObject *parent = nullptr);

    virtual ~SideEffect();
    
    int getId() const;

    QString getDescription() const;

signals:


    void descriptionChanged(QString description);


public slots:
    void setDescription(const QString &description);
    
private:

    QString m_description;
};

#endif // SIDEEFFECT_H
