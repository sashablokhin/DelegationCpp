//
//  main.cpp
//  Delegation
//
//  Created by Alexander Blokhin on 24.05.16.
//  Copyright © 2016 Alexander Blokhin. All rights reserved.
//

#include <iostream>
#include "Doctor.hpp"

int main(int argc, const char * argv[]) {
    
    Patient *patient1 = new Patient();
    patient1->name = "Vova";
    patient1->temperature = 36.6f;
    
    Patient *patient2 = new Patient();
    patient2->name = "Petya";
    patient2->temperature = 40.2f;
    
    Patient *patient3 = new Patient();
    patient3->name = "Dima";
    patient3->temperature = 37.1f;
    
    Patient *patient4 = new Patient();
    patient4->name = "Sasha";
    patient4->temperature = 38.f;
    
    Doctor *doctor = new Doctor();
    
    patient1->delegate = doctor;
    patient2->delegate = doctor;
    patient3->delegate = doctor;
    patient4->delegate = doctor;
    
    printf("%s are you ok? %s \n", patient1->name, patient1->howAreYou() ? "Yes" : "No");
    printf("%s are you ok? %s \n", patient2->name, patient2->howAreYou() ? "Yes" : "No");
    printf("%s are you ok? %s \n", patient3->name, patient3->howAreYou() ? "Yes" : "No");
    printf("%s are you ok? %s \n", patient4->name, patient4->howAreYou() ? "Yes" : "No");
    
    return 0;
}

/*
 signal slot:
 connect(patient1, SIGNAL(patientFeelsBad(Patient *)), doctor, SLOT(patientFeelsBad(Patient *)));
 
 connect(patient2, SIGNAL(patientFeelsBad(Patient *)), doctor, SLOT(patientFeelsBad(Patient *)));
 */