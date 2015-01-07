#pragma once
#include "FWApplication.h"
class Rabbit;
class Cow;
class Pill;
class Gun;
class Instance
{
private:
	Cow* m_Cow;
	Rabbit* m_Rabbit;
	Pill* m_Pill;
	Gun* m_Gun;
	void ResetCow();
	void HardResetCow();
	void ResetRabbit();
	void ResetPill();
	void ResetGun();
	void HardResetEntities();
public:
	Instance(FWApplication* application, std::string colour);
	void Update(float dt);
	Cow* GetCow();
	Rabbit* GetRabbit();
	Pill* GetPill();
	Gun* GetGun();
	void ResetEntities(bool Cow, bool Rabbit, bool Pill, bool Gun);
	void NewRound();
	void DeleteEntity(IGameObject* entity);
	virtual ~Instance();
};

