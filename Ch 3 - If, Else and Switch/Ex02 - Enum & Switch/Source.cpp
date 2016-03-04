#include <iostream>

using namespace std;

enum mount
{
	Horse = 1,
	Mare,
	Mule,
	Sheep,
	Chocobo
};

int main()
{
	int mount;

	cout << "Choose your mount by entering the matching number:" << endl;
	cout << Horse << " - Horse" << endl;
	cout << Mare << " - Mare" << endl;
	cout << Mule << " - Mule" << endl;
	cout << Sheep << " - Sheep" << endl;
	cout << Chocobo << " - Chocobo" << endl;

	cin >> mount;

	switch (mount)
	{
	case Horse:
		cout << "The steed is valiant and mighty." << endl;
		break;
	case Mare:
		cout << "This mare is white and beautiful." << endl;
		break;
	case Mule:
		cout << "You are given a mule to ride. You resent that." << endl;
		break;
	case Sheep:
		cout << "Baa! The sheep can barely support your weight." << endl;
		break;
	case Chocobo:
		cout << "Chocobo!" << endl;
		break;
	default:
		cout << "An invalid mount was chosen." << endl;
		break;
	}

	return 0;
}