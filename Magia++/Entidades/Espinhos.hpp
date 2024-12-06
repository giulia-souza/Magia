#pragma once

#include "Obstaculo.h"

namespace Entidades {

	namespace Obstaculos {

		class Espinhos : public Obstaculo {
		private:
			int dano;
			float largura;
			//...
		public:
			Espinhos();
			~Espinhos();
			void executar();
			void obstacular(Jogador* p);
			//...
		};
	}
}
