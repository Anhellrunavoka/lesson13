#include <iostream>
using namespace std;
int function(char *mas) {
    try {
        long long res = 0, ten = 1;
        for (short i = 0; i < sizeof(mas) / sizeof(mas[0]); i++) {
            res += static_cast<long long>(mas[i]) * ten;
            ten *= 10;
        }
        if (-2147483648 > res || res > 2147483648) {
            throw - 1;
        }
        return res;
    }
    catch (int a) {
        cout << "Error";
        return a;
    }
}
int main()
{
    char mas[11];
    cin >> mas;
    cout<<function(mas);
}

