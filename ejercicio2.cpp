#include <iostream>
using namespace std;

int main(){
	
	int a, b, c, mayor, menor, medio;
	cout << "Ingrese tres numeros separados por espacio:" << endl;
	cin >> a >> b >> c;
	
	if (a>b){
		if(a>c){
			mayor = a;
			}else if(b>c){
				medio = b;
				menor = c;
				mayor = a;
		}else{
			medio = c;
			menor = b;
			mayor = a;
		}
	}else if(b>c){
		mayor = b;
		if(a>c){
			medio = a;
			menor = c;
			mayor = b;
		}else{
			medio = c;
			menor = a;
			mayor = b;
		}
	}else{
		mayor = c;
		medio = b;
		menor = a;
	}
	
	cout << "Mayor: " << mayor << " Menor: " << menor << " Medio: " << medio;
	
	return 0;
}
