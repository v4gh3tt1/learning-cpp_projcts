#include <iostream>

using namespace std;

int main() {
 int hora;
 cout << "Digite uma hora do dia: ";
 cin >> hora; // -----------entrada de dados: HORA
 if (hora < 12) { //se cond verdadeira
 cout << "Bom dia!" << endl;
 }
 else { // ---se condição falsa
 cout << "Boa tarde!" << endl;
 }
 return 0;
} 