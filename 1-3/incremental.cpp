#include <iostream>

int main()
{
    using namespace std;

    int watermelons = 3;
    cout << "watermelons: " << watermelons << endl;
    cout << "watermelons++ " << watermelons++ << endl;
    // ++가 뒤에 있을 때 : 지금 더하지 말고 그 다음 라인부터 1을 더한 값을 넣어라!
    cout << "watermelons: " << watermelons << endl;

    int carrots = 4;
    cout << "carrots: " << carrots << endl;
    cout << "++carrots " << ++carrots << endl;
    // ++가 앞에 있을 때 : ++를 붙이는 순간부터 1을 더한 값을 넣어라!
    cout << "carrots: " << carrots << endl;

    int strawberries = 3;
    cout << "strawberries: " << strawberries << endl;
    cout << "strawberries-- " << strawberries-- << endl;
    // --가 뒤에 있을 때 : 지금 빼지 말고 그 다음 라인부터 1을 뺀 값을 넣어라!
    cout << "strawberries: " << strawberries << endl;

    int mangos = 4;
    cout << "mangos: " << mangos << endl;
    cout << "--mangos " << --mangos << endl;
    // --가 앞에 있을 때 : --를 붙이는 순간부터 1을 뺀 값을 넣어라!
    cout << "mangos: " << mangos << endl;

    return 0;
}