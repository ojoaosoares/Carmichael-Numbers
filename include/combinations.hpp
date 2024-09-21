#ifndef COMBINATIONS_CARMICHAEL
#define COMBINATIONS_CARMICHAEL

#include <vector>

std::vector<long long> combinationsCarmichael(const std::vector<long long> &itens, long long r);

void combination(const std::vector<long long> &itens, std::vector<long long> factors, long long curr, long long r, std::vector<long long> &chosed);

bool isCarmichaelNumber(const std::vector<long long> &factors);

#endif