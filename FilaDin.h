#include <bits/stdc++.h>

using namespace std;

struct caminhao{
	string placa;
	float peso;
};

struct no{
	caminhao Caminhao;
	no* prox;
};

class fila{
	private:
		no* primeiro;
		no* ultimo;
		
	public:
		fila();
		~fila();
		void inserir_caminhao();
		void remover_caminhao();
		bool esta_vazia();
		bool esta_cheia();
		char menu();
		void pesar_caminhao();
		void listar_fila();
		void prox_caminhao();
		void verifica_vazia();
};
