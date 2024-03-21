#include "Patient.h"
using namespace std;

Patient::Patient() {}
Patient::Patient(string newname) {
    name = newname;
}
Patient::Patient(string newname, string newsurname) {
    name = newname;
    surname = newsurname;
}
Patient::Patient(std::string newname, std::string newsurname, int newage) {
    name = newname;
    surname = newsurname;
    age = newage;
}