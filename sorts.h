
void bubbleSort(int *Tab, int size) {
    int b = 1;
    while (b) {
        b = 0;
        for (int i = 0; i < size - 1; ++i)
            if (Tab[i] > Tab[i + 1]) {
                int tmp;
                tmp = Tab[i + 1];
                Tab[i + 1] =Tab[i];
                Tab[i] = tmp;
                b = 1;
            }
    }
}
void insertionSort(int *Tab, int size) {
    int minim = 0, i = 0, j = 0;
    for (i; i < size; i = i + 1) {
        minim = i;
        for (j = i; j < size; j = j + 1)
            if (Tab[j] < Tab[minim]) minim = j;
        int tmp = Tab[minim];
        Tab[minim] = Tab[i];
        Tab[i] = tmp;
    }
}
void countingSort(int *Tab, int size)
{
    int i, j;
    for (i = 0; i < size; i = i + 1) {
        int j = i;
        while (j > 0) {
            if (Tab[(j - 1)] < Tab[j]) break;
            int tmp = Tab[j - 1];
            Tab[j - 1] = Tab[j];
            Tab[j] = tmp;
            j = j - 1;
        }
    }
}
