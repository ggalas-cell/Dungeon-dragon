
#pragma once
#include <string>
#include <iostream>
class character
{
public:
	float currentHp;
	float maxHp;
	float dmg;
	float speed;
	int lv;
	bool dodge = true ;
	std::string name;
	character(const std::string& n, float ch, float mh, float d, float sa, float lv)
		: name(n), currentHp(ch), maxHp(mh), dmg(d), speed(sa), lv(lv) {
	}
	virtual ~character() = default;
	bool isdead()const
	{
		return currentHp <= 0;
	}
	virtual void attack(character& target)
	{
		if (target.dodge=true)
		{
			std::cout << name << " attaque " << target.name << "\n";
			dodge = false; return;
		}
		else
		{
			std::cout << name << " attaque " << target.name << "\n";
			std::cout << target.name << " subit " << dmg << " degats ! \n";
			target.takedmg(dmg);
		}
	}
	void takedmg(int dmg)
	{
		currentHp -= dmg;
		if (currentHp < 0)currentHp = 0;
		std::cout << name << " a maintenant " << currentHp << "/" << maxHp << " Hp.\n";
	}
	std::string GetName() const { return name; }
	float GetcurrentHp() { return currentHp; }
	float GetMaxHp() { return maxHp; }
	float GetDmg() { return dmg; }
	float GetSpeed() { return speed; }
	float GetLv() { return lv; }
	void SetDodge(bool dodgevalue)
	{
		dodge = dodgevalue;
	}
	void SetCurrentHp()
	{
		currentHp = maxHp;
	}
};
