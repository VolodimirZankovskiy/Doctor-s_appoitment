#include <iostream>
#include "Hospital.h"
#include "Doctor.h"
#include "Patient.h"

using namespace std;

int main() {
    Hospital A("Chernivtsi",3,48);
    Doctor B("Ivan","Komarovskiy",10);
    Patient C("Vova","Zankovskiy",12);
    B.getDoctor();

    return 0;
}
