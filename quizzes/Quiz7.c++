/*
CS371p: Quiz #7 (5 pts)
*/

/* -----------------------------------------------------------------------
1. What is the output of the following program?
   (4 pts)

g1 m1
h1 h4 m4
*/

#include <iostream>  // cout, endl
#include <stdexcept> // domain_error, range_error

using namespace std;

void f (bool b) {
    if (!b)
        throw std::domain_error("abc");
    throw std::range_error("def ghi");}

void g () {
    cout << "g1 ";
    try {
        f(false);
        cout << "g2 ";
        }
    catch (const std::range_error& e) {
        cout << "g3 ";}
    cout << "g4 ";}

void h () {
    cout << "h1 ";
    try {
        f(true);
        cout << "h2 ";
        }
    catch (const std::domain_error& e) {
        cout << "h3 ";}
    catch (const std::range_error& e) {
        cout << "h4 ";
        throw;}
    cout << "h5 ";}

int main () {
    try {
        g();
        }
    catch (const domain_error& e) {
        cout << "m1";}
    catch (const range_error& e) {
        cout << "m2";}
    cout << endl;

    try {
        h();
        }
    catch (const domain_error& e) {
        cout << "m3";}
    catch (const range_error& e) {
        cout << "m4";}
    cout << endl;
    return 0;}
