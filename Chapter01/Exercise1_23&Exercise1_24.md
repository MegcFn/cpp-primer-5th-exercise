## The program for exercise1.23
```cpp
#include <iostream>

#include "Sales_item.h"

int main() {
    Sales_item cur_sum, cur_item;

    if (std::cin >> cur_sum) {
        while (std::cin >> cur_item) {
            if (cur_sum.isbn() == cur_item.isbn()) {
                cur_sum += cur_item;
            } else {
                std::cout << cur_sum << std::endl;
                cur_sum = cur_item;
            }
        }
        std::cout << cur_sum << std::endl;
    } else {
        std::cout << "No data founded!" << std::endl;
        return -1;
    }
    return 0;
}

```

## The test for exercise1.24  
### test data file "infile"  
0-201-78345-x 2 20.00  
0-201-78345-y 3 23.00  
0-201-78345-y 5 23.00  
0-201-78345-z 5 10.00  
0-201-78345-z 5 10.00  
