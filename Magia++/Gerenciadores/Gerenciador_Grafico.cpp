#include "Gerenciador_Grafico.hpp"

namespace Gerenciadores {

	Gerenciador_Grafico* Gerenciador_Grafico::instancia = nullptr;

	/* Construtora e Destrutora */

	Gerenciador_Grafico::Gerenciador_Grafico():
	janela(new sf::RenderWindow(sf::VideoMode(1820, 1000), "JOGO"))
	{
	}

	Gerenciador_Grafico::~Gerenciador_Grafico() {
		if (instancia != nullptr) {
			delete instancia;
		}
		delete janela;
		janela = nullptr;
	}

	/* ======== Metodos ======== */

	/* Metodos da Instancia */

	Gerenciador_Grafico* Gerenciador_Grafico::getInstancia(){
		return instancia;
	}
	void Gerenciador_Grafico:: deleta_instancia() {
		delete instancia;
		instancia = nullptr;
	}

	/* Metodos de Janela */

	sf::RenderWindow* Gerenciador_Grafico::getJanela() {
		return janela;
	}

	bool Gerenciador_Grafico::janela_aberta() {
		return janela->isOpen();
	}

	void Gerenciador_Grafico::mostrar() {
		janela->display();
	}

	void Gerenciador_Grafico::limpar() {
		janela->clear();
	}

	void Gerenciador_Grafico::fechar() {
		janela->close();
	}

}