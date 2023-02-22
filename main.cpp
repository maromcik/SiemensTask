#include "Caesar.hpp"

int main() {
    std::cout << "Enter shift: ";
    int shift;
    std::cin >> shift;
    if (std::cin.fail()) {
        std::cout << "Not a number or out of range" << std::endl;
        return -1;
    }
    auto caesar = Caesar(shift);
    caesar.run();
    return 0;
}
