/*
 * Find the sum of all the primes below two million.
 */
#include <iostream>
#include <cmath>
#define NUM 2000000 //add up all primes below NUM


int main(){
    unsigned long long int total = 0;
    //make a boolean array size of NUM and set all values to true
    bool primes[NUM];
    for (int i = 0; i < NUM; ++i) {
        primes[i] = true;
    }

    //using Sieve of Eratosthenes to get primes
    int testNum;
    for (long long int j = 2; j < NUM; ++j) {
        if(primes[j]){
            for (long long int i = j * j; i < NUM; i+= j) {
                primes[i] = false;
            }
        }
    }
    //adds up all prime numbers up to two million
    for (int k = 2; k < NUM; ++k) {
        if(primes[k]){
            total += k;
        }
    }
    std::cout << "he sum of all the primes below two million is: " << total << std::endl;
    return 0;

}
