#pragma once
#include "BehaviorState.h"

// Forward declaration to resolve circular dependency/include
class BehaviorState;

class Behavior {
    public:
        Behavior();
        inline BehaviorState* getCurrentState() const { return currentState; }
        void toggle();
        // This is where the magic happens
        void setState(BehaviorState& newState);
    
    private:
        BehaviorState* currentState;
};