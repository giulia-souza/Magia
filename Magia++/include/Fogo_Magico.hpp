#pragma once

#include "Entidade.h"

namespace Entidades {

	class Fogo_Magico : public Entidade {
	protected:
		bool ativo;
		//...
	public:
		Fogo_Magico();
		~Fogo_Magico();
		void executar();
		//void salvar();
		//...
	};
}
