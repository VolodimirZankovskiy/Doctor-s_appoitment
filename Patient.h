

#ifndef LABAKA2_0_PATIENT_H
#define LABAKA2_0_PATIENT_H


#include <iostream>
using namespace std;


class Patient{
    string name;
    string surname;
    int age;
public:
    Patient();
    Patient(string newname);
    Patient(string newname,string newsurname);
    Patient(string newname,string newsurname, int newage);
    ~Patient(){};
};


#endif //LABAKA2_0_PATIENT_H
