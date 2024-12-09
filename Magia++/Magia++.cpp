// Magia++.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
#include <SFML/Graphics.hpp>
#include "include/Gerenciador_Grafico.hpp"
#include "include/Lista.hpp"
#include "include/Ente.hpp"
#include <iostream>

int main()
{
    Listas::Lista<char> lista;

	char teste = 'a';
    char teste2 = 'b';
    char teste3 = 'c';

    lista.pushElemento(teste);
    lista.pushElemento(teste2);
    lista.pushElemento(teste3);


    lista.popElemento(1);
	printf("removi\n");
    lista.popElemento(0);
    printf("removi\n");
    lista.popElemento(0);
    printf("removi\n");
    
    Gerenciadores::Gerenciador_Grafico gg;

    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Magenta);

    while (gg.janela_aberta())
    {
        sf::Event event;
        while (gg.getJanela()->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                gg.fechar();

            else if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Escape)
                    gg.fechar();
            }
        }

        gg.limpar();
        gg.getJanela()->draw(shape);
        gg.mostrar();
    }


    return 0;

}
