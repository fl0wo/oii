
#include <stdio.h>
#include <assert.h>

#include<iostream>

/*
2
-1 6 8
5 -1 6
*/

using namespace std;

int N, i, j;
int vote;


int main() {

    cin >> N;

    int leader = 1;

    int best = 0,lastPiuCazzuto = 1;

    long long int voti;

    for(i=0; i<N; i++) {
        voti = 1;

        for(j=0; j<=N; j++) {
            cin >> vote;
            voti+=vote;
        }

        if(voti>best){
            best = voti;
            cout << i+1<<"\n";
            lastPiuCazzuto = i+1;
        }else{
            cout << lastPiuCazzuto << "\n";
        }

    }

    return 0;
}
