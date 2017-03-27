//file :air_habitat.cpp
#include <iostream>
#include "air_habitat.h"
using namespace std;

AirHabitat::AirHabitat(int i, int j) : Habitat(i, j) {
  content = '*';
}
AirHabitat::~AirHabitat() {
}
