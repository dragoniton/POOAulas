#include <iostream>
#include <string>
using namespace std;
int main(int argc, char* args[]){
	string nome;
	string classe;
	//cout << "Pense em um numero!" << endl;
	cout << "Digite o nickname do seu personagem: ";
	//cin >> nome;
	getline(cin, nome);
	cout << "Digite a classe do seu personagem: ";
	getline(cin, classe);
	char inicial = nome[0];
	cout << "Seu nome eh " << inicial <<". " << nome << endl;
	cout << "Sua classe eh " << classe << endl;

	float atk = 12;
	float def = 10, mag = 6, mr = 5;
	float hp = 100, hpmax = 200;
	float porcent;

	cout << "Status" << endl << "ATK: " << atk << endl << "INT: " << mag << endl << "DEF: " << def << endl << "MR: " << mr << endl;
	cout << "HP: " << hp << "/" << hpmax << endl;
	porcent = (hp * 100) / hpmax;
	cout.precision(2);// define quantidade de numeros pos virgula
	cout << "Seu hp esta em "<< fixed << porcent << "%" << endl;
	//system("pause");
	return 0;
}
