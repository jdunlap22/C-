#include "Integer.h"

Integer::Integer(){ this->number = 0; }
//Integer::Integer(int temp) { this->number = temp; }
Integer::Integer(int temp): number(temp) { }
Integer::~Integer() {}

Integer::operator int() const { return number; }