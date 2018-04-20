#include <string>
#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

void solve(int t) {
    int N1, N2, N3, N4;
    cin >> N1 >> N2 >> N3 >> N4;

    int M;
    cin >> M;

    string F1, F2, F3, F4;
    cin >> F1 >> F2 >> F3 >> F4;

    int p1, p2, p3, p4;

    for(int i = 0;i<N1-M;i++){

        string virus = F1.substr(i,M);

        p1 = F1.find(virus);
        p2 = F2.find(virus);
        p3 = F3.find(virus);
        p4 = F4.find(virus);

        if(p1 == -1 || p2 == -1 || p3 == -1 || p4 == -1){
            continue;
        }else{
            cout << "Case #" << t << ": " << p1 << " " << p2 << " " << p3 << " " << p4 << endl;
            return;
        }
    }

    for(int i = 0;i<N2-M;i++){

        string virus = F2.substr(i,M);

        p1 = F1.find(virus);
        p2 = F2.find(virus);
        p3 = F3.find(virus);
        p4 = F4.find(virus);

        if(p1 == -1 || p2 == -1 || p3 == -1 || p4 == -1){
            continue;
        }else{

            cout << "Case #" << t << ": " << p1 << " " << p2 << " " << p3 << " " << p4 << endl;
            return;
        }
    }


        for(int i = 0;i<N3-M;i++){

        string virus = F3.substr(i,M);

        p1 = F1.find(virus);
        p2 = F2.find(virus);
        p3 = F3.find(virus);
        p4 = F4.find(virus);

        if(p1 == -1 || p2 == -1 || p3 == -1 || p4 == -1){
            continue;
        }else{
            cout << "Case #" << t << ": " << p1 << " " << p2 << " " << p3 << " " << p4 << endl;
            return;
        }
    }

    for(int i = 0;i<N4-M;i++){

        string virus = F4.substr(i,M);

        p1 = F1.find(virus);
        p2 = F2.find(virus);
        p3 = F3.find(virus);
        p4 = F4.find(virus);

        if(p1 == -1 || p2 == -1 || p3 == -1 || p4 == -1){
            continue;
        }else{
            cout << "Case #" << t << ": " << p1 << " " << p2 << " " << p3 << " " << p4 << endl;
            return;
        }
    }

    //cout << "Case #" << t << ": " << p1 << " " << p2 << " " << p3 << " " << p4 << endl;
}

int main() {

    freopen("antivirus_input_1.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int T;
    cin >> T;



    for (int t = 1; t <= T; t++) {
        solve(t);
        //cout << "uno " << "\n";
    }

}
