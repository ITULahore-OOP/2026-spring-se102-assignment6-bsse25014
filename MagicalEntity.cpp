#include "MagicalEntity.h"

MagicalEntity :: MagicalEntity(int manaPool, int spellPower)
{
    this->manaPool = manaPool;
    this->spellPower = spellPower;
}

int MagicalEntity :: getMana() const
{
    return manaPool;
}

int MagicalEntity :: getSpellPower() const
{
    return spellPower;
}
