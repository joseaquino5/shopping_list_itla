/*
 * ShoppingList.cpp
 *
 *  Created on: 24 jul. 2016
 *      Author: José Aquino
 */

#include "ShoppingList.h"

namespace ITLA
{

	ShoppingList::ShoppingList() : _lista(new Lista())
	{


	}

	void ShoppingList::printMenu()
	{
	  cout <<"\n\n\t\t\tWelcome to Shopping List\n"<< endl;
	  cout <<"You have to choose an option (Type the number of the option do you want to execute): \n"<< endl;
	  cout <<"1. List Items"<< endl;
	  cout <<"2. Add Items"<< endl;
	  cout <<"3. Delete Items"<< endl;
	  cout <<"4. Exit"<< endl;
	  cout <<"\nType your option: ";
	  cin >> _option;
	  cout << endl;
	  verifyOption();

	}

	void ShoppingList::verifyOption() {
        while(!(_option == "1" || _option == "2" || _option == "3" || _option == "4")){
        	cout <<"Try again please you type an invalid option: ";
             cin >> _option;
         }

        if(_option == "1"){
        	listItems();
        }
        else if(_option == "2"){
        	addItem();
        }

        else if(_option == "3"){
        	deleteItem();
        }

        else{
        	cout << "See, back soon" << endl;
        	exit(EXIT_SUCCESS);
        }
        _option="";
	}

	void ShoppingList::listItems() {

		Nodo* iterator = _lista -> getPrimer();

		if(iterator == NULL){
			cout <<"You don't have any items in you shopping list, you'll be return to the main menu."<< endl;
			cout <<"Press enter to continue..";
		    cin.ignore();
		    cin.get();

		}else{
			cout <<"Shopping List:"<< endl;
			printAllItems();
			cout <<"Press enter to continue..";
		    cin.ignore();
		    cin.get();
		}

	}

	void ShoppingList::addItem()
	{
		string name = "";
		cout <<"Entering item"<< endl;
		cout <<"Enter the name of the article: ";
		cin >> _option;
		name = _option;
		cout <<"Enter the amount of new article: ";
		cin >> _option;
		while(atoi(_option.c_str()) == 0){
		 cout <<"You must specify an amount valid (Greater than 0), try again please: ";
		 cin >> _option;
		}
		std::stringstream sstm;
		sstm << name << " " << atoi(_option.c_str());
		_lista->agregar(new Nodo(sstm.str()));;
		cout <<"Item Added. Press ENTER to return to the main menu...";
	    cin.ignore();
	    cin.get();

	}

	void ShoppingList::printAllItems(){
		Nodo* iterator = _lista -> getPrimer();
		int i = 1;
		while(iterator != NULL){
			cout << "  " << i  << "- " << iterator -> getNombre() << endl;
			iterator = iterator -> getSiguiente();
			i++;
		}
		cout <<  endl;
	}


	void ShoppingList::deleteItem()
	{
		Nodo* iterator = _lista -> getPrimer();

		if(iterator == NULL){
			cout <<"You don't have any items in you shopping list, you'll be return to the main menu."<< endl;
			cout <<"Press enter to continue..";
		    cin.ignore();
		    cin.get();
		}else{
			cout <<"Eliminated items:"<< endl;
			printAllItems();
			cout <<"Select the item to delete: ";
			cin >> _option;
			int indice =  atoi(_option.c_str());

			while(!_lista->eliminar(indice)){
				cout <<"Try again please you type an invalid index: ";
				cin >> _option;
				indice =  atoi(_option.c_str());
			}
			cout <<"Item deleted. Press ENTER to return to the main menu...";
		    cin.ignore();
		    cin.get();
		}
	}

	ShoppingList::~ShoppingList()
	{

	}

} /* namespace ITLA */
