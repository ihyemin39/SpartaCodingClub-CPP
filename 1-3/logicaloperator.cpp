// logicaloperator.cpp

#include <iostream>

int main()
{
    using namespace std;

    int watermelons = 2;
    
    cout << "watermelons: " << watermelons << endl;

    cout << "watermelons == 3: " << (watermelons ==3) << endl;
    cout << "!(watermelons == 3:) " << !(watermelons ==3) << endl;
    cout << "!true: " << !true << endl;
    cout << "!false: " << !false << endl;

    // true && true => true   * && -> and(둘 모두 참이어야 참!)
    // true && false => false
    // false && true => false
    // false && false => false

    // true || true => true   * || -> or(둘 중 하나만 참이면 참!)
    // true || false => false
    // false || true => false
    // false || false => false


    cout << "(false && falsue): " <<  (false && false) << endl;
    cout << "(false || true): " << (false || true) << endl;

    return 0;

}