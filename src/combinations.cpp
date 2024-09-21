#include "combinations.hpp"
#include <iostream>

std::vector<long long> combinations_carmichael(const std::vector<long long> &itens, long long r) {

    std::vector<long long> chosed, path;

    if (r > 1)
        combination(itens, path, 0, r, chosed);

    return chosed;
}

void combination(const std::vector<long long> &itens, std::vector<long long> path, long long curr, long long r, std::vector<long long> &chosed) {

    if (path.size() == r)
    {   
        for (size_t i = 0; i < r; i++)
        {
            long long p = 1;

            for (size_t j = 0; j < r; j++)
                p =  p*path[j] % (path[i] - 1);

            if (p != 1)
                return;
        }

        long long p = 1;

        for (size_t i = 0; i < r; i++)
            p *= path[i];
        
        chosed.push_back(p);

        return ;
    }

    else if (itens.size() - (curr + 1) + path.size() < r)
        return;

    path.push_back(itens[curr]);

    combination(itens, path, curr + 1, r, chosed);

    path.pop_back();

    combination(itens, path, curr + 1, r, chosed);
}