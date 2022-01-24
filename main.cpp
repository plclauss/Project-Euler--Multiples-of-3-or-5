#include <iostream>

/*
     * 1+2+3+...+n = (n(n+1))/2
     * ...why?
     *
     * KARL GAUSS' PROOF OF SUM OF CONSECUTIVE INTEGERS:
     *
     * Imagine you have a summation equation:
     * S = 1 + 2 + 3 ... + n
     * Imagine you reverse said summation:
     * S = n + (n - 1) + (n - 2) + ... + (n - (n + 1))
     *
     * Summing the two:
     * 2S = (n + 1) + (n + 1) + (n + 1) ... + (n + 1)
     * Since there are n terms, we can factor out an n.
     * 2S = n(n + 1);
     * Solving for S:
     *
     * S = (n(n + 1))/2
     *
     * Thus, instead of:
     * for (int i = 1; i < target; i++)
     * {
     *  if (...)
     *      sum+= i;
     *  }
     *  return sum;
     *
     *  Do:
     *  ...
*/

int sumOfDivisors(int divisor) {
    int limit = 999/divisor;
    return ((divisor) * (limit) * (limit + 1))/2;
}

int main() {
    std::cout << sumOfDivisors(3) + sumOfDivisors(5) << std::endl;
    return 0;
}