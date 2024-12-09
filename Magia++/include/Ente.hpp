#pragma once

#include <SFML/Graphics.hpp>

namespace Gerenciadores {
	class Gerenciador_Grafico;
}

class Ente{
protected:
	const int id;
	Gerenciadores::Gerenciador_Grafico* pGG;
	sf::Sprite* sprite;
public:
	Ente();
	virtual ~Ente();
	int getId() { return id; }
	void atualizaSprite();
	virtual void executar() = 0;
	void desenhar();
};
