#include "common.h"
#include "camel.h"

int doubleInt(int first) {
    return first * 2;
}

int main() {
    // Thanks to The Cherno for epic series!

    int variable = 5;

    if (variable == 1) {
        std::cout << "variable is 1" << std::endl;
    } else {
        std::cout << "variable is not 1" << std::endl;
    }

    Log("Hello World!");

    std::cout << doubleInt(5) << std::endl;

    std::cout << variable << std::endl;

    for (int i = 0; i < variable; i++) {
        std::cout << i << std::endl;
    }
}
