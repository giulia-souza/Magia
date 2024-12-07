#pragma once

#include <iostream>

namespace Listas
{
	template <class TL>
	class Lista
	{
	public:
		template <class TE>
		class Elemento
		{
		private:
			Elemento<TE>* prox;
			Elemento<TE>* ant;
			TE data;

		public:
			Elemento():
				prox(NULL), ant(NULL), data(TE())
			{
			}
			~Elemento()
			{
				prox = NULL;
				ant = NULL;
				data = NULL;
			}

			void setProx(Elemento<TE>* novoProx)
			{
				prox = novoProx;
			}
			Elemento<TE>* getProx() const
			{
				return prox;
			}

			void setAnt(Elemento<TE>* novoAnt)
			{
					ant = novoAnt;
			}
			Elemento<TE>* getAnt() const
			{
				return ant;
			}

			void setData(TE novoData)
			{
				data = novoData;
			}
			TE getData() const
			{
				return data;
			}
		};

	private:
		Elemento<TL>* cabeca;
		Elemento<TL>* cauda;

		int tam;

	public:
		Lista();
		~Lista();
		Elemento<TL>* getCabeca() const;
		TL* operator[](int index);
		void pushElemento(TL newInfo);
		void pop(int index);
		void limpar();
		const unsigned int getTam() const;
	};

	template <class TL>
	Lista<TL> :: Lista()
	{
		tam = 0;
		cabeca = NULL;
		cauda = NULL;
	}

	template <class TL>
	Lista<TL> :: ~Lista()
	{
		Elemento<TL>* atual = cabeca;

		while (atual != nullptr) {
			Elemento<TL>* cabeca = atual->getProx();
			delete atual;
			atual = cabeca;
		}
	}

	template <class TL>
	Lista<TL> :: Elemento<TL>* Lista<TL> :: getCabeca() const
	{
		return cabeca;
	}


	//Sobre carga de operador para acessar algum elemento na sua dev posição
	template <class TL>
	TL* Lista<TL> :: operator[](int index)
	{
		if (index >= tam || index < 0)
		{
			std::cout << "Index fora do limite da lista" << std::endl;
			exit(1);
		}

		Elemento<TL>* pAux = cabeca;
		for (int i = 0; i < index; i++)
			pAux = pAux->getProx();

		return pAux->getInfo();
	}


	//Adicionar elementos na lista
	template <class TL>
	void Lista<TL> :: pushElemento(TL newInfo)
	{
		if (newInfo == NULL)
		{
			std::cout << "Tentando adicionar nulo na lista" << std::endl;
			exit(1);
		}

		Elemento<TL>* elemento = new Elemento<TL>();
		elemento->setData(newInfo);

		if (cabeca == NULL)//lista vazia
		{
			cabeca = elemento;
			cauda = elemento;
			tam++;
			std::cout << "Adicionado" << std::endl;
			return;
		}

		//se nao for vazia, adiciona no final

		elemento->setAnt(cauda);
		elemento->setProx(NULL);
		cauda->setProx(elemento);
		cauda = elemento;
		tam++;
		std::cout << "Adicionado" << std::endl;
	}

	//Remove elementos da lista com um certo indice
	template <class TL>
	void Lista<TL> :: pop(int index)
	{
		if (index >= tam || index < 0)//verificando se o indice está nos limites da lista
		{
			std::cout << "Index fora do limite da lista" << std::endl;
			exit(1);
		}

		Elemento<TL>* pAux = cabeca;

		for (int i = 0; i < index; i++)//loop p chegar na pos
			pAux = pAux->getProx();

		if (pAux == cabeca)//se pAux for cabeça
			cabeca = pAux->getProx();

		else if (pAux == cauda)//se pAux for cauda
			pAux->getAnt()->setProx(NULL);

		else {
			pAux->getAnt()->setProx(pAux->getProx());
			pAux->getProx()->setAnt(pAux->getAnt());
		}

		delete pAux;
	}

	template <class TL>
	const unsigned int Lista<TL> :: getTam() const
	{
		return tam;
	}
}//namespace Listas;