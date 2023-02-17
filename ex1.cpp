#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float hoje,nascimento,resultado;
	
	
	cout << "Informe o dia de hoje: ";
	cin >> hoje;
	
	cout << "Informe seu ano de nascimento: ";
	cin >> nascimento;
	
	resultado = (hoje-nascimento);
	
	if(resultado >= 16){
		cout<< "Você já pode votar";
	}else{
		cout<< "Você ainda não pode votar";
	}
}
