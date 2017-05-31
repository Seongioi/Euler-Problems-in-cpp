//This program finds the difference between the sum of the squares of the first "NUM" natural numbers and the square of the sum
#include <iostream>
#include <cmath>
//the upper bound of natural nymbers
#define NUM 100

int main() {
    //Triangular number squared
    int sumsq = pow(NUM * (NUM + 1)/2,2);
    //adds up each number squared
    int sqsum = 0;
    for(int i = 1; i <= NUM; i++){
        sqsum += pow(i,2);
    }
    //output
    std::cout << "The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is: "
              << sumsq - sqsum << std::endl;
    return 0;
}