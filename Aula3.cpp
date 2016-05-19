#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int main(int argc, char* args[]){
	bool sair = false;
	string j1, j2;
	int vida1 = 20, vida2 = 20;
	cout << "Digite o nome do jogador 1:" << endl;
	cin >> j1;
	cout << "Digite o nome do jogador 2:" << endl;
	cin >> j2;

	while (sair == false){
		cout << " o                       o" << endl;
		cout << ".T./                   \\.T. " << endl;
		cout << " ^                       ^" << endl;
		cout << j1 << "                   " << j2 << endl;
		cout << "Vida: " << vida1 << "             " << "Vida: " << vida2 << endl;
		int D6;
		srand((int)time(0));
		//O "s" em "srand" vem de "seed".
		D6 = rand() % 6 + 1;
		vida1 = vida1 - D6;
		D6 = rand() % 6 + 1;
		vida2 = vida2 - D6;
		//cout << "Vida: " << vida1 << "             " << "Vida: " << vida2 << endl;
		system("pause");
		system("cls");

		if (vida1 <= 0 || vida2 <= 0){
			sair = true;
		}
	}
	cout << "Fim de jogo." << endl;
	if (vida1 <= 0){
		cout << j2 << " Venceu." << endl;
	}
	else{
		cout << j1 << " Venceu." << endl;
	}
	return 0;
}