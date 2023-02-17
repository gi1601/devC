#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2;
	
	cout<< "Digite um número: ";
	cin>> n1;
	
	cout<< "Digite um número: ";
	cin>> n2;
	
	
	if(n1>n2){
		cout<< "O primeiro numero é maior";
	}
	if(n1<n2){
		cout<< "O segundo numero é maior";
	}
	if(n1==n2){
		cout<< "Os dois são iguais";
	}
}
