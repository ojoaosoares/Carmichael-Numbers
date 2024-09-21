#include "combinations.hpp"
#include "sieve_eratosthenes.hpp"
#include <iostream>

int main() {

    long long n, d;

    std::cout << "n: ";
    std::cin >> n;

    if (n <= 0)
    {
        std::cerr << "Error: n must be positive\n";
        return 1;
    }
    
    std::cout << "d: ";
    std::cin >> d;

    if (d <= 0)
    {
        std::cerr << "Error: d must be positive\n";
        return 1;
    }

    std::vector<long long> primes = sieve_eratosthenes(n);

    std::vector<long long> carmichael_numbers = combinationsCarmichael(primes, d);

    for (long long c : carmichael_numbers)
    {
        std::cout << c << ' ';
    }

    std::cout << '\n';

    return 0;
}