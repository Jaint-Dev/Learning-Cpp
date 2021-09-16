#include <iostream>

using namespace std;

int main(){
	
	// TIPO NOME;
	// TIPO NOME = VALOR;
	
	int inteiros; // 10 / 25 / 1 / -10
	int inteiros2 = 2;
	
	char caractere; // 'a' / 'c' / '9'
	char caracteres2 = 'J';
	char letras[20]; // Vetor
	
	float decimais; // 1.777
	float decimais2 = 5.35;
	
	double decimais_b; // 1.6999
	double decimais_b2 = 2.5;
	
	bool truefalse; // True == 1 / False == 0
	bool truefalse2=true;
	
	string texto; // "Jean Carlo"
	string texto1 = "jeanzin";
	
	
	cout << "Digite um numero inteiro: ";
	cin >> inteiros2;
	
	cout << "Digite uma letra: ";
	cin >> caracteres2;
	
	cout << "Digite um decimal: ";
	cin >> decimais_b2;
	
	cout << "Digite seu nome: ";
	cin >> texto1;
	
	cout << inteiros2 << "\n"; 
	cout << caracteres2 << "\n";
	cout << decimais2 << "\n";
	cout << decimais_b2 << "\n";
	cout << truefalse2 << "\n";
	cout << texto1 << "\n";
	
	return 0;
}
