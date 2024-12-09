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
			Elemento<TE>* pProx;
			Elemento<TE>* pAnt;
			TE data;

		public:
			Elemento():
				pProx(NULL), pAnt(NULL), data(TE())
			{
			}
			~Elemento()
			{
				pProx = NULL;
				pAnt = NULL;
				data = NULL;
			}

			void setProx(Elemento<TE>* novoProx)
			{
				pProx = novoProx;
			}
			Elemento<TE>* getProx() const
			{
				return pProx;
			}

			void setAnt(Elemento<TE>* novoAnt)
			{
				pAnt = novoAnt;
			}
			Elemento<TE>* getAnt() const
			{
				return pAnt;
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
		Elemento<TL>* pPrimeiro;
		Elemento<TL>* pUltimo;

		int tam;

	public:
		Lista();
		~Lista();
		Elemento<TL>* getPrimeiro() const;
		Elemento<TL>* getUltimo() const;
		TL* operator[](int index);
		void pushElemento(TL newInfo);
		void popElemento(int index);
		const unsigned int getTam() const;
	};

	template <class TL>
	Lista<TL> :: Lista()
	{
		tam = 0;
		pPrimeiro = NULL;
		pUltimo = NULL;
	}

	template <class TL>
	Lista<TL> :: ~Lista()
	{
		Elemento<TL>* atual = pPrimeiro;

		while (atual != nullptr) {
			Elemento<TL>* pPrimeiro = atual->getProx();
			delete atual;
			atual = pPrimeiro;
		}
	}

	template <class TL>
	Lista<TL> :: Elemento<TL>* Lista<TL> :: getPrimeiro() const
	{
		return pPrimeiro;
	}

	template <class TL>
	Lista<TL>::Elemento<TL>* Lista<TL>::getUltimo() const
	{
		return pUltimo;
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

		Elemento<TL>* pAux = pPrimeiro;
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

		if (pPrimeiro == NULL)//lista vazia
		{
			pPrimeiro = elemento;
			pUltimo = elemento;
			tam++;
			std::cout << "Adicionado" << std::endl;
			return;
		}

		//se nao for vazia, adiciona no final

		elemento->setAnt(pUltimo);
		elemento->setProx(NULL);
		pUltimo->setProx(elemento);
		pUltimo = elemento;
		tam++;
		std::cout << "Adicionado" << std::endl;
	}

	//Remove elementos da lista com um certo indice
	template <class TL>
	void Lista<TL> :: popElemento(int index)
	{
		if (index >= tam || index < 0)//verificando se o indice está nos limites da lista
		{
			std::cout << "Index fora do limite da lista" << std::endl;
			exit(1);
		}

		Elemento<TL>* pAux = pPrimeiro;

		for (int i = 0; i < index; i++)//loop p chegar na pos
			pAux = pAux->getProx();

		if (pAux == pPrimeiro)//se pAux for cabeça
			pPrimeiro = pAux->getProx();

		else if (pAux == pUltimo)//se pAux for cauda
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