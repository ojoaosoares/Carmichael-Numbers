#ifndef COMBINATIONS_CARMICHAEL
#define COMBINATIONS_CARMICHAEL

#include <vector>

std::vector<long long> combinations_carmichael(const std::vector<long long> &itens, long long r);

void combination(const std::vector<long long> &itens, std::vector<long long> path, long long curr, long long r, std::vector<long long> &chosed);

#endif