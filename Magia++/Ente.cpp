#include "Entidades/Ente.hpp"


	Ente::Ente(): id(0) {
		forma = nullptr;
		//pGG = nullptr;
		pos = sf::Vector2f(0, 0);
	}
	 Ente:: ~Ente() {
		delete forma;
		forma = nullptr;
		//pGG = nullptr;
	}
	int Ente::getId() {
		return id;
	}
	void Ente:: setPosicao(const sf::Vector2f posicao) {
		pos = posicao;
	}
	sf::Vector2f Ente::getPos() {
		return pos;
	}
	//void Ente:: desenhar() {
		//pGG->getJanela()->draw(*forma);
	//}
