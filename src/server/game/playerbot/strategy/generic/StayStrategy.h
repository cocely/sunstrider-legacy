#include "../generic/NonCombatStrategy.h"
#pragma once

namespace ai
{
    class StayStrategy : public NonCombatStrategy
    {
    public:
        StayStrategy(PlayerbotAI* ai) : NonCombatStrategy(ai) {}
        virtual std::string getName() { return "stay"; }
        virtual ActionList getDefaultActions();
    };

}
