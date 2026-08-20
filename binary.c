#include "binary.h"
#include <string.h>

int convert(const char *input) {
    int i = 0;
    int total = 0;
    int len = strlen(input) - 2;
    
    while (input[i] != '\0') {
        total += input[i]*10^len;
        len--;
        i++;
        
    }
    return total;
}