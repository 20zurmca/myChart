#ifndef SYMPTOM_H
#define SYMPTOM_H
#include <QObject>
#include <QString>
#include <QDateTime>

class Symptom : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ getName WRITE setName NOTIFY nameChanged)

    Q_PROPERTY(QDateTime dateRecorded READ getDateRecorded)

public:
    explicit Symptom(QObject *parent = nullptr);
    virtual ~Symptom();

    QString getName() const;
    QDate getDateRecorded() const;

signals:
    void nameChanged();

public slots:
    void setName(QString name);

private:
    QString m_name;
    QDateTime m_dateRecorded;
};

#endif // SYMPTOM_H
