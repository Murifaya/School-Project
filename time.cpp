#include <iostream>
using namespace std;

int main() 
{
    // H = Hour, M = Minute, S= Second
    int H1, M1, S1;
    int H2, M2, S2;
    int time = 0;

    // here to store after difference variable
    int hours, minutes, seconds;

//T1
    cout << "T1: input Hour value " << endl;
    cin >> H1;

    cout << "T1: input Minute value " << endl;
    cin >> M1;

    cout << "T1: input Second value " << endl;
    cin >> S1;

    cout << "T1 = "<< H1 << " Hours " << M1 << " Minutes " << S1 << " Seconds" << endl;

 //T2   
    cout << "T2: input Hour value " << endl;
    cin >> H2;

    cout << "T2: input Minute value " << endl;
    cin >> M2;

    cout << "T2: input Second value " << endl;
    cin >> S2;

    cout << "T2 = "<< H2 << " Hours " << M2 << " Minutes " << S2 << " Seconds" << endl;

//operations
    if (H1 >= H2)
    {
        hours = H1 - H2;
    }
    else 
    {
        hours = H2 - H1;
    }

     if (M1 >= M2)
    {
        minutes = M1 - M2;
    }
    else 
    {
       minutes =  M2 - M1; 
    }

     if (S1 >= S2)
    {
        seconds = S1 - S2;
    }
    else 
    {
        seconds = S2 - S1; 

    }

    cout << "Time difference: " << hours << " hours " << minutes << " minutes " << seconds << " seconds";

//Rules
    if (H1 < 0 || H2 < 0)
    {
        cout << "invalid Hour value" << endl;
        main();
    }

    if (M1 < 0 || M1 > 59 || M2 < 0 || M2 > 59)
    {
        cout << "invalid Minute value" << endl;
        main();
    }

    if (S1 < 0 || S1 > 59 || S2 < 0 || S2 > 59)
    {

        cout << "invalid Second value" << endl;
        main();
    }


}