//------------------------------------------------------------------------------
//
// File Name:	ColliderCircle.h
// Author(s):	Doug Schilling (dschilling), Jeremy Kings (j.kings)
// Project:		Project 7
// Course:		CS230
//
// Copyright � 2018 DigiPen (USA) Corporation.
//
//------------------------------------------------------------------------------

#pragma once

//------------------------------------------------------------------------------
// Include Files:
//------------------------------------------------------------------------------

#include "Collider.h"

//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Public Structures:
//------------------------------------------------------------------------------

class ColliderCircle : public Collider
{
public:
	//------------------------------------------------------------------------------
	// Public Variables:
	//------------------------------------------------------------------------------

	//------------------------------------------------------------------------------
	// Public Functions:
	//------------------------------------------------------------------------------

	// Constructor for circle collider.
	ColliderCircle(float radius);

	// Clone an collider and return a pointer to the cloned object.
	// Returns:
	//   A pointer to a collider.
	Component* Clone() const;

	// Debug drawing for colliders.
	void Draw() const;

	// Get the circle collider's radius.
	// Returns:
	//	 The circle collider's radius.
	float GetRadius() const;

	// Set the circle collider's radius.
	// Params:
	//   radius = The circle collider's new radius.
	void SetRadius(float radius);

	// Check for collision between a circle and another arbitrary collider.
	// Params:
	//	 other = Reference to the second circle collider component.
	// Returns:
	//	 Return the results of the collision check.
	bool IsCollidingWith(const Collider& other) const;

	void Load(rapidjson::Value& obj);

private:
	//------------------------------------------------------------------------------
	// Private Variables:
	//------------------------------------------------------------------------------

	// Radius of the circle collider.
	float radius;
};

//------------------------------------------------------------------------------
