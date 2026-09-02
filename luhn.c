#include "luhn.h"
#include <string.h>
#include <stdbool.h>
bool luhn(const char *num) {
    int i = 0;
    int total = 0;
    int count = 0;
    int length1 = strlen(num) - 1;
    
 
    
    while (num[i] != '\0') {
        if (num[i] != ' ' && (num[i] < '0' || num[i] > '9')){
         return false; 
         } 
    i++;
    }
    for (int length = length1; length >=0; length--) {
        int digit = num[length] - '0';
        if (num[length] == ' ') {
            continue;
        }
        if (count % 2 == 1) {
            if ((digit * 2) > 9) {
                total += (digit * 2) - 9;
                count++;
                } else {
                    total += digit * 2;
                    count++;
            }
        } else {
            total += digit;
            count++;
        }
    }
        if (count <= 1) {
            return false;
        } else {
            if (total % 10 == 0) {
                return true;
            } else {
                return false;
            }
        }
    }

    // index:  0123456789tettffssent
    // string: 4539 3195 0343 6467\0
