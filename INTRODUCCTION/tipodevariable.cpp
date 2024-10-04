#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>
#include <string>

using namespace std;

int main() {
	locale loc("");
	cout.imbue(loc);
	string texto0 = "Hola Mundo, Max";
		cout << texto0 << endl;

		string tipoa = "hello ";
		string tipob = "world!";
		string saludo = tipoa + tipob;
		cout << saludo << endl;

		//introducir un valor en una variable tipo string e imprimirlo
		string nombre; 
		cout << "Dame tu Nombre : ";
		cin >> nombre; 
		cout << "Hola " << nombre << endl; 

		// INTRODUCIR UNA LINEA 
		cin.ignore();
		string nombreCompleto;
		cout << "Dame tu Nombre completo : ";
		getline(cin, nombreCompleto);
		cout << "Tu nombre completo es: " << nombreCompleto << endl;

		//acceso a un caracter especifico
		cout << nombre[0] << endl; 


		return 0;

};
