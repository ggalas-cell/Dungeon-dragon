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
		maxexp *= 1.5;
		maxHp *= 1.25;
		currentHp *= 1.25;
		if (currentHp > maxHp)currentHp = maxHp;
		dmg *= 1.4;
		speed *= 1.25;
		currentexp -= maxexp;
		maxexp *= 1.5;
	}
public:
	heroes(const std::string& n, float ch, float mh, float d, float sp, float lv) : character(n, ch, mh, d, sp, lv) {}
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

