// this is the context 
#include "Traveller.h"
#include <iostream>
#include <string>
#include <vector>

Traveller::Traveller(): state(0){

}

Traveller::~Traveller() {
    delete state;
    state = 0;
}

void Traveller::setState(MoveState* newState){
      if (newState == state) return;
    delete state;
    state = newState;
}

//void Traveller::move(){
            //state->doMove(this);
       // }

    void Traveller::move() {
    if (state != 0) {
        state->doMove(this);
    }
}
