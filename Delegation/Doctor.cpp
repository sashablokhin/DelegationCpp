//
//  Doctor.cpp
//  Cpp
//
//  Created by Alexander Blokhin on 24.05.16.
//  Copyright © 2016 Alexander Blokhin. All rights reserved.
//

#include "Doctor.hpp"

void Doctor::patientFeelsBad(Patient *patient) {
    printf("%s feels bad \n", patient->name);
    
    if (patient->temperature >= 37.f && patient->temperature <= 39.f) {
        patient->takePill();
    } else if (patient->temperature > 39.f) {
        patient->makeShot();
    } else {
        printf("%s should rest \n", patient->name);
    }
}

void Doctor::patientHasQuestion(Patient *patient, char *question) {
    printf("%s has a question: %s \n", patient->name, question);
}