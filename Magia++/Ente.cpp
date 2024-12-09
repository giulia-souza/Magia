#include "include/Ente.hpp"
#include "include/Gerenciador_Grafico.hpp"

	Ente::Ente() : sprite(nullptr), id(0), pGG(nullptr) {}
	Ente:: ~Ente() {
	}
	
	void Ente:: desenhar() {
		pGG->desenhar(sprite);
	}

