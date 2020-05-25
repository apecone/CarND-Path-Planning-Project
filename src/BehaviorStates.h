#pragma once
#include "BehaviorState.h"
#include "Behavior.h"

class LaneKeep : public BehaviorState {
    public:
        void enter(Behavior* behavior) {}
        void toggle(Behavior* behavior);
        void exit(Behavior* behavior) {}
        static BehaviorState& getInstance();
    
    private:
        LaneKeep() {}
        LaneKeep(const LaneKeep& other);
        LaneKeep& operator=(const LaneKeep& other);
};

class PrepareLaneChangeLeft : public BehaviorState {
    public:
        void enter(Behavior* behavior) {}
        void toggle(Behavior* behavior);
        void exit(Behavior* behavior) {}
        static BehaviorState& getInstance();
    
    private:
        PrepareLaneChangeLeft() {}
        PrepareLaneChangeLeft(const PrepareLaneChangeLeft& other);
        PrepareLaneChangeLeft& operator=(const PrepareLaneChangeLeft& other);
};

class PrepareLaneChangeRight : public BehaviorState {
    public:
        void enter(Behavior* behavior) {}
        void toggle(Behavior* behavior);
        void exit(Behavior* behavior) {}
        static BehaviorState& getInstance();
    
    private:
        PrepareLaneChangeRight() {}
        PrepareLaneChangeRight(const PrepareLaneChangeRight& other);
        PrepareLaneChangeRight& operator=(const PrepareLaneChangeRight& other);
};

class LaneChangeLeft : public BehaviorState {
    public:
        void enter(Behavior* behavior) {}
        void toggle(Behavior* behavior);
        void exit(Behavior* behavior) {}
        static BehaviorState& getInstance();
    
    private:
        LaneChangeLeft() {}
        LaneChangeLeft(const LaneChangeLeft& other);
        LaneChangeLeft& operator=(const LaneChangeLeft& other);
};

class LaneChangeRight : public BehaviorState {
    public:
        void enter(Behavior* behavior) {}
        void toggle(Behavior* behavior);
        void exit(Behavior* behavior) {}
        static BehaviorState& getInstance();
    
    private:
        LaneChangeRight() {}
        LaneChangeRight(const LaneChangeRight& other);
        LaneChangeRight& operator=(const LaneChangeRight& other);
};

