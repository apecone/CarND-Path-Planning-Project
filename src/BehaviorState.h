#pragma once
#include "Behavior.h"

// Forward declaration to resolve circular dependency/include
class Behavior;

class BehaviorState {
    public:
        virtual void enter(Behavior* behavior) = 0;
        virtual void toggle(Behavior* behavior) = 0;
        virtual void exit(Behavior* behavior) = 0;
        virtual ~BehaviorState() {}
};

