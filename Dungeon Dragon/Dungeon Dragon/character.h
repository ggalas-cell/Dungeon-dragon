#pragma once
#include <string>
#include <iostream>
class character
{
public:
	int currentHp;
	int maxHp;
	int dmg;
	int speedAttack;
	int lv;
	std::string name;
	virtual void attack(character& target)
	{
		std::cout << name << " attaque " << target.name << "\n";
		std::cout << target.name << " subit " << dmg << "degats ! \n";
		target.takedmg(dmg);
	}
	void takedmg(int dmg)
	{
		currentHp -= dmg;
		if (currentHp < 0)currentHp = 0;
		std::cout << name << " a maintenant " << currentHp << "/" << maxHp << " Hp.\n";
	}
};

