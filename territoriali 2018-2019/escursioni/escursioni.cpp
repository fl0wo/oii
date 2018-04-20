#include <iostream>
#include <cstdio>
#include <algorithm>

#define MAXN 110

#define LEFT 0
#define TOP 1
#define RIGHT 2
#define BUTTOM 3

#define INF 2e8

#define DIREZIONI 4

using namespace std;

// LEFT TOP RIGHT BUTTOM

int PAURE[MAXN][MAXN][DIREZIONI];
int MONTAGNA[MAXN][MAXN];


int DIST(){

}

int main() {

    freopen("escursione_input_3.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int T;
    cin >> T;


    for (int t = 1; t <= T; t++) {



        int R,C;

        cin >> R >> C;

        for (int op = 0; op < R; op++) {
            for(int op1=0;op1<C;op1++){
                cin >> MONTAGNA[op][op1];
            }
        }

/*
        for (int op = 0; op < R; op++) {
            for(int op1=0;op1<C;op1++){

                int MIA_ALTEZZA = MONTAGNA[op][op1];

                if(op1-1 >=0)
                PAURE[op][op1][LEFT] = abs(MIA_ALTEZZA-MONTAGNA[op][op1-1]);
                else
                PAURE[op][op1][LEFT] = INF;

                if(op1+1 <C)
                PAURE[op][op1][RIGHT] = abs(MIA_ALTEZZA-MONTAGNA[op][op1+1]);
                else
                PAURE[op][op1][RIGHT] = INF;

                if(op+1 < R)
                PAURE[op][op1][BUTTOM] = abs(MIA_ALTEZZA-MONTAGNA[op+1][op1]);
                else
                PAURE[op][op1][BUTTOM] = INF;


                if(op-1 >= 0)
                PAURE[op][op1][TOP] =
                 abs(MIA_ALTEZZA-MONTAGNA[op-1][op1]);
                else
                PAURE[op][op1][TOP] = INF;

            }
            //cout << "\n";
        }

        int current_riga = 0;
        int current_colonna = 0;

        int incremento_riga = 0;
        int incremento_colonna = 0;

        int PAURA_MINIMA = -1;

        int NO_CICLICITA = -1;

      //  cout << MONTAGNA[R-1][C-1] << "\n";

        while(!(current_riga == R-1 && current_colonna==C-1)){

            int PAURA_MINIMA_CORRENTE;
            int TMP_NO_CICLICITA = -1;

            int X = INF;

            if(PAURE[current_riga][current_colonna][LEFT]<X && NO_CICLICITA!=LEFT ){
                X = PAURE[current_riga][current_colonna][LEFT];
                incremento_riga = 0;
                incremento_colonna = -1;
                TMP_NO_CICLICITA = RIGHT;

               //cout << "VADO A SINISTRA \n";
            }



            if(PAURE[current_riga][current_colonna][TOP]<X && NO_CICLICITA!=TOP){
                X = PAURE[current_riga][current_colonna][TOP];
                incremento_riga = -1;
                incremento_colonna = 0;
                TMP_NO_CICLICITA = BUTTOM;

              // cout << "VADO A TOP \n";
            }

            if(PAURE[current_riga][current_colonna][BUTTOM] < X && NO_CICLICITA!=BUTTOM){
                X = PAURE[current_riga][current_colonna][BUTTOM];
                incremento_riga = +1;
                incremento_colonna = 0;
                TMP_NO_CICLICITA = TOP;

               // cout << "VADO A BUTTOM \n";
            }

            if(PAURE[current_riga][current_colonna][RIGHT]<X && NO_CICLICITA!=RIGHT){
                X = PAURE[current_riga][current_colonna][RIGHT];
                incremento_riga = 0;
                incremento_colonna = +1;
                TMP_NO_CICLICITA = LEFT;

              //  cout << "VADO A DESTRA \n";
            }

            NO_CICLICITA = TMP_NO_CICLICITA;
            PAURA_MINIMA_CORRENTE = X;
            PAURA_MINIMA = max(PAURA_MINIMA,PAURA_MINIMA_CORRENTE);

            current_riga+=incremento_riga;
            current_colonna += incremento_colonna;


        }
*/

        if(R==1){
            cout << "Case #" << t << ": " << DIST() << endl;

        }


        cout << "Case #" << t << ": " << 1 << endl;
    }

}
