//
// Created by seong on 9/16/2017.
//Work out the first ten digits of the sum of the following one-hundred 50-digit numbers. (in file ID_013_data)
//
#include <fstream>
#include <iostream>

int main(){
    //data opens file
    std::ifstream data;
    data.open("C:\\Users\\seong\\Documents\\CLion Projects\\Euler_Problems_in_cplusplus\\ID_013_data"); //edit for different paths!

    //calculates the first 12 digits of the sum (estimation)
    long long int sum = 0;
    std::string temp;
    if(data.is_open())
        while(!data.eof()){
            data >> temp;
            temp = temp.substr(0,11);   //get 11 leading digits of each number
            sum += std::stoll(temp);    //add the digit to the sum
        }

    //only print the leading 10 digits
    temp = std::to_string(sum);
    temp = temp.substr(0,10);
    std::cout << "1st 10 digits of the sum: " << temp << std::endl;

    return 0;
}
