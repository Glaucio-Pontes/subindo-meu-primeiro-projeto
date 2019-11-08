#include<iostream>

using namespace std;

int main(){

    int valor;

    cout <<"----------------------------\n\n";
    cout <<"     CRIANCA ESPERANCA\n      ";
    cout <<"\n---------------------------\n";
    cout <<"  Muito obrigado por ajuda\n\n";
    cout <<"[1] para doar R$10\n";
    cout <<"[2] para doar R$25\n";
    cout <<"[3] para doar R$50\n";
    cout <<"[4] para doar outros valores\n";
    cout <<"[5] para cancelar\n\n";

    cin >>valor;

    switch(valor){
    case 1:
        valor = 10;
        cout <<"Sua doacao foi de "<<valor<<" reais, Obrigado :)\n";
        break;
    case 2:
        valor = 25;
        cout <<"Sua doacao foi de "<<valor<<" reais, Obrigado :)\n";
        break;
    case 3:
        valor = 50;
        cout <<"Sua doacao foi de "<<valor<<" reais, Obrigado :)\n";
        break;
    case 4:
        cout <<" Qual valor gostaria de doar? ";
        cin >> valor;
        cout <<"Sua doacao foi de "<<valor<<" reais, Obrigado :)\n";
        break;
    default:
        cout <<"\nOPERACAO CANCELADA...\n";
        }




return 0;
}
