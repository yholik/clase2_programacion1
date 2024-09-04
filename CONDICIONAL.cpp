#include <iostream>
using namespace std;

int main(){
	float nota;
	cout << "¿Cual fue tu nota en Algoritmos y Programacion?" << endl;
	cin >> nota;
	
	if(nota>= 4){
		cout << "Felicitaciones Aprobo";
	}
	else {
		cout << "Lo lamento, debe repetir la materia";
	}
	return 0;
}
