#pragma once

#include "Entidade.h"
#include "Jogador.h"

namespace Entidades {

	namespace Obstaculos {

		using namespace Personagens;

		class Obstaculo : public Entidade {
		protected:
			bool danoso;
			//...
		public:
			Obstaculo();
			~Obstaculo();
			virtual void executar() = 0;
			virtual void obstacular(Jogador* p) = 0;
			//...
		};
	}
}
