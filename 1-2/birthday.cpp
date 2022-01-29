#include <iostream>

int main()
{
    using namespace std;
    int year = 0;
    int month = 0;
    int day = 0;

    cout << "Year?" << endl;
    cin >> year;

    cout << "Month?" << endl;
    cin >> month;

    cout << "Day?" << endl;
    cin >> day;

    cout << "You are born in" << year << ", " << month << ", " << day << endl;

    return 0;
}