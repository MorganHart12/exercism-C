#include "darts.h"
#include <math.h>
#include <stdint.h>




uint8_t score(coordinate_t landing_position) {
    float distance = hypot(landing_position.x, landing_position.y);
    

    if (distance > 10.0) {
        return 0;
    }
    else if (distance > 5.0F) {
        return 1;
    }
    else if (distance > 1.0F) {
        return 5;
    } else {
        return 10;
        }
        

}