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
		cout<< "Voc� j� pode votar";
	}else{
		cout<< "Voc� ainda n�o pode votar";
	}
}
