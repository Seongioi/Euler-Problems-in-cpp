#include <iostream>
#include <cmath>
//the number you want to
#define NUM 600851475143

bool isPrime(unsigned long int x);

int main() {
    unsigned long int largest, reduced = sqrt(NUM);
    for (unsigned long int i = reduced; i > 1; i-=1) {
        if(isPrime(i) && NUM % i == 0) {
            largest = i;
            std::cout << "the largest prime factor of the number " << NUM << " is: " << largest << std::endl;
            return 0;
        }
    }
    //code should never reach here if there is a prime factor within the max number of an unsigned long
    return 0;
}

bool isPrime(unsigned long int x){
    //Check if it's an even number
    if(x % 2 == 0 && x > 2)
        return false;
    //Fermat's little theorem to test for primes, NOTE THIS IS WRONG
    //if((unsigned long int)pow(2,x-1) % x == 1)
    //    return false;
    //Check if its a prime number by testing every number up to its square root
    for(unsigned long int i = 3; i < sqrt(x); i+= 2){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}