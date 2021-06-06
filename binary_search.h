

int* binary_search(int* Tab, int size, int Value) { /// return first over or equal
    if (size < 3) {
        if ((*Tab) < Value) return Tab+1;
        return Tab;
    }

    int halfSize = size / 2;
    if (*(Tab + halfSize - 1) < Value)
        return binary_search(Tab + halfSize, size - halfSize, Value);
    else return binary_search(Tab, halfSize, Value);
}


// 0 1 2 3 4
