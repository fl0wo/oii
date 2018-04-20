#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    freopen("party_input_1.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int N;
        cin >> N;

        long long int sol = 0;

        for (int i = 0; i < N; i++) {
            int A;
            cin >> A;

            if(A<=0)continue;

            sol += A;

        }

        cout << "Case #" << t << ": " << sol << endl;
    }
}
