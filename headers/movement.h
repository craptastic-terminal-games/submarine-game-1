//---------------------------------------- include guard ------------------------------------------
#ifndef MOVEMENT_M
#define MOVEMENT_M
//
//---------------------------------------- headers ------------------------------------------------
#include "units.h"

//---------------------------------------- prototypes ----------------------------------------------
int moveShip(SHIP *const ship, const int new_x, const int new_y, const int new_z);
void setShipAp(SHIP *const ship);
void resetAP(SHIP *const ship);
int moveRandDirection(SHIP *const ship);
int moveSameDirection(SHIP *const ship);
int moveCompShip(SHIP *const ship, void *dec);
int moveTowards(SHIP *const ship, void *dec);
int moveTowardsX(SHIP *const ship); 
int moveTowardsY(SHIP *const ship);
int getDistance(const SHIP *const ship1,const SHIP *const ship2);
int moveAway(SHIP *const ship, void *dec);
int moveAwayX(SHIP *const ship);
int moveAwayY(SHIP *const ship);
int moveTowardsX(SHIP *const ship); 

#endif

