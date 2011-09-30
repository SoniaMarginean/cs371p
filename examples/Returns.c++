// -----------
// Returns.c++
// -----------

#include <cassert>  // assert
#include <iostream> // cout, endl

int f () {
    int i = 2;
    return i;}

int* g () {
    int j = 2;
    return &j;} // warning: address of local variable 'j' returned

int& h () {
    int k = 2;
    return k;} // warning: reference to local variable 'k' returned

char* c1 () {
    char a[] = "abc"; // 'a' is a local array
//  a = "def";        // doesn't compile
    return a;}        // warning: address of local variable 'a' returned

const char* c2 () {
    const char* a = "abc"; // 'a' is a local pointer
    a = "def";
    return a;}             // well-defined

const char* c3 () {
    return "def";}

int main () {
    using namespace std;
    cout << "Returns.c++" << endl;

    {
    int v = f();
    assert(v == 2);
    }

    {
    int* p = g();
    assert(*p == 2); // valgrind: Address 0xbef9ea24 is just below the stack ptr.
    }

    {
    int& r = h();
    assert(r == 2); // valgrind: Address 0xbef9ea24 is just below the stack ptr.
    }

    assert(c2() == c3());

    cout << "Done." << endl;
    return 0;}
