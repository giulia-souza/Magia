#pragma once

#include "Personagem.h"
#include "Jogador.h"

namespace Entidades {

	namespace Personagens{

		class Inimigo : public Personagem {
		protected:
			int nivel_maldade;
			//...
		public:
			virtual void executar() = 0;
			virtual void danificar(Jogador* p) = 0;
		};
	}
}
