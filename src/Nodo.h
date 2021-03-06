/*
 * Nodo.h
 *
 *  Created on: 23 jul. 2016
 *      Author: Jos� Aquino
 */

#ifndef NODO_H_
#define NODO_H_
#include <string>

namespace ITLA
{

	class Nodo
	{
		private:
			Nodo* _siguiente;
			std::string _nombre;
		public:
			Nodo* getSiguiente() { return _siguiente;}
			void setSiguiente(Nodo* nodo) { _siguiente = nodo; }
			std::string getNombre() { return _nombre;}

			Nodo(std::string nombre);
			virtual ~Nodo();

};

} /* namespace ITLA */

#endif /* NODO_H_ */
