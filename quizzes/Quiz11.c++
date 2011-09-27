/*
CS371p: Quiz #11 (5 pts)
*/

#include <cassert> // assert

/* -----------------------------------------------------------------------
1. Define the function plus_equal(), such that it emulates the +=
   operator.
   It MUST NOT use operator +=.
   (2 pts)
*/

int& plus_equal (int& i, int j) {
    return i = i + j;}

/* -----------------------------------------------------------------------
2. Define the function plus(), such that it emulates the + operator.
   It MUST NOT use operator += or +.
   It MUST be written in terms of plus_equal().
   (2 pts)
*/

int plus (int i, int j) {
    return plus_equal(i, j);}

int main () {
    int i = 2;
    ++plus_equal(i, 3);
    assert(i == 6);

    assert(plus(2, 3) == 5);
    return 0;}
