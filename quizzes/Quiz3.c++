/*
CS371p: Quiz #3 (5 pts)
*/

/* -----------------------------------------------------------------------
1. What does the Sapir-Whorf hypothesis assert?
   [Sec. 1.2.3, Pg. 5]
   (1 pt)

It may be possible for an individual working in one language to
imagine thoughts or utter ideas that cannot in any way be translated,
or even understood by individuals operating in a different linguistic
framework.
*/

/* -----------------------------------------------------------------------
2. Many languages permit a group of objects (e.g types, functions, etc.)
   working together to be combined into a unit. What is that feature
   called in Java? In C++?
   [Sec. 2.1, Pg. 27]
   (2 pts)

packages, namespaces
*/

/* -----------------------------------------------------------------------
3. Given positive integers, b and e, let m = e / 2. If b <= m, then
   max_cycle_length(b, e) = max_cycle_length(m, e). True or False?
   [Collatz]
   (1 pt)

True

Consider b = 10, e = 100.
Then m = 50.
max_cycle_length(10, 100) = max_cycle_length(50, 100)
All the numbers between 10 and 50 can be mapped to numbers between 50 and
and 100 by one or more doublings, so none of those numbers could have a
larger cycle length.
*/
