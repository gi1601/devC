#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2;
	
	cout<< "Digite um n�mero: ";
	cin>> n1;
	
	cout<< "Digite um n�mero: ";
	cin>> n2;
	
	
	if(n1>n2){
		cout<< "O primeiro numero � maior";
	}
	if(n1<n2){
		cout<< "O segundo numero � maior";
	}
	if(n1==n2){
		cout<< "Os dois s�o iguais";
	}
}
