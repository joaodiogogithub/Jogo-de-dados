#include "sub.h"

using namespace std;

static int d6[6]={1,2,3,4,5,6};
static int d20[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

int main() {

    int handler[99];
    int guess = 0, choose = 0;

    bool loop = true;

    while(loop){

        system("clear");
        cout << "Bem vindo ao jogo de dados!" << endl;
        cout <<"Deseja jogar um dado de 6 ou 20 lados?\n\n1- D6(Facil)\n2- D20(Dificil)\n3- Sair\n"<< endl;
        cin >> choose;

        switch (choose)
        {
            case 1:
                system("clear");
                cout << "Escolha um número de 1 a 6: ";
                cin >> guess;
                handler[0] = d6[rand()%6];
                cout << "O número sorteado foi: " << handler[0] << endl;
                if(guess == handler[0]){
                    cout << "Parabéns, você acertou!\n"<< endl;
                    cout << "Numero sorteado: " << handler[0] <<"\nNumero escolhido: "<< guess << endl;
                    system("sleep 5");
                } else {
                    cout << "Que pena, você errou!" << endl;
                    cout << "Numero sorteado: " << handler[0] <<"\nNumero escolhido: "<< guess << endl;
                    system("sleep 5");
                }
            break;

            case 2:
                system("clear");
                cout << "Escolha um número de 1 a 20: ";
                cin >> guess;
                handler[0] = d20[rand()%20];
                cout << "O número sorteado foi: " << handler[0] << endl;
                if(guess == handler[0]){
                    cout << "Parabéns, você acertou!\n" << endl;
                    cout << "Numero sorteado: " << handler[0] <<"\nNumero escolhido: "<< guess << endl;
                    system("sleep 5");
                } else {
                    cout << "Que pena, você errou!" << endl;
                    cout << "Numero sorteado: " << handler[0] <<"\nNumero escolhido: "<< guess << endl;
                    system("sleep 5");
                }
            break;

            case 3:
                loop = false;
            break;

            default:
                cout << "Opção inválida!" << endl;
            break;
        }
    }

    
    return 0;
}