/*
 * Lista.cpp
 *
 *  Created on: 23 jul. 2016
 *      Author: José Aquino
 */

#include "Lista.h"

namespace ITLA
{

	Lista::Lista() : _primer(NULL), _ultimo(NULL)
	{


	}

	void Lista::agregar(Nodo* nodo)
	{
		if(_primer == NULL)
		{
			_primer = nodo;
			_ultimo = nodo;
		}else
		{
			_ultimo -> setSiguiente(nodo);
			_ultimo = nodo;
		}

	}

	bool Lista::agregar(Nodo* nodo, int indice)
	{
		Nodo* referencia = get(indice);

		if(referencia == NULL){
			return false;
		}
		nodo -> setSiguiente(referencia -> getSiguiente());
		referencia -> setSiguiente(nodo);


		return true;
	}

	Nodo* Lista::get(int indice)
	{
		int i = 0;
		Nodo* iterador = _primer;

		while(iterador != NULL){
			if(i == indice){
				return iterador;
			}else{
				iterador = iterador -> getSiguiente();
				i++;
			}
		}
		return NULL;

	}

	bool Lista::eliminar(int indice)
	{

		if(indice == 1){
			_primer = _primer -> getSiguiente();
			return true;
		}
		else{
			int i = 1;
			Nodo* iterador = _primer;
			Nodo* lastIterator;

			while(iterador != NULL){
				if(i == indice){
					lastIterator -> setSiguiente( iterador -> getSiguiente());
					delete iterador;
					return true;
				}else{
					lastIterator = iterador;
					iterador = iterador -> getSiguiente();
					i++;
				}
			}
		}
		return false;
	}

	int Lista::lenght()
	{
		int i = 1;
		Nodo* iterador = _primer;

		while(iterador != NULL){
			iterador = iterador -> getSiguiente();
			i++;
		}
		return i;
	}

	Lista::~Lista()
	{

	}

} /* namespace ITLA */


