#ifndef DATEGETTER_H
#define DATEGETTER_H

#include <QObject>
#include <QDate>
#include <QTime>
#include <QString>

class DateGetter : public QObject
{
    Q_OBJECT

public:
    explicit DateGetter(QObject *parent = nullptr);
    virtual ~DateGetter();

    Q_INVOKABLE QString getAbbrDate() const;

    Q_INVOKABLE QString getLongDate() const;

    Q_INVOKABLE QString getlocalTime() const;

signals:

public slots:

private:
    QDate date;
    QTime time;
};

#endif // DATEGETTER_H
