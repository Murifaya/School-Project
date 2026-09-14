#include <iostream>
using namespace std;

int main() 
{
    double assignment1, assignment2, assignment3;
    double midexam, finalexam;
    double asg1, asg2, asg3, midx, finx;
    double finalgrade;

    cout << "input assignment 1 grade " << endl;
    cin >> assignment1;
    cout << "input assignment 2 grade " << endl;
    cin >> assignment2;
    cout << "input assignment 3 grade " << endl;
    cin >> assignment3;
    cout << "input midterm exam grade " << endl;
    cin >> midexam;
    cout << "input final exam grade " << endl;
    cin >> finalexam;


//Rule
    if (assignment1 < 0.0 || assignment1 > 100.0 )
    {
        cout << "Invalid value, must be (0-100)" << endl;
        main();
    }
    if (assignment2 < 0 || assignment2 > 100 )
    {
        cout << "Invalid value, must be (0-100)" << endl;
        main();
    }
    if (assignment3 < 0 || assignment3 > 100 )
    {
        cout << "Invalid value, must be (0-100)" << endl;
        main();
    }
    if (midexam < 0 || midexam > 100 )
    {
        cout << "Invalid value, must be (0-100)" << endl;
        main();
    }
    if (finalexam < 0 || finalexam > 100 )
    {
        cout << "Invalid value, must be (0-100)" << endl;
        main();
    }

//Calculation
asg1 = assignment1 * 10 / 100;
asg2 = assignment2 * 10 / 100;
asg3 = assignment3 * 10 / 100;
midx = midexam * 30 / 100;
finx = finalexam * 40 / 100;
finalgrade = asg1 + asg2 + asg3 + midx + finx;
cout << "final grade: " << finalgrade << endl;

}