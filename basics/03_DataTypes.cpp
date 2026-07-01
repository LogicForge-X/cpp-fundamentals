#include <iostream>
using namespace std;

bool isEqual(int x, int y)
{
    return x == y;
}

int main()
{
    // int
    int i { 5 };
    cout << "Int: " << i << '\n';

    // double
    double d { 5.0 };
    cout << "Double: " << d << '\n';

    // float
    float f { 5.0f };
    cout << "Float: " << f << '\n';

    // char
    char char1 { 'a' };
    cout << "Char: " << char1 << '\n';

    char char2 { 121 };
    cout << "ASCII 121: " << char2 << '\n';

    // bool
    int x{}, y{};
    cout << "Enter two integers: ";
    cin >> x >> y;
    cout << boolalpha;
    cout << x << " and " << y << " are equal? ";
    cout << isEqual(x, y) << '\n';

    return 0;
}