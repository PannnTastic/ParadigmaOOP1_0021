#include <iostream>
#include <string>

using namespace std;

#include "jantung.h"
#include "manusia.h"

int main(){
    Manusia* varmanusia = new Manusia("Jono");
    delete varmanusia;
}