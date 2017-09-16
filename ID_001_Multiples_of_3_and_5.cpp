#include <iostream>

//sum of all the multiples of 3 or 5 below ADDTO
#define ADDTO 1000

int main()
{
    int total = 0;
    for (unsigned int i = 1; i <= ADDTO / 3; i++) {//one loop looping to upper bound of summation
        total += 3 * i;	//add up all multiples of 3

        //add up all multiple of 5 (less than 1000, because 1000 is divisible by 5)
        if (i < ADDTO / 5) {
            total += 5 * i;

            //removes repeats with the summation "15*i", the LCM of 3 and 5
            //inside the "summation of 5" if statement because it runs less than "ADDTO/3" number of times
            if (i <= ADDTO / 15)
                total -= 15 * i;
        }
    }

    //print total
    std::cout << "Sum of all all the multiples of 3 or 5 below 1000 is:" << total << std::endl;
    return 0;
}

