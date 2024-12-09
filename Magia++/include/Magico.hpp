#pragma once

//Chefao

#include "Inimigo.h"

namespace Entidades {

	namespace Personagens {

		class Magico : public Inimigo {
		private:
			short int forca;
			//...
		public:
			Magico();
			~Magico();
			void danificar(Jogador* p);
			void executar();
			//...
		};
	}
}