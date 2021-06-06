#include <iostream>
#include "binary_search.h"


int main() {
    int Tab [] = {0, 1, 2, 3, 4};
    std::cout << (*binary_search(Tab, 5, 0)) << std::endl;
    std::cout << (*binary_search(Tab, 5, 1)) << std::endl;
    std::cout << (*binary_search(Tab, 5, 2)) << std::endl;
    std::cout << (*binary_search(Tab, 5, 3)) << std::endl;
    std::cout << (*binary_search(Tab, 5, 4)) << std::endl;

    std::cout << (*binary_search(Tab, 5, -1)) << std::endl;
    std::cout << (*binary_search(Tab, 5, 5)) << std::endl;


    return 0;
}
