#ifndef ALLERGYLIST_H
#define ALLERGYLIST_H

#include <QObject>
#include <QVector>
#include "../Components/allergy.h"

class AllergyList : public QObject
{
    Q_OBJECT
public:
    explicit AllergyList(QObject *parent = nullptr);

   Q_INVOKABLE QVector<AllergyList> allergies() const;

   Q_INVOKABLE bool setAllergyAt(int index, Allergy* allergy);

signals:
    void preAllergyAppended();
    void postAllergyAppended();

    void preAllergyRemoved(int index);
    void postAllergyRemoved();

public slots:
    void appendAllergy(Allergy* allergy);

    int allergyCount() const;

    Allergy* allergyAt(int pos) const;

    void removeAllergyAt(int pos);

    void clearAllergies();

private:
    QVector<Allergy*> m_allergyList;
};

#endif // ALLERGYLIST_H
