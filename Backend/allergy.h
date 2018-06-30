#ifndef ALLERGY_H
#define ALLERGY_H
#include <QObject>
#include <QString>

class Allergy : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString type READ getType WRITE setType NOTIFY typeChanged)

    Q_PROPERTY(bool isSeasonal READ getIsSeasonal WRITE setIsSeasonal NOTIFY isSeasonalChanged)

    Q_PROPERTY(bool isLifeThreatening READ getIsLifeThreatening WRITE setIsLifeThreatening NOTIFY isLifeThreateningChanged)

public:
   explicit Allergy(QObject *parent = nullptr);
   virtual ~Allergy();
    
   QString getType() const;
   
   bool getIsSeasonal() const;
   
   bool getIsLifeThreatening() const;

   QString isSeasonalAsQstr() const;

   QString isLifeThreateningAsQstr() const;
    
signals:
    void typeChanged();
    void isSeasonalChanged();
    void isLifeThreateningChanged();

public slots:
    void setType(QString newType);
    void setIsSeasonal(bool isSeasonal);
    void setIsLifeThreatening(bool isLifeThreatening);

private:
    QString m_type;
    bool m_isSeasonal;
    bool m_isLifeThreatening;
};

#endif // ALLERGY_H
