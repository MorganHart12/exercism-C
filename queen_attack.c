#include "queen_attack.h"
typedef enum { CAN_NOT_ATTACK, CAN_ATTACK, INVALID_POSITION } attack_status_t;

typedef struct {
   uint8_t row;
   uint8_t column;
} position_t;

attack_status_t can_attack(position_t queen_1, position_t queen_2) {
    if (queen_1.row == queen_2.row && queen_1.column == queen_2.column) {
        return INVALID_POSITION;
    }
    else if (queen_1.column > 7 || queen_2.column > 7 || queen_1.row > 7 || queen_2.row > 7 ||) {
        return INVALID_POSITION;
    }
    else if (queen_1.column < 0 || queen_2.column < 0 || queen_1.row < 0 || queen_2.row < 0 ||) {
        return INVALID_POSITION;
    }

    
    else if (queen_1.row == queen_2.row || queen_1.column == queen_2.column) {
        return CAN_ATTACK;
    else if () {
        
    } else {
        return CAN_NOT_ATTACK;
        }
        
    }
}