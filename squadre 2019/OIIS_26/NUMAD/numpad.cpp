
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include<cmath>

using namespace std;

#define MAXN 1000000

#define NN 10

#include<iostream>

int N;
char S[MAXN + 1];

int tel[4][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9},
    {-1,0,-1}
};

int posR[NN] =
{3,0,0,0,1,1,1,2,2,2};

int posC[NN] =
{1,0,1,2,0,1,2,0,1,2};


int distanza(char da,char a){

    int daPos = da-'0';
    int aPos = a-'0';

    return abs(posR[daPos]-posR[aPos]) + abs(posC[daPos]-posC[aPos]) + 1;
}

int main() {

    cin >> S;
    N = strlen(S);

    char lastPos = '0';

    long long int sum = 0;

    int i;


    for(i=0;i<N;i++){
        sum+= distanza(lastPos,S[i]);
        lastPos = S[i];
    }

    cout << sum;

    return 0;
}
