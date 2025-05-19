#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int opcao;
    cout << "--- MENU ---\n\n1 - Jogar\n2 - Sobre\n3 - Fim\n\nDigite o n�mero da op��o do menu: "; //Menu apresentado ao usu�rio
    cin >> opcao;
    int r;
    char und1 = '_';
    char und2 = '_';
    char und3 = '_';
    char und4 = '_';
    char und5 = '_';
    char und6 = '_';
    char L1, L2, L3, L4, L5, L6;
    char chute;
    int contAcertos = 0, contTentativas = 10;

    srand(time(NULL));
    r=rand()%10;  //Randomiza um n�mero

    switch(opcao){  //L� a op��o selecionada do menu
        case 1:
            system("cls");
            switch(r){  //Seleciona a palavra oculta
                case 0:
                    L1 = 'B';
                    L2 = 'A';
                    L3 = 'N';
                    L4 = 'A';
                    L5 = 'N';
                    L6 = 'A';
                    break;

                case 1:
                    L1 = 'F';
                    L2 = 'A';
                    L3 = 'R';
                    L4 = 'O';
                    L5 = 'F';
                    L6 = 'A';
                    break;

                case 2:
                    L1 = 'B';
                    L2 = 'E';
                    L3 = 'X';
                    L4 = 'I';
                    L5 = 'G';
                    L6 = 'A';
                    break;

                case 3:
                    L1 = 'M';
                    L2 = 'I';
                    L3 = 'M';
                    L4 = 'O';
                    L5 = 'S';
                    L6 = 'A';
                    break;

                case 4:
                    L1 = 'M';
                    L2 = 'A';
                    L3 = 'L';
                    L4 = 'E';
                    L5 = 'T';
                    L6 = 'A';
                    break;

                case 5:
                    L1 = 'S';
                    L2 = 'A';
                    L3 = 'C';
                    L4 = 'O';
                    L5 = 'L';
                    L6 = 'A';
                    break;

                case 6:
                    L1 = 'C';
                    L2 = 'A';
                    L3 = 'N';
                    L4 = 'E';
                    L5 = 'T';
                    L6 = 'A';
                    break;

                case 7:
                    L1 = 'B';
                    L2 = 'I';
                    L3 = 'R';
                    L4 = 'U';
                    L5 = 'T';
                    L6 = 'A';
                    break;

                case 8:
                    L1 = 'R';
                    L2 = 'E';
                    L3 = 'G';
                    L4 = 'A';
                    L5 = 'T';
                    L6 = 'A';
                    break;

                case 9:
                    L1 = 'J';
                    L2 = 'A';
                    L3 = 'N';
                    L4 = 'E';
                    L5 = 'L';
                    L6 = 'A';
                    break;
            }
            cout << "Tente adivinhar a palavra!\n\n\n";
            while(contAcertos < 6 && contTentativas > 0){  //Loop das tentativas feitas pelo usu�rio
                cout << und1 << " " << und2 << " " << und3 << " " << und4 << " " << und5 << " " << und6 << "\n\n";
                cout << "\nVoc� acertou " << contAcertos << " letra(s) e ainda tem " << contTentativas << " tentativas.\nDigite uma letra: ";
                cin >> chute;
                if(chute == L1 || chute == L2 || chute == L3 || chute == L4 || chute == L5 || chute == L6){
                    if(chute == L1){
                    und1 = L1;
                    contAcertos++;
                    }if(chute == L2){
                    und2 = L2;
                    contAcertos++;
                    }if(chute == L3){
                    und3 = L3;
                    contAcertos++;
                    }if(chute == L4){
                    und4 = L4;
                    contAcertos++;
                    }if(chute == L5){
                    und5 = L5;
                    contAcertos++;
                    }if(chute == L6){
                    und6 = L6;
                    contAcertos++;
                    }
                    cout << "\n\nVoc� acertou!\n\n\n";
                }else{
                    contTentativas--;
                    cout << "\n\nVoc� errou.\n\n\n";
                }
            }
            if(contTentativas == 0){  //Apresenta o resultado do jogo
                cout << "***Suas tentativas acabaram. Voc� perdeu.***\n\nVoltando ao menu. ";
                system("pause");
                system("cls");
                return main();
            }else{
                cout << "***Voc� ganhou! A palavra era " << und1 << und2 << und3 << und4 << und5 << und6 << "! Parab�ns!***\n\nVoltando ao menu. ";
                system("pause");
                system("cls");
                return main();
            }
        break;

        case 2:
            system("cls");
            cout << "Equipe:\nWillian Jose Kotlewski Kulakowski\n\nmaio/2025\n\nProfessora: Cristina Horita\nPrograma��o e Algoritmos\n\nRegras do jogo:\nUse sempre letras mai�sculas. Uma letra por vez. N�o use letras que j� foram usadas.\n\n";
            system("pause");
            system("cls");
            return main();
            break;

        case 3:
            system("cls");
            cout << "Obrigado por jogar! Volte sempre!\n";
            return 0;
            break;

        default:
            cout << "\nEssa op��o n�o est� dispon�vel. ";
            system("pause");
            system("cls");
            return main();
    }
}
