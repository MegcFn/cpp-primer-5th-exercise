#include<iostream>

int main(int argc, char const *argv[])
{
    /* code */
    int sum = 0, val = 50;

    while (val<=100){
        sum += val;
        val++;
    }
    std::cout << "The sum is " << sum << std::endl;
    return 0;
}

