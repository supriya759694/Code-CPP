#include <iostream>

int xorOfEvenDivisors(int n) {
    int xorResult = 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0 && i % 2 == 0) {
            xorResult ^= i;
            if (i != n / i && (n / i) % 2 == 0) {
                xorResult ^= (n / i);
            }
        }
    }
    if (n % 2 == 0) {
        xorResult ^= n;  // Include n itself if it's even
    }
    return xorResult;
}

int main() {
    int n;
    std::cin >> n;
    int result = xorOfEvenDivisors(n);
    std::cout << result << std::endl;
    return 0;
}
