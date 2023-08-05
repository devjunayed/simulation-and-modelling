#include<bits/stdc++.h>
using namespace std;


int main(){
    int  n, j;
    cout << "Enter the amount of numbers: ";
    cin >> n;

    float numbers[n], iByN[n], iMinusOneByN, Dplus[n], Dminus[n], DplusMax, DminusMax, Dobs, Dalpha;

    // Getting numbers
    for(int i = 0; i < n; i++){
        cout << "Enter number " << i+1 << " : ";
        cin >> numbers[i];
    }

    //sorting numbers ascending order
    sort(numbers, numbers + n);

    cout << "\nSorted numbers: ";
    for( float i: numbers){
        cout<< i << ", " ;
    }
    cout << "\n";


    //Finding the value of Dplus and Dminus
    for( int i = 0; i < n; i++){
        j = i + 1;
        iByN[i] = (float)j/n;
        iMinusOneByN = (float)i/n;

        Dplus[i] = iByN[i] - numbers[i];
        Dminus[i] = numbers[i] - iMinusOneByN;
    }

    cout << endl;
    cout << endl;

    //printing headers
    cout << setw(10) << "i";
    for(int i = 1; i <=n; i++){
        cout << setw(10) << i;
    }
    cout << endl;

    // printing R(i)
    cout << setw(10) << "R(i)";
    for(int i = 0; i < n; i++){
        cout << setw(10) << setprecision(2) << numbers[i];
    }
    cout << endl;

    // printing i/N
    cout << setw(10) << "i/N";
    for(int i = 0; i < n; i++){
        cout << setw(10) << setprecision(2) << numbers[i];
    }
    cout << endl;


    // printing Dplus
    cout << setw(10) << "D+";
    for(int i = 0; i < n; i++){
        cout << setw(10) << setprecision(2) << Dplus[i];
    }
    cout << endl;

    //printing Dminus
    cout << setw(10) << "D-";
    for(int i = 0; i < n; i++){
        cout << setw(10) << setprecision(2) << Dminus[i];
    }
    cout << endl;


    // finding DplusMax and DminusMax
    DplusMax = 0;
    DminusMax = 0;
    for(int i = 0; i < n; i++){
        if(DplusMax < Dplus[i]){
            DplusMax = Dplus[i];
        }
        if(DminusMax < Dminus[i]){
            DminusMax = Dminus[i];
        }
    }

    cout << "Max of D+ is: " << DplusMax << endl;
    cout << "Max of D- is: " << DminusMax << endl;

    Dobs = max(DplusMax, DminusMax);
    cout << "Observe value D is: " << Dobs << endl;

    // Getting alpha value
    cout << "Enter the tabulated value (D alpha): ";
    cin >> Dalpha;

    if(Dobs < Dalpha){
        cout << "The test is accepted" << endl;
    }else{
        cout << "The test is rejected" << endl;
    }

    return 0;
}
