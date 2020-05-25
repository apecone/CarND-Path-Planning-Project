#include "Behavior.h"
#include "BehaviorStates.h"

Behavior::Behavior() 
{
    currentState = &LaneKeep::getInstance();
}

void Behavior::setState(BehaviorState& newState)
{
    currentState->exit(this); // do stuff before we change state
    currentState = &newState; // actually changes state now
    currentState->enter(this); // do stuff after we change state
}

void Behavior::toggle()
{
    // Delegate the task of determining the next state to the current state
    currentState->toggle(this);
}