// -------------
// Selection.c++
// -------------

#include <cassert>  // assert
#include <iostream> // cout, endl

int main () {
    using namespace std;
    cout << "Selection.c++" << endl;

    {
    const int i = 2;
          int j;
    if (i < 0)
        j = -1;
    else if (i > 0)
        j = 1;
    else
        j = 0;
    assert(j == 1);
    }

    {
    const int i = 2;
    const int j = (i < 0) ? -1 : (i > 0) ? 1 : 0;
    assert(j == 1);
    }

    {
    const int i = 2;
          int j = 0;
    switch (i) {
        case 0:
            j = i + 1;
            break;
        default:
            j = i;
            break;}
    assert(j == 2);
    }

    {
    int s = 0;
    if (int i = 2)
        s = i;
    else
        s = i + 1;
//  assert(i == 2); // error: 'i' was not declared in this scope
    assert(s == 2);
    }

    {
    int s = 0;
    switch (int i = 2) {
        case 0:
            s = i + 1;
            break;
        default:
            s = i;
            break;}
//  assert(i == 2);      // error: 'i' was not declared in this scope
    assert(s == 2);
    }

    cout << "Done." << endl;
    return 0;}
