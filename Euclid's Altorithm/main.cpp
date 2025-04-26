#include <iostream>

int static euclid(int num1, int num2) {

    if (num1 == 0)
        return num2;

    return euclid(num2 % num1, num1);
}

int static hand(int num1, int num2) {
    std::vector<int> num1Divisors;
    std::vector<int> num2Divisors;

    for (int i = 1; i <= num1; i++) {

        if (num1 % i == 0)
            num1Divisors.push_back(i);
    }

    for (int i = 1; i <= num2; i++) {

        if (num2 % i == 0)
            num2Divisors.push_back(i);
}

int static lehmer(int num1, int num2) {
    return 0;
}

int main() {
    std::cout << "Eisig Liang - 13 Apr. 2025\n";

    std::cout << "Testing euclid:\n";
    std::cout << "GCD of 14 and 28: " << euclid(14, 28) << std::endl;
    std::cout << "GCD of 18 and 24: " << euclid(18, 24) << std::endl;
    std::cout << "GCD of 36 and 60: " << euclid(36, 60) << std::endl;

    std::cout << "Testing hand:\n";
    std::cout << "GCD of 14 and 28: " << hand(14, 28) << std::endl;
    std::cout << "GCD of 18 and 24: " << hand(18, 24) << std::endl;
    std::cout << "GCD of 36 and 60: " << hand(36, 60) << std::endl;

    std::cout << "Done!";
}