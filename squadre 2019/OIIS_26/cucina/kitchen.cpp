

#include <assert.h>
#include <stdio.h>
#include<iostream>

// constraints
#define MAXN 100000
#define MAXM 100000

using namespace std;

int N, M, i;
int H[MAXN], T[MAXM];

int main() {

    cin >> N >> M;

    long long int ris = 0;

    for (i = 0; i < N; i++){
        cin >> H[i];
    }
    for (i = 0; i < M; i++){
        cin >> T[i];
    }

    for (i = 0; i < N; i++){
        ris += H[i];
    }

    cout << ris << "\n";
    for (i = 0; i < N; i++) cout << 0 << " ";
    cout << "\n";
    return 0;
}
