#include <iostream>
#include "sorts.h"

void showTab(int* tab, int tabSize) {
    for (int i = 0; i < tabSize; ++i)   std::cout << tab[i] << " ";
    std::cout << std::endl;
}

int main() {
    int Tab [] = {4, 3, 2, 1, 0};
    int Tab2 [] = {4, 3, 2, 1, 0};
    int Tab3 [] = {4, 3, 2, 1, 0};

    bubbleSort(Tab, 5);
    insertionSort(Tab2, 5);
    countingSort(Tab3, 5);

    showTab(Tab, 5);
    showTab(Tab2, 5);
    showTab(Tab3, 5);
}
