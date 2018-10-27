#include <stdio.h>
#include <assert.h>
#include<iostream>

using namespace std;

#define MAXN 100000

struct torneo {
    int giorno;
    int oraInizio;
    int oraFine;
    int prezzo;
    int guadagno;
};

int N, M;
torneo tornei[MAXN];

//int D[MAXN], S[MAXN], E[MAXN], B[MAXN], P[MAXN];

int posCurrGiorno[MAXN];

int inline getGuadagniGiorno(int dim, int guadagni, int saldo, int* mancanti, int* fatti, int dimFatti){
    int bestSaldo = saldo;
    int saldo1 = saldo;
    for(int i=0; i<dim; i++){
        saldo = saldo1;

        if(tornei[mancanti[i]].prezzo > saldo)
            continue;

        bool esegui = true;
        for(int j=0; j<dimFatti; j++){
            if((tornei[fatti[j]].oraInizio >= tornei[mancanti[i]].oraFine ||
                tornei[fatti[j]].oraFine <= tornei[mancanti[i]].oraInizio)){
            } else esegui = false;
        }

        if(esegui){
            saldo -= tornei[mancanti[i]].prezzo;

            int mancanti1[dim-1];
            int pos = 0;
            for(int j=0; j<dim; j++){
                if(j != i){
                    mancanti1[pos] = mancanti[j];
                    pos++;
                }
            }
            int fatti1[dimFatti+1];
            pos = 0;
            for(int j=0; j<dimFatti; j++){
                fatti1[pos] = fatti[j];
                pos++;
            }
            fatti1[dimFatti] = mancanti[i];

            saldo += tornei[mancanti[i]].guadagno;
            int g = getGuadagniGiorno(dim-1, guadagni, saldo, mancanti1, fatti1, dimFatti+1);

            if(g > saldo)
                saldo = g;

            if(saldo > bestSaldo)
                bestSaldo = saldo;
        }
    }

    return bestSaldo;
}
int inline getSaldoGiorno(int dim, int guadagni, int saldo){
    int bestSaldo = saldo;
    int saldo1 = saldo;
    for(int i=0; i<dim; i++){
        saldo = saldo1;
        if(tornei[posCurrGiorno[i]].prezzo <= saldo){
            saldo -= tornei[posCurrGiorno[i]].prezzo;

            int mancanti[dim-1];
            int pos = 0;
            for(int j=0; j<dim; j++){
                if(j != i){
                    mancanti[pos] = posCurrGiorno[j];
                    pos++;
                }
            }
            int fatti[1];
            pos = 0;
            fatti[0] = posCurrGiorno[i];

            saldo += tornei[posCurrGiorno[i]].guadagno;
            int s = getGuadagniGiorno(dim-1, guadagni, saldo, mancanti, fatti, 1);

            if(s > saldo)
                saldo = s;

            if(saldo > bestSaldo)
                bestSaldo = saldo;
        }
    }

    return bestSaldo;
}


int getSaldo(){
    int saldo = M;
    int currGiorno = -1;
    int dim = 0;
    for(int i=0; i<N; i++){
        if(tornei[i].giorno != currGiorno){
            saldo = getSaldoGiorno(dim, 0, saldo);
            currGiorno = tornei[i].giorno;
            dim = 0;
        }
        posCurrGiorno[dim] = i;
        dim++;
    }
    saldo = getSaldoGiorno(dim, 0, saldo);

    return saldo;
}

int main() {
    cin >> N >> M;

    for(int i=0; i<N; i++){
        cin >> tornei[i].giorno >>tornei[i].oraInizio >> tornei[i].oraFine >>  tornei[i].prezzo >> tornei[i].guadagno;
    }

    int saldo = getSaldo();

    cout << saldo;
    return 0;
}
