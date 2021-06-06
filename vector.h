#include <string>
#include <iostream>
///vector declaration
class vector{
private:
    string* tab;
    int capacity;
    int size;
public:
    vector(int, int, string);
    vector(vector&);
    ~vector();
    //----------------------------------------------
    void add(string);
    inline int getSize() const;
    void resize(int);
    inline void clear();
    void insert(int, string);
    void erase(int);
    //-----------------------------------------------
    string& operator[](int n);
    const string& operator[](int n) const;
    vector& operator=(const vector& V);

    operator bool() const;
    bool operator!() const;
    //-----------------------------------------------------------------
    friend ostream & operator << (ostream &out, const vector &c);
    friend istream & operator >> (istream &in,  vector &c);

};
///vector implementation
vector::vector(int a = 4, int b = 0, string c = "") :capacity(a), size(b) {
    tab = new string[a];
    for(int i = 0; i < b; ++i)
        tab[i] = c;
}
vector::vector(vector& a) :capacity(a.capacity), size(a.size) {
    tab = new string[capacity];
    for(int i = 0; i < size; ++i)
        tab[i] = a.tab[i];
}
vector::~vector() {
    delete[] tab;
}
void vector::add(string x) {
    int t = size;
    if (size == capacity) {
        string* Tab = new string[2 * capacity];
        for (int i = 0; i < capacity; ++i)
            Tab[i] = tab[i];
        delete[] tab;
        tab = Tab;
        capacity *= 2;
    }
    tab[t] = x;
    size = t;
    ++size;
}
inline int vector::getSize() const {
    return size;
}
void vector::resize(int s) {
    if (size == s)return;
    if (s < size) {
        size = s;
        return;
    }
    if (s > capacity) {
        int a = capacity;
        while (a < s) a *= 2;
        string* Tab = new string[a];
        for (int i = 0; i < size; ++i)
            Tab[i] = tab[i];
        delete[] tab;
        tab = Tab;
        capacity = a;
    }
    for (int i = size; i < s; ++i)
        tab[i]="";
    size = s;
    return;
}
inline void vector::clear() {
    size=0;
}
void vector::insert(int i, string x) {
    if (i > size) return;
    if (size == capacity) {
        string* Tab = new string[2 * capacity];
        capacity *= 2;
        for (int i = 0; i < size; ++i )
            Tab[i] = tab[i];
        delete[] tab;
        tab=Tab;
    }
    for (int k = size; k > i; --k)
        tab[k] = tab[k - 1];
    tab[i] = x;
    ++size;
}
void vector::erase(int i)
{
    if (i >= size)return;
    --size;
    if (size == 0) return;
    for (i; i < size; ++i)
        tab[i] = tab[i + 1];
}
string& vector::operator[](int n) {
    if (n < size) return tab[n];
    else return tab[size - 1];
}
const string& vector::operator[](int n) const {
    if(n < size) return tab[n];
    else return (tab[size - 1]);
}
vector& vector::operator=(const vector& V) {
    if (this->capacity != V.capacity) {
        delete[] tab;
        tab = new string[V.capacity];
    }
    capacity = V.capacity;
    for (int i = 0; i < V.size; ++i)
        tab[i] = V.tab[i];
    size = V.size;
    return (*this);
}
vector::operator bool() const {
    return bool(size > 0);
}
bool vector::operator!() const {
    return bool(size == 0);
}
ostream & operator << (ostream &out, const vector &c) {
    if (c.size == 0)
        return out;
    cout << c.tab[0] << " ";
    for (int i = 1; i < c.size; ++i)
        cout << c.tab[i] << " ";
    return out;
}
istream & operator >> (istream &in,  vector &c) {
    for (int i = 0; i < c.size; ++i)
        cin >> c.tab[i];
    return in;
}

