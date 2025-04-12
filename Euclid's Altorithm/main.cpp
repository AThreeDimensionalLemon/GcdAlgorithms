#include <iostream>

int static euclid(int num1, int num2) {
    return 0;
}

int static lehmer(int num1, int num2) {
    return 0;
}

int main() {
    std::cout << "Eisig Liang - 13 Apr. 2025\n";

    std::cout << "Testing euclid:\n";
    std::cout << "GCD of 709 and 98: " << euclid(709, 98) << std::endl;
    std::cout << "GCD of 864 and 935: " << euclid(864, 935) << std::endl;
    std::cout << "GCD of 945 and 274: " << euclid(945, 274) << std::endl;

    std::cout << "Testing lehmer:\n";
    std::cout << "GCD of 709 and 98: " << lehmer(709, 98) << std::endl;
    std::cout << "GCD of 864 and 935: " << lehmer(864, 935) << std::endl;
    std::cout << "GCD of 945 and 274: " << lehmer(945, 274) << std::endl;

    std::cout << "Done!";
}