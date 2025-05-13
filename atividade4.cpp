#include <iostream>
using namespace std;

int main() {
    int idade, tempoContribuicao;

    cout << "Informe a idade: ";
    cin >> idade;

    cout << "Informe o tempo de contribuicao (em anos): ";
    cin >> tempoContribuicao;

    bool podeAposentar = (idade >= 65) ||
                         (tempoContribuicao >= 30) ||
                         (idade >= 60 && tempoContribuicao >= 25);

    if (podeAposentar) {
        cout << "Pode se aposentar!" << endl;
    } else {
        cout << "Ainda nao pode se aposentar." << endl;
    }

    return 0;
}
