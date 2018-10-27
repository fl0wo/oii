
#include <stdio.h>
#include <assert.h>
#include<algorithm>

#define MAXN 10000

using namespace std;

#include<iostream>

/*
10 11
1 2 1 1 2 1 1 1 2 1

*/
int N, B, i;
int V[MAXN];

int main() {

    cin >> N >> B;

    long long int sum = 0;

    for(i=0; i<N; i++){
        cin >> V[i];
        sum+=V[i];
    }

    if(B>sum){
        cout << sum;
        return 0;
    }


    sort(V,V+N);

    int fine = N-1;
    int inizio = 0;

    sum = 0;

   // if(B%2==0){
        for(i=fine;sum<B; i--){
            sum+=V[i];
        }
   // }else{
     //   for(i=0;sum<B; i++){
         //   sum+=V[i];
       // }
    //}


    cout << sum;
    return 0;

/*
    for(i=0;sum<=B; i++){
        while(sum+V[fine] > B)fine--;

        cout << "posso permettermi : " << V[fine];

        while(sum+V[inizio] > B)inizio++;

        cout << "posso permettermi : " << V[inizio];

        if(sum+V[fine]>B){
            if(sum+V[inizio]>B){
                if(sum+V[inizio]<sum+V[fine]){
                    cout << sum+V[inizio]-B;return 0;
                }
            }
            cout << sum+V[fine]-B;return 0;
        }

        sum += V[fine];

        if(sum+V[inizio]>B){
            cout << sum+V[inizio]-B;return 0;
        }

        sum += V[inizio];

    }
*/


    cout << sum-B;

    return 0;
}
