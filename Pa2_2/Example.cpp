#include <iostream>
#include "Example.h"

using namespace std;

	// (2)static nums
	int Example::nums=0;

Example::Example(int data) {
	// (3)Example #3 is created
	nums++;
	num=nums;
	switch (nums)
	{
	case 1:
		Data=23;
		break;
	case 2:
		Data=233;
		break;
	case 3:
		Data= 0;
		break;
	case 4:
		Data = 1;
		break;
	case 5:
		Data = 2;
		break;
	case 6:
		Data = 2333;
		break;
	case 7:
		Data = 23333;
		break;
	default:
		break;
	}
	cout << "Example #"<<nums<<" is created\n";
}

void Example::getData() {
	// (4)The data of~
	cout<<"The data of Example #"<<num<<" is "<<Data<<endl;
}

Example::~Example() {
	// (5)
	cout<<"Example #"<<num<<" is destroyed\n";
}