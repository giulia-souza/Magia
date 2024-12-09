#pragma once

#include "Entidade.h"

namespace Entidades {

	namespace Personagens {

		class Personagem : public Entidade {
		protected:
			int num_vidas;
			//...
		public:
			Personagem();
			~Personagem();
			//salvar buffer...?
			virtual void mover();
			virtual void executar() = 0;
			//...
		};
	}
}
