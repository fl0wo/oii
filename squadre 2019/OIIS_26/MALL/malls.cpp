
#include<algorithm>
#include <assert.h>
#include <stdio.h>

#include<iostream>

using namespace std;

#define MAXN 100000

int N, K, i;
int D[MAXN+2];

/*
5 50
17 4 36 41 44
*/

int main() {

    cin >> N >> K;
    for (i = 0; i < N; i++)cin >> D[i];

    if(N==1){
        if(K-D[0]>D[0]){
            cout << K;
        }else{
            cout << 0;
        }
        return 0;
    }

    sort(D,D+N);

    long long int ris = -1;
    int pos = 0;

    for (i = 0; i < N+1-1; i++){

        if((D[i+1]-D[i]) > ris){
           // cout << ris<<"\n";
            ris = (D[i+1]-D[i]);
            pos = D[i];
        }
    }

    if(ris%2==1){
        ris /=2;
    }else{
        ris/=2;
        ris--;
    }

    if(D[0]>ris){
        cout << 0;
    }else if(K-D[N-1]>ris){
        cout << K;
    }else{
        cout << pos+ris+1;
    }


    return 0;
}
