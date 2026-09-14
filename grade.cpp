
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    double course1, course2, course3;
    double sks1, sks2, sks3, skss;
    double grade1, grade2, grade3;
    double gradexsks, finalgrade;
    string lettgrade;

    cout << "input course 1 grade (0-100) " << endl;
    cin >> course1;
    cout << "input course 1 credit (SKS 1-4) " << endl;
    cin >> sks1;
    cout << "input course 2 grade (0-100) " << endl;
    cin >> course2;
    cout << "input course 2 credit (SKS 1-4) " << endl;
    cin >> sks2;
    cout << "input course 3 grade (0-100) " << endl;
    cin >> course3;
    cout << "input course 3 credit (SKS 1-4) " << endl;
    cin >> sks3;

    if (course1 < 0 || course1 > 100 || course2 < 0 || course2 > 100 || course3 < 0 || course3 > 100)  
    {
        cout << "Invalid grade value" << endl;
        main();
    }

    if (sks1 < 0 || sks1 > 4 || sks2 < 0 || sks2 > 4 || sks3 < 0 || sks3 > 4)  
    {
        cout << "Invalid grade value" << endl;
        main();
    }

//grade1
    if (course1 <= 100 && course1 >= 80)
    {
        grade1 = 4;
    }
    else if (course1 <= 79.99 && course1 >= 77.50)
    {
        grade1 = 3.75;
    }
    else if (course1 <= 77.49 && course1 >= 75.00)
    {
        grade1 = 3.5;
    }
     else if (course1 <= 74.99 && course1 >= 72.50)
    {
        grade1 = 3.25;
    }
     else if (course1 <= 72.49 && course1 >= 70.00)
    {
        grade1 = 3;
    }
     else if (course1 <= 69.99 && course1 >= 67.50)
    {
        grade1 = 2.75;
    }
     else if (course1 <= 67.49 && course1 >= 65.00)
    {
        grade1 = 2.5;
    }
     else if (course1 <= 64.99 && course1 >= 62.50)
    {
        grade1 = 2.25;
    }
     else if (course1 <= 62.99 && course1 >= 60.00)
    {
        grade1 = 2;
    }
     else if (course1 <= 59.99 && course1 >= 57.50)
    {
        grade1 = 1.75;
    }
     else if (course1 <= 57.49 && course1 >= 55.00)
    {
        grade1 = 1.5;
    }
     else if (course1 <= 54.99 && course1 >= 52.50)
    {
        grade1 = 1.25;
    }
     else if (course1 <= 52.49 && course1 >= 50.00)
    {
        grade1 = 1;
    }
     else if (course1 < 50.00)
    {
        grade1 = 0;
    }
//grade2
    if (course2 <= 100 && course2 >= 80)
    {
        grade2 = 4;
    }
    else if (course2 <= 79.99 && course2 >= 77.50)
    {
        grade2 = 3.75;
    }
    else if (course2 <= 77.49 && course2 >= 75.00)
    {
        grade2 = 3.5;
    }
     else if (course2 <= 74.99 && course2 >= 72.50)
    {
        grade2 = 3.25;
    }
     else if (course2 <= 72.49 && course2 >= 70.00)
    {
        grade2 = 3;
    }
     else if (course2 <= 69.99 && course2 >= 67.50)
    {
        grade2 = 2.75;
    }
     else if (course2 <= 67.49 && course2 >= 65.00)
    {
        grade2 = 2.5;
    }
     else if (course2 <= 64.99 && course2 >= 62.50)
    {
        grade2 = 2.25;
    }
     else if (course2 <= 62.99 && course2 >= 60.00)
    {
        grade2 = 2;
    }
     else if (course2 <= 59.99 && course2 >= 57.50)
    {
        grade2 = 1.75;
    }
     else if (course2 <= 57.49 && course2 >= 55.00)
    {
        grade2 = 1.5;
    }
     else if (course2 <= 54.99 && course2 >= 52.50)
    {
        grade2 = 1.25;
    }
     else if (course2 <= 52.49 && course2 >= 50.00)
    {
        grade2 = 1;
    }
     else if (course2 < 50.00)
    {
        grade2 = 0;
    }
//grade3
    if (course3 <= 100 && course3 >= 80)
    {
        grade3 = 4;
    }
    else if (course3 <= 79.99 && course3 >= 77.50)
    {
        grade3 = 3.75;
    }
    else if (course3 <= 77.49 && course3 >= 75.00)
    {
        grade3 = 3.5;
    }
     else if (course3 <= 74.99 && course3 >= 72.50)
    {
        grade3 = 3.25;
    }
     else if (course3 <= 72.49 && course3 >= 70.00)
    {
        grade3 = 3;
    }
     else if (course3 <= 69.99 && course3 >= 67.50)
    {
        grade3 = 2.75;
    }
     else if (course3 <= 67.49 && course3 >= 65.00)
    {
        grade3 = 2.5;
    }
     else if (course3 <= 64.99 && course3 >= 62.50)
    {
        grade3 = 2.25;
    }
     else if (course3 <= 62.99 && course3 >= 60.00)
    {
        grade3 = 2;
    }
     else if (course3 <= 59.99 && course3 >= 57.50)
    {
        grade3 = 1.75;
    }
     else if (course3 <= 57.49 && course3 >= 55.00)
    {
        grade3 = 1.5;
    }
     else if (course3 <= 54.99 && course3 >= 52.50)
    {
        grade3 = 1.25;
    }
     else if (course3 <= 52.49 && course3 >= 50.00)
    {
        grade3 = 1;
    }
     else if (course3 < 50.00)
    {
        grade3 = 0;
    }

//calculation
    skss = sks1 + sks2 + sks3;
    gradexsks = grade1 * sks1 + grade2 * sks2 + grade3 * sks3;
    finalgrade = gradexsks / skss;

//letter grading
    if (finalgrade == 4)
    {
        lettgrade = "A";
    }
    else if (finalgrade >= 3.75 && finalgrade <= 3.99)
    {
        lettgrade = "A-";
    }
    else if (finalgrade >= 3.5 && finalgrade <= 3.74)
    {
        lettgrade = "A/B";
    }
     else if (finalgrade >= 3.25 && finalgrade <= 3.49)
    {
        lettgrade = "B+";
    }
     else if (finalgrade >= 3 && finalgrade <= 3.24)
    {
        lettgrade = "B";
    }
     else if (finalgrade >= 2.75 && finalgrade <= 2.99)
    {
        lettgrade = "B-";
    }
     else if (finalgrade >= 2.5 && finalgrade <= 2.74)
    {
        lettgrade = "B/C";
    }
     else if (finalgrade >= 2.25 && finalgrade <= 2.49)
    {
        lettgrade = "C+";
    }
     else if (finalgrade >= 2 && finalgrade <= 2.24)
    {
        lettgrade = "C";
    }
     else if (finalgrade >= 1.75 && finalgrade <= 1.99)
    {
        lettgrade = "C-";
    }
     else if (finalgrade >= 1.50 && finalgrade <= 1.76)
    {
        lettgrade = "C/D";
    }
     else if (finalgrade >= 1.25 && finalgrade <= 1.49)
    {
        lettgrade = "D+";
    }
     else if (finalgrade >= 1 && finalgrade <= 1.24)
    {
        lettgrade = "D";
    }
     else if (finalgrade >= 0 && finalgrade <= 0.99)
    {
        lettgrade = "E";
    }
    
    cout << "final grade number: " << finalgrade << endl;
    cout << "Final letter grade: " << lettgrade << endl;






}