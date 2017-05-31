#include <iostream>
#include <string>

#define NUM 999

bool isPalindrome(int x);

int main() {
    int largest = 0, a, b;
    for (int i = 1; i <= NUM; ++i) {
        for (int j = 1; j <= NUM; ++j) {
            int product = i * j;
            if(isPalindrome(product) && product > largest){
                largest = product;
                a = i;
                b = j;
                //std::cout << "pali:" << product << std::endl;
            }
        }
    }
    std::cout << "largest palindrome made from the product of two 3-digit numbers are :" << a << " and " << b << std::endl;
    return 0;
}

bool isPalindrome(int x){
    int orig = x;
    int temp = 0;
    while (x > 0) {
        temp = temp * 10 + (x % 10);
        x /= 10;
    }
    return orig == temp;
}