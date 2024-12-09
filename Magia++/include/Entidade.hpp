#pragma once
#include <SFML/Graphics.hpp>
#include "Ente.hpp"

class Ente;
namespace Entidades {

	class Entidade : public Ente {
	protected:
		sf::RectangleShape corpo;
	public:
		Entidade(float posX, float posY, float tamX, float tamY);
		virtual ~Entidade();
		sf::RectangleShape getCorpo();
		sf::RectangleShape* getCorpoPtr();
		void setPosicao(sf::Vector2f pos);
		//void desenhar();
		virtual void executar() = 0;
		virtual void salvar() = 0;
		//...
	};
}