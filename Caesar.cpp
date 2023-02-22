#include "Caesar.hpp"

Caesar::Caesar(int shift) {
    this->shift = shift;
}

 int Caesar::run() {
    for (std::string line; std::getline(std::cin, line);) {
        for (char c: line) {
            std::cout << encode(c);

            // alternatively you can use the basic_encode() func, that follows the example from wikipedia more closely.
            // std::cout << basic_encode(c, offset, alphabet_size, shift);
        }
        std::cout << std::endl;
    }
    return 0;
}

char Caesar::encode(char c) {
    if (isspace(c))
        return c;
    if (isupper(c))
        offset = int('A');
    else if (islower(c))
        offset = int('a');
    else if (isdigit(c)) {
        offset = int('0');
        alphabet_size = 10;
    } else {
        std::cout << "\nEnter custom offset: ";
        unsigned char o;
        std::cin >> o;
        offset = int(o);
        std::cout << "\nEnter custom alphabet size: ";
        std::cin >> alphabet_size;
    }
    return char((int(c) - offset + shift) % alphabet_size + offset);
}

char Caesar::basic_encode(char c) {
    if (isspace(c))
        return c;
    return char((int(c) - offset + shift) % alphabet_size + offset);
}

