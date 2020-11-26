#include<iostream>

int main(int argc, char const *argv[])
{
    int val1 = 0, val2 = 0;

    std::cout << "Please insert two numbers!" << std::endl;
    std::cin >> val1 >> val2;
    if(val1>=val2){
        while(val2<=val1){
            std::cout << val2 << std::endl;
            val2++;
        }
    }
    else{
        while(val1<=val2){
            std::cout << val1 << std::endl;
            val1++;

        }
    }
    
    return 0;
}
