#include<iostream>
#include<string>

using namespace std;

struct Armor
{
	string name;
	int armorClass;
	double durability;
};

struct PlayerStruct
{
// By default all data members are public in a struct.
private:
	string name;
	int hp;
	Armor armor;

public:
	// A member function that reduces player hp by some amount
	void damage(int dmgamount)
	{
		if (dmgamount > armor.armorClass)
		{
			hp -= dmgamount - armor.armorClass;
			// alternatively, this->hp -= amount;
		}
			}

	void recover(int amount)
	{
		hp += amount;
	}
};

class PlayerClass
{
	// By default all data members are private in a class.
	string name;
	int hp;
	Armor armor;

public:
	// 'const' indicates that the method will not change the internal state of the class.
	// This allows the compiler to make some optimizations.
	// Similar to static/shared in C#/VB
	string getName() const { return name; }
	void setName(string newName){name = newName;}
	
	void setHP(int newHP)
	{
		// Guard the hp variable from taking on negative values
		if (newHP < 0)
		{
			cout << "Error, palyer hp cannot be less than 0" << endl;
			newHP = 0;
		}
		hp = newHP;
	}

	// A member function that reduces player hp by some amount
	void damage(int dmgamount)
	{
		if (dmgamount > armor.armorClass)
		{
			hp -= dmgamount - armor.armorClass;
			// alternatively, this->hp -= amount;
		}
	}

	void recover(int amount)
	{
		hp += amount;
	}

	// The constructor!
	PlayerClass()
	{
		cout << "Player object constructed" << endl;
		name = "Diplo";
	}

	// Destructor
	~PlayerClass()
	{
		cout << "Player object destroyed." << endl;
	}
};

int main()
{
	PlayerClass player;
	cout << "Player named '" << player.getName() << "'" << endl;
} 