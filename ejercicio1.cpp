#include <iostream>
using namespace std;

int main(){
	int a, b, mayor, menor;
	cout << "Ingrese dos numeros" << endl;
	cin >> a >> b;
	
	if(a>b){
		mayor = a;
		menor = b;
	}else {
		mayor = b;
		menor = a;
}
	cout << "Mayor: " << mayor << " Menor:" << menor << endl;
	
	return 0;
}
