//
//  Patient.hpp
//  Cpp
//
//  Created by Alexander Blokhin on 24.05.16.
//  Copyright © 2016 Alexander Blokhin. All rights reserved.
//

#ifndef Patient_hpp
#define Patient_hpp

#include <stdio.h>
#include <iostream>


class PatientDelegate;

class Patient {
public:
    char *name;
    float temperature;
    
    // Объект которому делегируем решения
    PatientDelegate *delegate;
    
    bool howAreYou();
    void takePill();
    void makeShot();
};

// методы обработку которых делегируем объекту делегату
struct PatientDelegate {
    virtual void patientFeelsBad(Patient *patient) {};
    virtual void patientHasQuestion(Patient *patient, char *question) {};
};

#endif /* Patient_hpp */


/*
 signal slot:
 
 class Patient {
 public:
 char *name;
 float temperature;
 
 bool howAreYou();
 void takePill();
 void makeShot();
 
 signals: 
 void patientFeelsBad(Patient *patient);
 void patientHasQuestion(Patient *patient, char *question);
 };


*/