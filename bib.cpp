#include<iostream>
using namespace std;
#include "bib.h"
int main()
{
    ios_base::sync_with_stdio(false);




    stack S1;
    for (int i=0; i<20; ++i) S1.push(i);
        cout << S1.top() << " ";

    if (S1.full()) cout << "tak" << endl; else cout << "nie" << endl;

    S1.resize(50);
    cout << S1.pop() << " ";
    S1.clear();

    if (S1.empty()) cout << "tak" << endl; else cout << "nie" << endl;

    for (int i=20; i<30; ++i) S1.push(i);

    cout << S1.top() << " ";

    if (S1.full()) cout << "tak" << endl; else cout << "nie" << endl;

    stack S2(100);
    for (int i=0; i<30; ++i) S2.push(i);

    for (int i=0; i<10; ++i) cout << S2.pop() << " " ;
    cout << endl;

    /// dat ³os OK
//*/
    queue Q1;
    Q1.dequeue();
    Q1.front();
    for (int i=1; i<20; ++i) {Q1.enqueue(i);}
    cout << Q1.front() << " ";

    if (Q1.full()) cout << "tak" << endl; else cout << "nie" << endl;

    for (int i=0; i<10; ++i) {
        int a = Q1.dequeue(); cout << a <<  " ";
    }
    for (int i=30; i<39; ++i) {Q1.enqueue(i); }

    if (Q1.full()) cout << "tak" << endl; else cout << "nie" << endl;
    cout << Q1.front() << " " << endl;

    queue Q2(100);
    if (Q2.empty()) cout << "tak" << endl; else cout << "nie" << endl;
    for (int i=1; i<51; ++i) {Q2.enqueue(i); }
    for (int i=0; i<10; ++i) {
        int a = Q2.dequeue(); cout << a << " ";
    }
    return 0;
}
