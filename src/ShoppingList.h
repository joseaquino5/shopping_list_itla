/*
 * ShoppingList.h
 *
 *  Created on: 24 jul. 2016
 *      Author: José Aquino
 */

#ifndef SHOPPINGLIST_H_
#define SHOPPINGLIST_H_
#include <iostream>
#include <cstdlib>
#include <sstream>
#include "Lista.h"

using namespace std;

namespace ITLA
{

	class ShoppingList
	{
		private:
			Lista* _lista;
			string _option;
		public:
			void printMenu();
			void verifyOption();
			void listItems();
			void addItem();
			void deleteItem();
			void printAllItems();
			ShoppingList();
			virtual ~ShoppingList();
	};

} /* namespace ITLA */

#endif /* SHOPPINGLIST_H_ */
