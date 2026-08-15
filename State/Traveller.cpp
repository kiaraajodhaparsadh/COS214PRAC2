// this is the context 
#include "Traveller.h"
#include <iostream>
#include <string>
#include <vector>

Traveller::Traveller(){

}
void Traveller::setState(MoveState* state){
        this->state = state;
}
        void Traveller::move(){
            state->doMove(this);
        }
