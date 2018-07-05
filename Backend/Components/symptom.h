#ifndef SYMPTOM_H
#define SYMPTOM_H
#include <QObject>
#include <QString>

class Symptom : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ getName WRITE setName NOTIFY nameChanged)

    Q_PROPERTY(QString dateRecorded READ getDateRecorded)

public:
    explicit Symptom(QObject *parent = nullptr);

    explicit Symptom(const QString &name, const QString &dateRecorded, QObject *parent= nullptr);

    virtual ~Symptom();

    QString getName() const;
    \
    QString getDateRecorded() const;

signals:
    void nameChanged();

public slots:
    void setName(const QString &name);

private:
    QString m_name;

    QString m_dateRecorded;
};

#endif // SYMPTOM_H
