#include "combinations.hpp"
#include "sieve_eratosthenes.hpp"
#include <iostream>

int main() {

    long long n, d;
    std::cin >> n >> d;

    std::vector<long long> primes = sieve_eratosthenes(n);

    std::vector<long long> carmichael_numbers = combinationsCarmichael(primes, d);

    for (long long c : carmichael_numbers)
    {
        std::cout << c << ' ';
    }

    std::cout << '\n';
}