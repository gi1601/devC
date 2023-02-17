#include <iostream>

using namespace std;

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float raio , result;
	const float pi = 3.14;
	
	cout<< "Informe o valor do raio: ";
	cin>> raio;
	
	result = (pi*(raio*raio));
	
	cout<< "O resultado da área é " << result;
	
	
}
