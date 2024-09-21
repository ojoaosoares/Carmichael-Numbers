# Carmichael Numbers Generator

This repository implements an algorithm to generate **Carmichael numbers** under specific conditions. The algorithm takes two inputs: an upper bound $n$, which is used by the Sieve of Eratosthenes to find a list of prime numbers, and a value $d$, which defines how many distinct prime factors the Carmichael numbers must have. The code outputs all possible Carmichael numbers under these constraints.

## What is a Carmichael Number?

A **Carmichael number** is a composite number $C$ that satisfies the condition:
  
$$ a^{C-1} \equiv 1 \ (\text{mod}\ C) $$

for all integers \( a \) that are relatively prime to \( C \). Or in a more general case:

$$ a^{C} \equiv a \ (\text{mod}\ C) $$

for all integers $a$.

These numbers are also known as **pseudoprimes** because they pass Fermat's primality test for all integers $a$, even though they are not prime.

### Properties of Carmichael Numbers:
1. Carmichael numbers are composite.
2. They have at least three distinct prime factors.
3. For a number $C$ to be Carmichael, it must satisfy **Korselt's Criterion**:
   - $C$ is square-free (it cannot be divisible by any prime squared).
   - For each prime factor $p$ of $C$, $p-1$ divides $C-1$.  

## Algorithm Details

1. **Prime Generation**:
   - The algorithm first generates all prime numbers up to $n$ using the **Sieve of Eratosthenes**. This step is crucial for finding potential factors that could form Carmichael numbers.
  
2. **Prime Combination**:
   - Once the prime numbers are generated, the algorithm creates all possible combinations of $d$ distinct primes from the list of primes. The number of possible combinations is $C(\text{{number of primes}}, d))$, although the number of Carmichael numbers is much smaller.
  
3. **Korselt's Criterion Check**:
   - For each combination of $d$ primes, the algorithm checks if their product forms a Carmichael number. This verification is done using **Korselt's Criterion**.
  
4. **Carmichael Number Output**:
   - If a combination satisfies Korselt's Criterion, the resulting product is identified as a Carmichael number and added to the output list.

## Usage

### Input

The program prompts the user to enter two integers:
- **n**: The upper limit for generating primes.
- **d**: The number of distinct prime factors a Carmichael number should have.

### Output

After entering the values for $n$ and $d$, the program calculates and outputs:
- **Carmichael Numbers**: A list of Carmichael numbers with exactly $d$ distinct prime factors, up to $n$.

## References

- Wikipedia: [Sieve of Eratosthenes](https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes)
- Wikipedia: [Carmichael number](https://en.wikipedia.org/wiki/Carmichael_number)
- ProofWiki: [Korselt's Theorem](https://proofwiki.org/wiki/Korselt%27s_Theorem)
- *Números Inteiros e Criptografia RSA*.
- Research papers on prime number generation and number theory.


