#pragma once

//Inimigo "Medio"

#include "Inimigo.h"

namespace Entidades {

	namespace Personagens {

		class CavaleiroDasTrevas : public Inimigo {
		private:
			int tamanho;
			//...
		public:
			CavaleiroDasTrevas();
			~CavaleiroDasTrevas();
			void danificar(Jogador* p);
			void executar();
		};
	}
}
