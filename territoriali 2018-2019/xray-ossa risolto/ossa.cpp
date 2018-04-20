#include <iostream>
#include <cstdio>
#include <algorithm>

#define MAXN 1010

using namespace std;

int D[MAXN];

bool TUTTI_ZERO(int N,int F){
    for(int i=N;i<F;i++){
        if(D[i]!=0){
            return false;
        }
    }

    return true;
}

bool TUTTI_ZERO(int N){
    for(int i=0;i<N;i++){
        if(D[i]!=0){
            return false;
        }
    }

    return true;
}


int NEXT_NOT_ZERO(int inizio,int N){
    for(int i=inizio;i<N;i++){
        if(D[i]!=0){
            return i-1;
        }
    }

    return N;
}

int NEXT_ZERO(int inizio,int N){
    for(int i=inizio;i<N;i++){
        if(D[i]==0){
            return i;
        }
    }

    return N;
}


int main() {

    freopen("xray_input_1.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int T;
    cin >> T;

    /*

    2

    4
    1 2 3 1

    4
    100 0 1 1

    */

    for (int t = 1; t <= T; t++) {
        int N;
        cin >> N;

        int TMP;

        for (int op = 0; op < N; op++) {
            cin >> TMP;
            D[op] = TMP;

           // cout << TMP << "\n\n";
        }

        int INIZIO = 0;
        int FINE = NEXT_ZERO(INIZIO+1,N);

        bool prima = true;
        int N_ITERAZIONE= 0;


        while(!TUTTI_ZERO(N)){

           // cout << "INIZIO : " << INIZIO << " : " << "FINE : " << FINE << "\n";

            N_ITERAZIONE++;

            while(INIZIO!=FINE){
                for(int i=INIZIO;i<FINE;i++){
                    // potrei sottrarre della differenza tra il massimo e il minimo ma puzzo
                    if(D[i]!=0)
                        D[i]--;
                }

                INIZIO = FINE;
                FINE = NEXT_ZERO(INIZIO+1,N);

                if(!TUTTI_ZERO(INIZIO,FINE))
                    N_ITERAZIONE++;
            }

/*
            for(int l=0;l<N;l++){
                cout << D[l]<< " ";
            }
            cout <<"\n";
            */


           // cout << "INIZIO : " << INIZIO << " : " << "FINE : " << FINE << "\n";


            INIZIO = NEXT_NOT_ZERO(0,N);
            FINE = NEXT_ZERO(INIZIO+1,N);

            //cout << "INIZIO : " << INIZIO << " : " << "FINE : " << FINE << "\n";

            //break;

        }

        cout << "Case #" << t << ": " << N_ITERAZIONE << endl;
    }

}
