#include <bits/stdc++.h>
#include <conio2.h>
#include "FilaDin.h"

using namespace std;

	fila::fila()
	{
		ultimo = NULL;
		primeiro = NULL;
	}
	
	fila::~fila()
	{
		no* temp;
		while(primeiro!=NULL)
		{
			temp = primeiro;
			primeiro = primeiro->prox;
			delete temp;
		}
		ultimo = NULL;
	}
	
	void fila::inserir_caminhao()
	{
		if(fila::esta_cheia())
			cout << "Esta cheia\n";
		else
		{
			string placa;
			cout << "Qual a placa do caminhao:\n";
			cin >> placa;
			no* novono = new no;
			if(fila::esta_vazia())
				primeiro = novono;
			else
				ultimo->prox = novono;
			novono->prox=NULL;
			novono->Caminhao.placa = placa;
			ultimo=novono;
			cout << "Caminhao inserido com sucesso\n";
		}
	}
	
	void fila::pesar_caminhao()
	{
		if(fila::esta_vazia())
			cout << "Esta vazia, nao ha caminhoes para se pesar\n";
		else
		{
			float peso;
			cout << "Digite o peso do caminhao\n";
			cin >> peso;
			primeiro->Caminhao.peso = peso;
			cout << "Caminhao pesado com sucesso\n";
		}	
	}
	
	void fila::remover_caminhao()
	{
		if(fila::esta_vazia())
		{
			cout << "A fila esta vazia, nao ha caminhoes para remover\n";
		}
		else
		{
			string placa = primeiro->Caminhao.placa;
			no* temp = primeiro;
			primeiro = primeiro->prox;
			if(primeiro==NULL)
				ultimo = NULL;
			delete temp;
			cout << "Caminhao, Placa: " << placa << " removido com sucesso\n";
		}
		
	}
	
	bool fila::esta_vazia()
	{
		return (primeiro==NULL);
	}
	
	void fila::listar_fila()
	{
		if(fila::esta_vazia())
			cout << "Esta vazia\n";
		else
		{
			no* temp = primeiro;
			int i=1;
			while(temp!=NULL)
			{
				cout << "Lugar na fila: " << i << "\tPlaca: " << temp->Caminhao.placa << endl;
				temp = temp->prox;
				i++;
			}
		}
	}
	
	bool fila::esta_cheia()
	{
		try
		{
			no* temp;
			temp = new no;
			delete temp;
			return false;
		}
		catch(bad_alloc& e)
		{
			return true;
		}
	}
	
	void fila::prox_caminhao()
	{
		cout << primeiro->Caminhao.placa;
	}
	
	void fila::verifica_vazia()
	{
		if(fila::esta_vazia())
			cout << "Esta vazia\n";
		else
			cout << "Nao esta vazia\n";
	}
	
	char fila::menu()
	{
		cout << "[A]Inserir caminhao\n";
		cout << "[B]Remover caminhao\n";
		cout << "[C]Listar fila\n";
		cout << "[D]Pesar/atender caminhao\n";
		cout << "[E]Ver proximo caminhao\n";
		cout << "[F]Verificar se esta vazia\n";
		return toupper(getch());
	}
