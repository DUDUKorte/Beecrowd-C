#include <bits/stdc++.h>
using namespace std;

int main(){

    int bancos, n_reservas, devedor, credor, valor;
    int reservas_bancos[20] ={0};

    while(cin >> bancos >> n_reservas && (bancos || n_reservas)){
        int contas_vermelho = 0;

        for(int i = 0; i < n_reservas; i++){
            int tmp_reserva;
            cin >> tmp_reserva;
            reservas_bancos[i] = tmp_reserva;
        }
        
        for(int i = 0; i < bancos; i++){
            cin >> devedor >> credor >> valor;
            reservas_bancos[devedor-1] -= valor;
            reservas_bancos[credor-1] += valor;
        }

        for(int i = 0; i < n_reservas; i++){
            if(reservas_bancos[i] < 0){
                contas_vermelho++;
            }
        }

        if(contas_vermelho){
            cout << "N" << endl;
        }else{
            cout << "S" << endl;
        }

    }

    return 0;
}