#include <iostream>
#include <string>


class Caesar {
private:
    int offset = int('A');
    int alphabet_size = 26;
    int shift;
    char encode(char c);
    char basic_encode(char c);
public:
    explicit Caesar(int shift);
    int run();
};