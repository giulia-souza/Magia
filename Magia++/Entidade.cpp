#include "include/Entidade.hpp"

namespace Entidades {
	using namespace Gerenciadores;

	Entidade::Entidade(float posX, float posY, float tamX, float tamY):
		Ente(), corpo(sf::Vector2f(tamX, tamY))
	{
		corpo.setPosition(sf::Vector2f(posX, posY));
	}
	Entidade:: ~Entidade(){}
	sf::RectangleShape Entidade:: getCorpo() {
		return corpo;
	}
	sf::RectangleShape* Entidade:: getCorpoPtr() {
		return &corpo;
	}
	void Entidade::setPosicao(sf::Vector2f pos) {
		corpo.setPosition(pos);
	}
	//void Entidade::desenhar() {
	//	pGG->desenhar(&corpo);
	//}
}