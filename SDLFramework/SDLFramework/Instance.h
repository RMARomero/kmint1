#pragma once
#include "FWApplication.h"
class Rabbit;
class Cow;
class Pill;
class Gun;
class Instance
{
private:
	bool m_SpawnPillRandom{ false };

	Cow* m_Cow;
	Rabbit* m_Rabbit;
	Pill* m_Pill;
	Gun* m_Gun;

	std::string m_Colour;

	void ResetCow();
	void HardResetCow();
	void ResetRabbit();
	void HardResetRabbit();
	void ResetPill();
	void ResetGun();
	void ClearRoundInformation();
public:
	Instance(FWApplication* application, std::string colour);
	void Update(float dt);
	Cow* GetCow();
	Rabbit* GetRabbit();
	Pill* GetPill();
	Gun* GetGun();
	std::string GetColour();
	void ResetEntities(bool Cow, bool Rabbit, bool Pill, bool Gun);
	void HardResetEntities();
	void DeleteEntity(IGameObject* entity);
	void SaveRoundInformation(int roundNumber);
	virtual ~Instance();
};


