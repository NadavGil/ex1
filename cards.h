
#ifndef cards_h
#define cards_h
#include <iostream>
#include <string>
#include <stdio.h>

class cards {
	char* name;
	int value;
	char* color;
}

public:
	cards();
	cards(char* new_name, char* new_color, int new_value);

	int getvalue();
	void setvalue(int new_value);
	void printCards();
	~cards();

	};

#endif 
