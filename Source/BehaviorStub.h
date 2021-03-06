//------------------------------------------------------------------------------
//
// File Name:	BehaviorStub.h
// Author(s):	Doug Schilling (dschilling)
// Project:		MyGame
// Course:		CS230S17
//
// Copyright � 2017 DigiPen (USA) Corporation.
//
//------------------------------------------------------------------------------

#pragma once

//------------------------------------------------------------------------------
// Include Files:
//------------------------------------------------------------------------------

#include "Behavior.h"

//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Public Consts:
//------------------------------------------------------------------------------

// An example of the enums to be defined in BehaviorStub.cpp.
#if 0
enum StubState
{
};
#endif

//------------------------------------------------------------------------------
// Public Structures:
//------------------------------------------------------------------------------

// An example of the class to be defined in BehaviorStub.h
class BehaviorStub : public Behavior
{
public:
	//------------------------------------------------------------------------------
	// Public Functions:
	//------------------------------------------------------------------------------

	// Allocate a new (Stub) behavior component.
	// Params:
	//  parent = The object that owns this behavior.
	BehaviorStub();

private:
	// Clone an advanced behavior and return a pointer to the cloned object.
	// Params:
	//   behavior = Reference to the behavior that will be destroyed.
	//   parent = A reference to the parent object (the object that owns this component).
	// Returns:
	//   A pointer to an advanced behavior.
	Component* Clone() const;

	// Initialize the current state of the behavior component.
	// (Hint: Refer to the lecture notes on finite state machines (FSM).)
	// Params:
	//	 behavior = Pointer to the behavior component.
	void OnEnter();

	// Update the current state of the behavior component.
	// (Hint: Refer to the lecture notes on finite state machines (FSM).)
	// Params:
	//	 behavior = Pointer to the behavior component.
	//	 dt = Change in time (in seconds) since the last game loop.
	void OnUpdate(float dt);

	// The collision handling function for Stubs.
	// Params:
	//	 stub = The stub object.
	//	 other = The object the asteroid is colliding with.
	static void CollisionHandler(GameObject& stub, GameObject& other);

	//------------------------------------------------------------------------------
	// Private Consts:
	//------------------------------------------------------------------------------
};

//------------------------------------------------------------------------------
