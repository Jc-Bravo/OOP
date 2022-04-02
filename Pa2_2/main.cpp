#include <iostream>
#include "Example.h"

using namespace std;

void create_example(int n) {
	
	cout << "--------create_example is ready--------\n";
	
	Example* e[10];
	
	for (int i = 0; i < n; i++)
		e[i] = new Example(i);
			
	// (6)
	
	cout << "--------create_example is over--------\n";
}

// (7)

int main() {

	cout << "--------main_function is ready--------\n";

	// (8)
		
	create_example(3);
	
	// (9)

	cout << "--------main_function is over---------\n";

	return 0;
}
