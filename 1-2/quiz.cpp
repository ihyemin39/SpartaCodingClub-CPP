#include <iostream>

int main()
{
    using namespace std;
    int year;
    int month;
    int day;
    

    cout << "Year?" << endl;
    cin >> year;

    cout << "Month?" << endl;
    cin >> month;

    cout << "Day?" << endl;
    cin >> day;

    cout << "You are born in" << year << ", " << month << ", " << day << endl;

    return 0;
}