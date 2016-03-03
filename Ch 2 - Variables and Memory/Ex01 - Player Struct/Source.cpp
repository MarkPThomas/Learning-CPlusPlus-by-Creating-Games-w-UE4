#include <iostream>
#include <string>

using namespace std;

struct Vector
{
	float x, y, z;
};

struct Player
{
	string name;
	int hp;
	Vector position;
};

int main()
{
	Vector v;
	v.x = 20, v.y = 30, v.z = 40;
	cout << "A 3-space vector at " << v.x << ", " << v.y << ", " << v.z << endl;

	// Create an object of type Player
	Player me;
	me.name = "William";
	me.hp = 100.0f;
	me.position.x = me.position.y = me.position.z = 0;

	cout << "My name is " << me.name
		<< ". I have " << me.hp << " hit points, and I am at location x = "
		<< me.position.x << ", y = " << me.position.y << ", z = " << me.position.z << endl;

	return 0;
}