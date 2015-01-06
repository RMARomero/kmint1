#pragma once
#include "MovingEntity.h"
#include "Instance.h"

class Cow :
	public MovingEntity
{
public:
	Cow();
	void Update(Instance* Instance, float deltatime);
	void ResetState();
	~Cow();
};

