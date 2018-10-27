
#include <stdio.h>
#include <assert.h>

// constraints
#define MAXN 1000000

// input data

#include<iostream>
#include<fstream>

using namespace std;

int N, K, i;
int T[MAXN];

int main() {
/*
    fstream in("input.txt");
    ofstream out("output.txt");
*/
    cin >> N >> K;

    for (i = 0; i < N; i++){
        cin >> T[i];
    }

    long long int ris = 0;

    long long int appoggio = 0;

    for(i=0;i<K;i++){
        ris += T[i];
    }

    appoggio = ris;



    for(i=1;i<N-K+1;i++){
        appoggio -= T[i-1];
        appoggio+=T[i+K-1];


        if(ris<appoggio)ris=appoggio;
    }

    cout << ris;

    return 0;
}
