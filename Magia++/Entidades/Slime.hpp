#pragma once

#include "Obstaculo.h"

namespace Entidades {

	namespace Obstaculos {

		class Slime : public Obstaculo {
		private:
			float largura;
		public:
			Slime();
			~Slime();
			void executar();
			void obstacular(Jogador* p);
			//...
		};
	}
}
