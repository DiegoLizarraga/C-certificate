#include <iostream> 
using namespace std;

int main(int argc, char const *argv[]) 
{ 
    int num, digit, sum = 0;
     std::cout << "Enter a Number" << std::endl; 
     cin >> num; while (num > 0) 
     { digit = num % 10; 
        sum = sum + digit;
         num = num / 10; } 
     std::cout << "Sum of all digit: " << sum << std::endl; 
     return 0; 
    }