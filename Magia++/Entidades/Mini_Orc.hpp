#pragma once

#include "Inimigo.h"

namespace Entidades {

	namespace Personagens {

		class Mini_Orc : public Inimigo {
		private:
			float raio;
			//...
		public:
			Mini_Orc();
			~Mini_Orc();
			void danificar(Jogador* p);
			void executar();
		};
	}
}
