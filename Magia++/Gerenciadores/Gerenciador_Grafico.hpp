#include <SFML/Graphics.hpp>

namespace Gerenciadores {
	class Gerenciador_Grafico {
	private: 
		sf::RenderWindow* janela;
		static Gerenciador_Grafico* instancia;
	public:
		Gerenciador_Grafico();
		~Gerenciador_Grafico();
		static Gerenciador_Grafico* getInstancia();
		static void deleta_instancia();
		sf::RenderWindow* getJanela();
		bool janela_aberta();
		void mostrar();
		void limpar();
		void fechar();
	};
}