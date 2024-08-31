#include <iostream>

using namespace std;

int contaA( char texto[]) {
    int cont = 0;
    for (int i = 0; texto[i] != '\0'; ++i) {
        if (texto[i] == 'a' || texto[i] == 'A') {
            ++cont;
        }
    }
   
    return cont;
}

int main() {
    char texto[100];
    cout << "Digite um texto: ";
    cin.getline(texto, sizeof(texto));  

    int quantidade = contaA(texto);

    if (quantidade > 0) {
        cout << "O texto contém a letra 'a' " << quantidade << " vez(es)." << endl;
    } else {
        cout << "O texto não contém a letra 'a'." << endl;
    }
    return 0;
}
