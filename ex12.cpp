#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float temperaturaC, temperaturaF, result;
	
	cout<< "Informe a temperatura em Celsius: ";
	cin>> temperaturaC;
	
	temperaturaF = (temperaturaC*(1.18+32));
	
	cout<< "Temperatura em Fahrenheit: " <<temperaturaF ;
	
	
}
