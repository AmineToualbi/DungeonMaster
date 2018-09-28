//
//  main.cpp
//  Dungeon Master
//
//  Created by TOUALBI Amine  on 18/09/2018.
//  Copyright © 2018 ToualbiApps. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include "graphicFcts.h"
#include "gameFcts.h"

int myHP = 100;



using namespace std;

int main(){
    
    printInstructions();
    while(gameOver(myHP) == false){
        checkTrap();
        checkItem();
        drawPlayer();
    }
    
    return 0;
    
    
}
