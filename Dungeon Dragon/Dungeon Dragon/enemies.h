#pragma once
#include "character.h"

class enemies : public character
{   
public:
	void lvup()
	{
		lv++;
		maxHp *= 1.3f;
		currentHp *= 1.3f;
		if (currentHp > maxHp)currentHp = maxHp;
		dmg *= 1.3f;
		speed *= 1.3f;
	}
	enemies(const std::string& n, float ch, float mh, float d, float sp, float lv) : character(n, ch, mh, d, sp, lv) {}
};
