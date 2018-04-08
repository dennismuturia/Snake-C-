#include <iostream>
/*
This is just a basic snake game.
Remember snake Xenxia?
Thats it. This programme will not be object oriented
*/
bool gameOver;//Setting this variable gameover  to boolean

//Setting the width and height of the area of the game 
const int width = 20; 
const int height = 20;

int x, y, meatx, meaty, score; //This variable is responsible for the position of the snake as well as the fruits as well as a score.
enum eDirection {STOP = 0, RIGHT, UP, DOWN, LEFT};//We might need  the controls to turn the snake in the different directions. Will be using enum
eDirection dir; //This will hold the direction of the snake.
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
