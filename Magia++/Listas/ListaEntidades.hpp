/*#pragma once

#include <SFML/Graphics.hpp>
#include "Lista.h"
#include "Entidades/Entidade.h"

namespace Listas
{

	class ListaEntidades
	{
	private:
		Lista<Entidades::Entidade> listaEnt;

	public:
		ListaEntidades();
		~ListaEntidades();

		void pushEntidade(Entidades::Entidade* ent);
		void clear();
		Lista<Entidades::Entidade>& getLista();
		Entidades::Entidade* removeEntidade(int index);
		const unsigned int getTam() const;

		void executar();
		void desenhar();
	};
} */