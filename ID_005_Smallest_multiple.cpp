#include <iostream>
#include <climits>

bool smallestUpto20(unsigned long int);

int main() {
    for (unsigned long int i = 20; i < ULONG_MAX; i+=20) {//increments of 20, so all numbers are multiples of 20
        if(smallestUpto20(i)){
            std::cout << "The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is: " << i << std::endl;
            return 0;
        }
    }
    return 1;
}

bool smallestUpto20(unsigned long int x){
    if(x % 16 != 0)//checks 2,4,8, and 16
        return false;
    if(x % 10 != 0)//checks 5 and 10
        return false;
    if(x % 12 != 0)//checks 3, 6, and 12
        return false;
    if(x % 14 != 0)//checks 7 and 14
        return false;
    if(x % 18 != 0)//checks 9 and 18
        return false;
    if(x % 11 != 0)//checks 11
        return false;
    if(x % 13 != 0)//checks 13
        return false;
    if(x % 15 != 0)//checks 15
        return false;
    if(x % 17 != 0)//checks 17
        return false;
    if(x % 19 != 0)//checks 19
        return false;
    return true;
}