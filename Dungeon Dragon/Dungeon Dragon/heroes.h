#pragma once
#include "character.h"
class heroes : public character
{
private:
	int lvUp;
	float currentexp;
	float maxexp=100;
	void lvup()
	{
		if (currentexp != maxexp)return;
		lv++;
		maxexp *= 1.5f;
		maxHp *= 1.25f;
		currentHp *= 1.25f;
		if (currentHp > maxHp)currentHp = maxHp;
		dmg *= 1.4f;
		speed *= 1.25f;
		currentexp -= maxexp;
		maxexp *= 1.5f;
	}
public:
	heroes(const std::string& n, float ch, float mh, float d, float sp, float lv,float cexp,float mexp) : character(n, ch, mh, d, sp, lv) {}
	float GetCurrentExp() { return currentexp; }
	float GetMaxExp() { return maxexp; }
	void SetCurrentExp(float expvalue)
	{
		currentexp += expvalue;
	}
	void SetMaxExp(float maxexpvalue)
	{
		maxexp = maxexpvalue;
	}
};

