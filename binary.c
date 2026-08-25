#include "binary.h"
#include <string.h>
#include <math.h>

int convert(const char *input) {
    int i = 0;
    int total = 0;
    int len = strlen(input) - 1;
    
    
    
    while (input[i] != '\0') {
        if (input[i] != '0' && input[i] != '1') {
          return -1;
        }
    
        
        int digit = input[i] - '0';
        total += digit * pow(2, len);
        len--;
        i++;
        
    }
    return total;
}
