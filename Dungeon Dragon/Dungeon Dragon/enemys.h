#pragma once
#include "character.h"

class enemies : public character
{   
public:
	void lvup()
	{
		lv++;
		maxHp *= 1.3;
		currentHp *= 1.3;
		if (currentHp > maxHp)currentHp = maxHp;
		dmg *= 1.3;
		speed *= 1.3;
	}
	enemies(const std::string& n, float ch, float mh, float d, float sp, float lv) : character(n, ch, mh, d, sp, lv) {}
};
