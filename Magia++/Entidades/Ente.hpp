#pragma once

#include <SFML/Graphics.hpp>
//dar include no gerenc grafico

class Ente{
protected:
	const int id;
	//ponteiro para o gerenciador gráfico
	//ponteiro pra figura
public:
	Ente();
	virtual ~Ente();
	virtual void executar() = 0;
	virtual void desenhar() = 0;
};