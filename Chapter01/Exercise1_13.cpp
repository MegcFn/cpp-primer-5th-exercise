#include<iostream>

int main(int argc, char const *argv[])
{
    /* code */
    int sum = 0;

    for (int val = 50; val <= 100;val++){
        sum += val;
    }
        std::cout << "The sum is " << sum << std::endl;
    return 0;
}
