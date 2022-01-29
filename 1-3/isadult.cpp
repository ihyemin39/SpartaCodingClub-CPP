// 사용자에게 생년월일을 입력 받고 미성년자이면 0, 성인이면 1을 출력해보아요.
#include <iostream>
#include <iomanip>

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

    cout << "You are born in " << year << ", " << month << ", " << day << endl;
    
    int thisYear = 2021;
    int isadult = (thisYear - year) >= 20;
    
    cout << "adult(1) non adult(0): " << isadult << endl;

    return 0;

}