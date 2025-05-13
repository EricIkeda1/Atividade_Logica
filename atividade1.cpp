#include <iostream>

using namespace std;

bool autorizarEmprestimo(double salario, int anosExperiencia, int scoreSerasa) {
    if ((salario > 2000 || anosExperiencia > 5) && scoreSerasa >= 300) {
        return true;
    }
    return false;
}

int main() {
    double salario;
    int anosExperiencia, scoreSerasa;

    cout << "Digite seu salario: ";
    cin >> salario;
    
    cout << "Digite seus anos de experiencia de trabalho: ";
    cin >> anosExperiencia;
    
    cout << "Digite seu score no Serasa: ";
    cin >> scoreSerasa;

    if (autorizarEmprestimo(salario, anosExperiencia, scoreSerasa)) {
        cout << "Emprestimo autorizado!" << endl;
    } else {
        cout << "Emprestimo negado." << endl;
    }

    return 0;
}
