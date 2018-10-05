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
//#include "gameFcts.h"




using namespace std;

int main(){
    
    printInstructions();
    generateItems();
    while(true){
        drawPlayer();
        checkTrap();
        checkItem();
    }

    cout << "GAME OVER" << endl;
    
    return 0;
    
    
}
