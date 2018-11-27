#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include "RaysClass.h"


using namespace std;


int main()
{
	// 2 ways to call a member of a class. Below is one
	RaysClass RaysObject;
	RaysObject.PrintSome(); // When you use an object, use a .

	// and this is the second way to call a member of your class
	RaysClass *RaysPointer = &RaysObject;
	RaysPointer->PrintSome(); // When you use a pointer, use a ->




	cin.get();
}