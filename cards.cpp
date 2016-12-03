
#include "cards.h"
#include <iostream>
using namespace std;


cards::cards(int new_value, char* new_name, char* new_color)
{
	cout << "cards constructor call" << endl;
	
	new_value.setvolue(new_value);
	
	enum Color { Red, Green, Blue, Purple, Orange };
	Color r = color;

	name = new char[strlen(new_name + 1)];
	if (name == 0)
	{
		cout << "error.";
		return;
	}
	strcpy(name, new_name);

	color = new char[strlen(new_color + 1)];
	if (color == 0)
	{
		cout << "error.";
		return;
	}
	strcpy(color, new_color);
	
	void printCard(){
	cout << "name=" << name << endl;
	cout << "value=" << value << endl;
	cout << "color=" << color << endl;
	}
}

car::~car()
{
	delete[] name;
	delete[] color;
}