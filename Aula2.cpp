#include <iostream>
#include <string>
using namespace std;
int main(int argc, char* args[]){
	string j1, j2;
	int vida1 = 20, vida2 = 20;
	cout << "Digite o nome do jogador 1:" << endl;
	cin >> j1;
	cout << "Digite o nome do jogador 2:" << endl;
	cin >> j2;

	cout << " o                       o" << endl;
	cout << ".T./                   \\.T. " << endl;
	cout << " ^                       ^" << endl;
	cout << j1 << "                   " << j2 << endl;
	cout << "Vida: " << vida1 << "             " << "Vida: " << vida2 << endl;
	do{
		int D6;
		srand(1234);
		//O "s" em "srand" vem de "seed".
		D6 = rand() % 6 + 1;
		vida1 = vida1 - D6;
		D6 = rand() % 6 + 1;
		vida2 = vida2 - D6;
		cout << "Vida: " << vida1 << "             " << "Vida: " << vida2 << endl;
	} while (vida1 && vida2 > 0);
	return 0;
}
