#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, q;
    cin >> n >> q;

    int matrix[n][n];
    int new_matrix[n][n];

    for(int i = 0; i < n; i++){
        string linha;
        cin >> linha;
        for(int j = 0; j < n; j++){
            matrix[i][j] = linha[j] - 48;
        }
    }

    //cout << "leu matriz" << endl;

    for(int y = 0; y < q; y++){
        //cout << y << endl;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int status = matrix[i][j];
                //cout << "Matrix[" << i << "] [" << j << "] "<<"ps["<<status<<"] ";
                int vizinhas_mortas = 0;
                int vizinhas_vivas = 0;
                if(j+1 < n){
                    if(i-1 > -1){
                        if(matrix[i-1][j+1] == 1){vizinhas_vivas++;}
                        else{vizinhas_mortas++;}
                    }
                    if(i+1 < n){
                        if(matrix[i+1][j+1] == 1){vizinhas_vivas++;}
                        else{vizinhas_mortas++;}
                    }
                    if(matrix[i][j+1] == 1){vizinhas_vivas++;}
                    else{vizinhas_mortas++;}
                }
                if(j-1 > -1){
                    if(i-1 > -1){
                        if(matrix[i-1][j-1] == 1){vizinhas_vivas++;}
                        else{vizinhas_mortas++;}
                    }
                    if(i+1 < n){
                        if(matrix[i+1][j-1] == 1){vizinhas_vivas++;}
                        else{vizinhas_mortas++;}
                    }
                    if(matrix[i][j-1] == 1){vizinhas_vivas++;}
                    else{vizinhas_mortas++;}
                }
                if(i+1 < n){
                    if(matrix[i+1][j] == 1){vizinhas_vivas++;}
                    else{vizinhas_mortas++;}
                }
                if(i-1 > -1){
                    if(matrix[i-1][j] == 1){vizinhas_vivas++;}
                    else{vizinhas_mortas++;}
                }
                if(status){ //VIVA
                    if(vizinhas_vivas == 3 || vizinhas_vivas == 2){
                        // acontece nada
                        new_matrix[i][j] = matrix[i][j];
                    }else if(vizinhas_vivas < 2){
                        new_matrix[i][j] = 0;
                    }else if(vizinhas_vivas > 3){
                        new_matrix[i][j] = 0;
                    }
                }else{ // MORTA
                    if(vizinhas_vivas == 3){
                        new_matrix[i][j] = 1;
                    }else{
                        //Acontece nada
                        new_matrix[i][j] = matrix[i][j];
                    }
                }
                //cout << " STATUS["<<matrix[i][j]<<"] "<<"vivas["<<vizinhas_vivas<<"] "<<"mortas["<<vizinhas_mortas<<"]"<<endl;
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                matrix[i][j] = new_matrix[i][j];
            }
        }
    }

    //printar matriz
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matrix[i][j];
        }
        cout << endl;
    }

    return 0;
}