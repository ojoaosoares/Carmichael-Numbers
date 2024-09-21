#include "combinations.hpp"
#include <iostream>

std::vector<long long> combinationsCarmichael(const std::vector<long long> &itens, long long r) {

    std::vector<long long> chosed, factors;

    if (r > 1)
        combination(itens, factors, 0, r, chosed);

    return chosed;
}

void combination(const std::vector<long long> &itens, std::vector<long long> factors, long long curr, long long r, std::vector<long long> &chosed) {

    if (factors.size() == r)
    {  

        if(!isCarmichaelNumber(factors))
            return;

        long long p = 1;

        for (size_t i = 0; i < r; i++)
            p *= factors[i];
        
        chosed.push_back(p);

        return ;
    }

    else if (itens.size() - (curr + 1) + factors.size() < r)
        return;

    factors.push_back(itens[curr]);

    combination(itens, factors, curr + 1, r, chosed);

    factors.pop_back();

    combination(itens, factors, curr + 1, r, chosed);
}

bool isCarmichaelNumber(const std::vector<long long> &factors) {

    for (size_t i = 0; i < factors.size(); i++)
    {
        long long p = 1;

        for (size_t j = 0; j < factors.size(); j++)
            p =  p*factors[j] % (factors[i] - 1);

        if (p != 1)
            false;
    }

    return true;
}