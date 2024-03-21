
#ifndef LABAKA2_0_HOSPITAL_H
#define LABAKA2_0_HOSPITAL_H

#include <iostream>
using namespace std;

class Hospital {
    string location;
    int floors;
    int rooms;
public:
    Hospital();
    Hospital(string newlocation);
    Hospital(string newlocation,int newfloors);
    Hospital(string newlocation,int newfloors, int newrooms);
    ~Hospital(){};
};


#endif //LABAKA2_0_HOSPITAL_H
