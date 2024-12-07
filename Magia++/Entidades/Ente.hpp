#pragma once

#include <SFML/Graphics.hpp>
#include "../Gerenciadores/Gerenciador_Grafico.hpp"

class Ente{
protected:
	const int id;
	//static Gerenciadores::Gerenciador_Grafico* pGG;
	sf::RectangleShape* forma;
	sf::Vector2f pos;
public:
	Ente();
	virtual ~Ente();
	void setId(int ide);
	int getId();
	void setPosicao(const sf::Vector2f posicao);
	sf::Vector2f getPos();
	virtual void executar() = 0;
	//virtual void desenhar();
};
