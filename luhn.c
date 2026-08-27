#include "luhn.h"
#include <string.h>
#include <stdbool.h>
bool luhn(const char *num) {
    int i = 0;
    int total = 0;
    int length = strlen(num) - 1;
    
    if (length <= 1) {
        return false;
    }
    
    while (num[i] != '\0') {
        if (num[i] != ' ' || sizeof(num[i]) != 8){
         return false; 
         
        } 
    i++;
    }
    for (int x = length; x >= 0; x--) {
        int digit = num[x] - '0';
        if (x % 2 == 0) {
            if (num[x] * 2 >= 9) {
                total += (digit * 2) - 9;
                } else {
                    total += digit * 2;
            }
        } else {
            total += digit;
        }
    }
        return total;
    }

    // index:  0123456789tettffssent
    // string: 4539 3195 0343 6467\0

        