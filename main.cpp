#include <bits/stdc++.h>
#include <conio2.h>
#include "FilaDin.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	fila filacaminhoes;
	char op;
	do{
		system("cls");
		op = filacaminhoes.menu();
		switch(op)
		{
			case 'A':
				system("cls");
				cout << "Inserir caminhao\n";
				filacaminhoes.inserir_caminhao();
				getch();
				break;
			case 'B':
				system("cls");
				cout << "Remover caminhao\n";
				filacaminhoes.remover_caminhao();
				getch();
				break;
			case 'C':
				system("cls");
				cout << "Listar Fila\n";
				filacaminhoes.listar_fila();
				getch();
				break;
			case 'D':
				system("cls");
				cout << "Pesar caminhao\n";
				filacaminhoes.pesar_caminhao();
				getch();
				break;
			case 'E':
				system("cls");
				if(!filacaminhoes.esta_vazia())
				{
				cout << "Visualizacao do proximo caminhao da Fila\n";
				cout << "Placa do proximo caminhao: ";
				filacaminhoes.prox_caminhao();
				cout << endl;	
				}
				else
					cout << "Esta vazia\n";
				getch();
				break;
			case 'F':
				system("cls");
				filacaminhoes.verifica_vazia();
				getch();
				break;
				
		}
	}while(op!=27);
	return 0;
}
