#include <iostream>
//finds fibonacci numbers up to "NUM"
#define NUM 4000000

void increment(int &a, int &b);

int main()
{
    int first = 1, second = 2, total = 0;
    //Calcuate all Fibonacci numbers up to "NUM"
    while (second < NUM) {
        if (second % 2 == 0) {//add to total if it's even
            total += second;
        }
        increment(first, second);
    }
    std::cout << "total of all even Fibonacci numbers up to "<< NUM <<" is: " << total << std::endl;
    return 0;
}

//Calculate the next Fibonacci number and save it to "b"
//save the previous Fibonacci number to "a"
void increment(int &a, int &b) {
    int temp = b;
    b = a + b;
    a = temp;
}