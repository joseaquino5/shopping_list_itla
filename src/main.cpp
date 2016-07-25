//============================================================================
// Name        : Listas.cpp
// Author      : VMeta
// Version     :
// Copyright   : Your copyright notice
// Description : Shopping List in C++, Ansi-style
//============================================================================

#include "ShoppingList.h"

using namespace ITLA;

int main()
{
	ShoppingList* shopping = new ShoppingList();
	while(true){
		shopping -> printMenu();
	}

	return 0;
}




