//
//  Patient.cpp
//  Cpp
//
//  Created by Alexander Blokhin on 24.05.16.
//  Copyright © 2016 Alexander Blokhin. All rights reserved.
//

#include "Patient.hpp"

bool Patient::howAreYou() {
    bool iFeelGood = arc4random() % 2;
    
    if (!iFeelGood) {
        delegate->patientFeelsBad(this);
    }
    
    return iFeelGood;
}

void Patient::takePill() {
    printf("%s takes pill \n", name);
}

void Patient::makeShot() {
    printf("%s make shot \n", name);
}


/*
 signal slot:
 
bool Patient::howAreYou() {
 bool iFeelGood = arc4random() % 2;
 
 if (!iFeelGood) {
    emit patientFeelsBad(this);
 }
 
 return iFeelGood;
}
*/