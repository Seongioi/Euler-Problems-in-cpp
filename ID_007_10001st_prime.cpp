#include <iostream>
#include <climits>
#include <c++/cmath>

bool isPrime(unsigned long int x);

int main() {
    int num = 0, prime = 1;
    for (int i = 1; i < INT_MAX ; i+=2) {
        if(isPrime(i)){
            num++;
            prime = i;
        }
        if(num == 10001){
            std::cout << "the 10001st prime is:" << prime << std::endl;
            return 0;
        }
    }
    return 1;
}

bool isPrime(unsigned long int x){
    //Check if it's an even number
    if(x % 2 == 0 && x > 2)
        return false;
    //Check if its a prime number by testing every number up to its square root
    for(unsigned long int i = 3; i < x/2; i+=2){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}