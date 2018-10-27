#include <stdio.h>
#include <assert.h>
#include<algorithm>
#include<iostream>

using namespace std;

#define MAXN 100000

// input data
int N, M, i;
int A[MAXN], P[MAXN], G[MAXN], E[MAXN];

int main() {

    cin >> N >> M;
    for (i=0; i<M; i++)
        cin >> E[i];
    for (i=0; i<N; i++)
        cin >> A[i] >> P[i] >> G[i];


    for (i=0; i<M; i++) {
        cout << "1 ";
    }
    cout << "\n";

    return 0;
}
