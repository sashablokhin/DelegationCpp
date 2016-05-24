//
//  Doctor.hpp
//  Cpp
//
//  Created by Alexander Blokhin on 24.05.16.
//  Copyright © 2016 Alexander Blokhin. All rights reserved.
//

#ifndef Doctor_hpp
#define Doctor_hpp

#include <stdio.h>
#include "Patient.hpp"


class Doctor: public PatientDelegate {
    
    void patientFeelsBad(Patient *patient);
    void patientHasQuestion(Patient *patient, char *question);
    
};


#endif /* Doctor_hpp */

