#pragma once

#include "Obstaculo.h"

namespace Entidades {

	namespace Obstaculos {

		class Plataforma : public Obstaculo {
		private:
			int altura;
			int largura;
			bool movel;
		public:
			Plataforma();
			~Plataforma();
			void executar();
			void obstacular(Jogador* p);
			//...
		};
	}
}
