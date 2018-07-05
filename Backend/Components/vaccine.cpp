#include "vaccine.h"


Vaccine::~Vaccine()
{

}

SideEffect *Vaccine::getSideEffect() const
{
    return m_sideEffect;
}

void Vaccine::setSideEffect(SideEffect *sideEffect)
{
    if(sideEffect != m_sideEffect)
    {
        m_sideEffect = sideEffect;
        emit sideEffectChanged(sideEffect);
    }
}
