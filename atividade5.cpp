#include <iostream>
using namespace std;

int main() {
    int passaporteValido, restricoesJudiciais, vacinadoFebreAmarela, paisExigeVacina;

    cout << "Possui passaporte valido? (1 para SIM, 0 para NAO): ";
    cin >> passaporteValido;

    cout << "Tem restricoes judiciais? (1 para SIM, 0 para NAO): ";
    cin >> restricoesJudiciais;

    cout << "Esta vacinado contra febre amarela? (1 para SIM, 0 para NAO): ";
    cin >> vacinadoFebreAmarela;

    cout << "O pais exige vacina contra febre amarela? (1 para SIM, 0 para NAO): ";
    cin >> paisExigeVacina;

    bool podeViajar = passaporteValido == 1 &&
                      restricoesJudiciais == 0 &&
                      (vacinadoFebreAmarela == 1 || paisExigeVacina == 0);

    if (podeViajar) {
        cout << "Aprovado para viagem internacional!" << endl;
    } else {
        cout << "Nao aprovado para viagem internacional." << endl;
    }

    return 0;
}
