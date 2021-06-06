///queue definition
class queue {
    private:
        int Size;
        int AktSize;
        int First;
        int* Tab;
    public:
        queue(int);
        ~queue();
        void enqueue(int&);
        int dequeue();
        int front();
        inline bool empty() const;
        inline bool full() const;
        inline void clear();
        void resize(int);
};
///queue implementation
queue::queue(int n=15) :Size(n), AktSize(0), First(0)   {Tab = new int[Size];}
queue::~queue() {delete[] Tab;}
void queue::enqueue(int& z) {
    if (AktSize == Size)   return;
    Tab[((First + AktSize) + 2 * Size) % Size] = z;
    ++AktSize;
}
int queue::dequeue() {
    if (AktSize == 0)  return 0;
    --AktSize;
    First = (First + 1 + 2 * Size) % Size;
    return Tab[(First - 1 + 2 * Size ) % Size];
}
int queue::front() {
    if (AktSize == 0)  return 0;
    return Tab[First];
}
inline bool queue::empty() const {return (AktSize ? 0 : 1);}
inline bool queue::full() const {return (Size - AktSize ? 0 : 1);}
inline void queue::clear() {AktSize = 0; First = 0; return;}
void queue::resize(int n)  {
    if (n < Size) return;
    int* niuTab=new int [n];
    for (int i = 0; i < Size; ++i)
        niuTab[i] = Tab[(First + i) % Size];
    delete[] Tab;
    Tab = niuTab;
    Size = n;
    First = 0;
    return;
}

///stack definition
class stack {
    private:
        int Size;
        int AktSize;
        int* Tab;
    public:
        stack(int);
        ~stack();

        void push(int&);
        int pop();
        int top();
        inline bool empty() const;
        inline bool full() const;
        inline void clear();
        void resize(int);

};

///stack implementation
stack::stack(int n = 15) :Size(n), AktSize(0) {Tab = new int[Size];}
stack::~stack() {delete[] Tab;}
void stack::push(int& z) {
    if (AktSize == Size) return;
    Tab[AktSize] = z;
    ++AktSize;
    return;
}
int stack::pop() {
   if(AktSize == 0) return 0;
    --AktSize;
    return Tab[AktSize];
}
int stack::top() {
    if(AktSize == 0) return 0;
    return Tab[AktSize - 1];
}
inline bool stack::empty() const {return (AktSize ? 0 : 1);}
inline bool stack::full() const {return (Size - AktSize ? 0 : 1);}
inline void stack::clear() {AktSize = 0; return;}
void stack::resize(int n)  {
    if (n < Size) return;
    int* niuTab=new int [n];
    for (int i = 0; i < Size; ++i)
        niuTab[i] = Tab[i];
    delete[] Tab;
    Tab = niuTab;
    Size = n;
    return;
}


//
