#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Name?" << endl;
	string name;
	cin >> name;
	cout << "Age?" << endl;
	int age;
	cin >> age;
	cout << "Enter a single character (keystroke): " << endl;
	char character;
	cin >> character;

	float bigNum = 1.2345f;


	// %d formats integer
	// %f formats float
	// %s formats string, but string must be called as string.c_str()
	// %c formats character
	printf("Hello! My name is %s, I am %d years old, and my favorite character is %c." 
			"\nAlso, I can float! %f",
			name.c_str(), age, character, bigNum);
	cout << endl;
	return 0;
}