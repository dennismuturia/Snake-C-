#include <iostream>
/*
This is just a basic snake game.
Remember snake Xenxia?
Thats it. This programme will not be object oriented
*/
bool gameOver; //Setting this variable gameover  to boolean 
void setup(){
    gameOver = true;
}
void logic(){

}
void control(){

}
void draw(){

}
int main(int argc, char const *argv[])
{
    setup();
    //If game over variable is false it should initiate the other defined methods above.
    while (!gameOver){
        draw();
        control();
        logic();
    }
    return 0;
}
