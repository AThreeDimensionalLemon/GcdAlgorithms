#include <iostream>
#include <vector>

int static euclid(int num1, int num2) {

    //Implementation of Euclid's algorithm

    if (num1 == 0)
        return num2;

    return euclid(num2 % num1, num1); //Keep finding modulos until it's 0, then return the other number
}

int static hand(int num1, int num2) {

    //Implementation of finding GCD by hand

    std::vector<int> num1Divisors;
    std::vector<int> num2Divisors;

    for (int i = 1; i <= num1; i++) { //Find all divisors for num1

        if (num1 % i == 0)
            num1Divisors.push_back(i);
    }

    for (int i = 1; i <= num2; i++) { //Do it again for num2

        if (num2 % i == 0)
            num2Divisors.push_back(i);
    }

    for (auto i = num1Divisors.rbegin(); i != num1Divisors.rend(); i++) {

        for (auto j = num2Divisors.rbegin(); j != num2Divisors.rend(); j++) {

            if (*i == *j) //Find the divisor that matches, starting from the greatest
                return *j;
        }
    }
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