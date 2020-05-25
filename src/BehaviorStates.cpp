#include "BehaviorStates.h"

void LaneKeep::toggle(Behavior* behavior)
{
    // LaneKeep -> PrepareLaneChangeLeft
    behavior->setState(PrepareLaneChangeLeft::getInstance());
    
    // LaneKeep -> PrepareLaneChangeRight
    behavior->setState(PrepareLaneChangeRight::getInstance());
}

LaneKeep& LaneKeep::getInstance()
{
    static LaneKeep singleton;
    return singleton;
}

void PrepareLaneChangeLeft::toggle(Behavior* behavior)
{
    // PrepareLaneChangeLeft -> LaneChangeLeft
    behavior->setState(LaneChangeLeft::getInstance());
    
    // PrepareLaneChangeLeft -> LaneKeep
    behavior->setState(LaneKeep::getInstance());
}

PrepareLaneChangeLeft& PrepareLaneChangeLeft::getInstance()
{
    static PrepareLaneChangeLeft singleton;
    return singleton;
}

void PrepareLaneChangeRight::toggle(Behavior* behavior)
{
    // PrepareLaneChangeRight -> LaneChangeLeft
    behavior->setState(LaneChangeRight::getInstance());
    
    // PrepareLaneChangeRight -> LaneKeep
    behavior->setState(LaneKeep::getInstance());
}

PrepareLaneChangeRight& PrepareLaneChangeRight::getInstance()
{
    static PrepareLaneChangeRight singleton;
    return singleton;
}

void LaneChangeLeft::toggle(Behavior* behavior)
{
    // LaneChangeLeft -> LaneKeep
    behavior->setState(LaneKeep::getInstance());
}

LaneChangeLeft& LaneChangeLeft::getInstance()
{
    static LaneChangeLeft singleton;
    return singleton;
}

void LaneChangeRight::toggle(Behavior* behavior)
{   
    // LaneChangeRight -> LaneKeep
    behavior->setState(LaneKeep::getInstance());
}

LaneChangeRight& LaneChangeRight::getInstance()
{
    static LaneChangeRight singleton;
    return singleton;
}