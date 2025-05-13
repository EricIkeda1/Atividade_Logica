#include <iostream>
#include <string>

using namespace std;

bool verificarAcesso(bool senhaBloqueada, string senhaCorreta, string senhaInserida) {
    if (!senhaBloqueada && senhaInserida == senhaCorreta) {
        return true;
    }
    return false;
}

int main() {
    bool senhaBloqueada;
    string senhaCorreta = "segura123"; 
    string senhaInserida;
    char resposta;

    cout << "Sua senha esta bloqueada? (s/n): ";
    cin >> resposta;
    senhaBloqueada = (resposta == 's' || resposta == 'S');

    cout << "Digite sua senha: ";
    cin >> senhaInserida;

    if (verificarAcesso(senhaBloqueada, senhaCorreta, senhaInserida)) {
        cout << "Acesso permitido!" << endl;
    } else {
        cout << "Acesso negado. Verifique sua senha." << endl;
    }

    return 0;
}
