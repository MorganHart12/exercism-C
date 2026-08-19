#include "hamming.h"
#include <string.h>

int compute(const char *lhs, const char *rhs) {   
    int total = 0;
    int i = 0;
    
    if (strlen(lhs) != strlen(rhs)) {
        return -1;
    } else {
        while (lhs[i] != '\0') {
            if (lhs[i] != rhs[i]) {
                total ++;
                i++;
            } else {
                i++;
            }
        }
    }
            

    return total;
}
            
    
