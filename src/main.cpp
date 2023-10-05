#include "include/functions.h"
#include <iostream>

/*
A Pythagorean triplet is a set of three natural numbers, a<b<c, for which a^2 + b^2 = c^2
For example 3^2 + 4^2 = 9 + 16 = 25 = 5^2
There exists exactly one Pythagorean triplet for which a + b + c = 1000. Find the product abc.
*/

int main() {
    std::cout << "There exists exactly one Pythagorean triplet for which a + b + c = 1000. The product abc is:" << '\n';
    std::cout << func::find_pythag_trip_product(1000) << '\n';

    return 0;
}