#include "combinations.hpp"
#include "sieve_eratosthenes.hpp"
#include <iostream>

int main() {

    long long limit, d;
    std::cin >> limit >> d;

    std::vector<long long> primes = sieve_eratosthenes(limit);

    std::vector<long long> carmichael_numbers = combinations_carmichael(primes, d);

    for (long long c : carmichael_numbers)
    {
        std::cout << c << ' ';
    }

    std::cout << '\n';
}