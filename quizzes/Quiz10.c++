/*
CS371p: Quiz #10 (5 pts)
*/

/* -----------------------------------------------------------------------
1. What is the output of the following program?
   (4 pts)

3 true
3 false
*/

#include <iostream> // cout, endl

int main () {
    using namespace std;
    cout << boolalpha;   // bool outputs as true or false

    {
    int   i  = 2;
    int*  p  = &i;
    int** pp = &p;
    int** qq = pp;
    ++**qq;
    cout << i          << " ";
    ++qq;
    cout << (pp == &p) << endl;
    }

    {
    int    i  = 2;
    int*   p  = &i;
    int**  pp = &p;
    int**& qq = pp;
    ++**qq;
    cout << i          << " ";
    ++qq;
    cout << (pp == &p) << endl;
    }

    return 0;}
