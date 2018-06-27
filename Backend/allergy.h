#ifndef ALLERGY_H
#define ALLERGY_H
#include <QObject>
#include <QString>

class Allergy : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString getType READ getType WRITE setGetType NOTIFY getTypeChanged)

    Q_PROPERTY(bool isSeasonal READ getIsSeasonal WRITE setIsSeasonal NOTIFY isSeasonalChanged)

    Q_PROPERTY(bool IsLifeThreatening READ IsLifeThreatening WRITE setIsLifeThreatening NOTIFY IsLifeThreateningChanged)

public:
   explicit Allergy(QObject *parent = nullptr);
    virtual ~Allergy();
signals:

public slots:

private:
    QString m_type;
    bool m_isSeasonal;
    bool m_isLifeThreatening;
};

#endif // ALLERGY_H
