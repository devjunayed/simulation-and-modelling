#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int n;

    cout << "Enter the frequency: ";
    cin >> n;

    int observed[n], i, N = 0, Expected;
    float Calculation[n], Dobs = 0.00, critical;

    for(i = 0; i < n; i++){
        cout << "Enter " << i+1 << "th observed value:";
        cin >> observed[i];
        N += observed[i];
    }

    Expected = N/n;

    for(i = 0; i < n; i++){
        Calculation[i] = (float)pow((observed[i] - Expected), 2)/Expected;
        Dobs += Calculation[i];
    }

    cout << setw(10) << "SL.no";
    cout << setw(10) << "Oi";
    cout << setw(15) << "Ei";
    cout << setw(10) << "((Oi-Ei)^2)/Ei" << endl;


    for(i = 0; i < n; i++){
        cout << setw(10) << i + 1;
        cout << setw(10) << observed[i];
        cout << setw(15) << Expected;
        cout << setw(10) << setprecision(2) << Calculation[i] << endl;
    }
    cout << "----------------------------------------------------" << endl;

    cout << setw(20) << N << setw(25) << setprecision(2) << Dobs << endl;

    cout << "Enter critical value: " ;
    cin >> critical;

    if(Dobs < critical){
        cout << "Test is Accepted" << endl;
    }else{
        cout << "Test is Decline" << endl;
    }
 return 0;
}
