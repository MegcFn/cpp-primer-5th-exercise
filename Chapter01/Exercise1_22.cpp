#include<iostream>
#include"Sales_item.h"

int main()
{
    Sales_item sum_item, item;
    //sum_item need to be initialized?
    if(std::cin >> sum_item){
        while(std::cin >> item){
            sum_item += item;
        }
    }else{
        std::cout << "No data founded!" << std::endl;
    }
    std::cout << "sum of sale items: " << sum_item << std::endl;
	return 0;
}
