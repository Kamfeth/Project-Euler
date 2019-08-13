#include <iostream>

int main() {
    int a = 1;
    int b = 2;
    int sum = 2;
    while (b <= 4000000) {
        b += a;
        a = b - a;
        if (b % 2 == 0)
            sum += b;
    }
    std::cout << sum;
}
