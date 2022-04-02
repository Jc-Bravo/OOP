#include <iostream>
#include "Example.h"

using namespace std;

void create_example(int n) {
	
	cout << "--------create_example is ready--------\n";
	
	Example* e[10];
	
	for (int i = 0; i < n; i++)
		e[i] = new Example(i);
			
	// (6)getData()
	e[9]=new Example(9);
	e[0]->getData();
	e[1]->getData();
	e[2]->getData();
	//~()345
	for(int i =0;i<3;i++)
	e[i]->~Example();
	//get data 6
	e[9]->getData();

	
	cout << "--------create_example is over--------\n";
}

//(1)Example #1 is created
Example Example_1(23);
int main() {

	cout << "--------main_function is ready--------\n";

	// (8)Example #2 is created
	Example Example_2(233);	
	create_example(3);
	
	// (9)7
	Example Example_7(233);
	// get data 1 2 7
	Example_1.getData();
	Example_2.getData();
	Example_7.getData();
	cout << "--------main_function is over---------\n";

	return 0;
}
