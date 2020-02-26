#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <cmath>
#include <iterator>
#include <vector>
#include <list>
#include <utility>
#include <set>
#include <map>
#include <algorithm>
#include <typeinfo>
using namespace std;
#define ll long long
int main() {
   /*
        * Developed By : Ahmed Maher ^_6
        * The Grades like [A+, A, A-, B+, B, B-, etc..]
        * Must be uppercase ¯\_(ツ)_/¯ 
   */
// ---------------------the start of consts--------------------
    const double A_plus = 4.0;
    const double A      = 3.7;
    const double A_neg  = 3.3;
    const double B_plus = 3.0;
    const double B      = 2.8;
    const double C_plus = 2.6;
    const double C      = 2.3;
    const double D_plus = 2.0;
    const double D      = 1.7;
    const double D_neg  = 1.4;
    const double F      = 0.000;
    const double GPA    = 4.000;
// ---------------------the end of consts---------------------- 
    int i, subject;
    double ele, hours, sum=0, ho=0;
    string str;
    vector<double> v;
    cout << "Enter how many subject : ";
    cin >> subject;
    for (size_t i = 1; i <= subject; i++)
    {
        cout << "Enter the grade for subject : " << i << " and left space then Enter how many hours (maybe 2 or 3) : ";
        cin >> str >> hours;
        if (str == "A+")
        {
            ele = (hours * A_plus);
            v.push_back(ele);
        }
        else if (str == "A")
        {
            ele = (hours * A);
            v.push_back(ele);
        }
        else if (str == "A-")
        {
            ele = (hours * A_neg);
            v.push_back(ele);
        }
        else if (str == "B+")
        {
            ele = (hours * B_plus);
            v.push_back(ele);
        }
        else if (str == "B")
        {
            ele = (hours * B);
            v.push_back(ele);
        }
        else if (str == "C+")
        {
            ele = (hours * C_plus);
            v.push_back(ele);
        }
        else if (str == "C")
        {
            ele = (hours * C);
            v.push_back(ele);
        }
        else if (str == "D+")
        {
            ele = (hours * D_plus);
            v.push_back(ele);
        }
        else if (str == "D")
        {
            ele = (hours * D);
            v.push_back(ele);
        }
        else if (str == "D-")
        {
            ele = (hours * D_neg);
            v.push_back(ele);
        }
        else if (str == "F")
        {
            ele = (hours * F);
            v.push_back(ele);
        }
        ho += hours;
    }
    for (auto it : v)
        sum += it;
    //cout << "Congrats ( ͡• ͜ʖ ͡• )" << endl;
    cout << "Your GPA is : " << sum / ho << endl;

    return 0;
}
