#include "sideeffect.h"

SideEffect::SideEffect(QObject *parent) : QObject(parent)
{

}

SideEffect::SideEffect(const int &id, const QString &description, QObject *parent) : QObject(parent), m_id(id), m_description(description)
{

}

SideEffect::~SideEffect()
{

}

int SideEffect::getId() const
{
    return m_id;
}

QString SideEffect::getDescription() const
{
    return m_description;
}

void SideEffect::setId(const int &id)
{
    if(id != m_id)
    {
        m_id = id;
        emit idChanged(id);
    }
}

void SideEffect::setDescription(const QString &description)
{
    if(description != m_description)
    {
        m_description = description;
        emit descriptionChanged(description);
    }

}
