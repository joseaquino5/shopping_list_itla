/*
 * Lista.h
 *
 *  Created on: 23 jul. 2016
 *      Author: José Aquino
 */

#ifndef LISTA_H_
#define LISTA_H_
#include "Nodo.h"

namespace ITLA
{

	class Lista
	{
		private:
			Nodo* _primer;
			Nodo* _ultimo;
		public:
			bool eliminar(int indice);
			Nodo* get(int indice);
			void agregar(Nodo* nodo);
			bool agregar(Nodo* nodo, int indice);
			int lenght();
			Lista();
			virtual ~Lista();

		    Nodo* getPrimer(){ return _primer;}
		    Nodo* getUltimo(){ return _ultimo;}
};

} /* namespace ITLA */

#endif /* LISTA_H_ */
