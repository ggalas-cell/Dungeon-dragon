#pragma once
#include "character.h"
class heros : public character
{
private:
	int currentexp;
	int maxexp;
	void lvup(int lv)
	{
		if (currentexp != maxexp)
		{
			return;
		}
		lv++;
		
	}


};
