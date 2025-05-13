#include <iostream>

using namespace std;

bool liberarEntrada(int idade, bool acompanhado, bool ingressoValido) {
    if ((idade >= 18 || acompanhado) && ingressoValido) {
        return true;
    }
    return false;
}

int main() {
    int idade;
    char resposta;
    bool acompanhado, ingressoValido;

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Esta acompanhado por um responsavel? (s/n): ";
    cin >> resposta;
    acompanhado = (resposta == 's' || resposta == 'S');

    cout << "Possui ingresso valido? (s/n): ";
    cin >> resposta;
    ingressoValido = (resposta == 's' || resposta == 'S');

    if (liberarEntrada(idade, acompanhado, ingressoValido)) {
        cout << "Entrada liberada! Aproveite o evento." << endl;
    } else {
        cout << "Entrada negada. Verifique os requisitos." << endl;
    }

    return 0;
}
