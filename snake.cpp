#include <iostream>
#include <cstdlib>
#include <conio.h>//We will use this to make the snake move around or make the text move the space 
using namespace std;
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
    gameOver = false;
    dir = STOP; //The direction is set to stop so that the snake will not move until we start moving it.

    //On the code below we are centering the snake on starting the game.
    x = width / 2;
    y = height / 2;

    /*
    For the meat it should randomly appear on the map. Here is how I set it up
    */
   meatx = rand() % width;
   meaty = rand() % height;

   score = 0;
}
void logic(){

}
void control(){

}
void draw(){
    system("clear");//First we will need a clear screen. I used the code line to clear for my linux environment.
    //If on windows write system("cls")

    //Now to drawing the top wall.
    for(int i = 0; i < width+2; i++){
        cout << "#";
        
    }
    cout << endl;
    /*
    In here we will build the height
    */

    for(int i = 0; i < height; i++){
       for(int j = 0; j < width; j++){
           if(j == 0){
                cout << "#";
           }
                
            //This piece of code below is supposed to place the snakes head.
            if(i == y && j == x){
                cout << "O";
            }
                //This piece of code below is supposed to place the meat position..
            else if (i == meaty && j == meatx)
            {
                cout << "M";
            }
            //This is the space in between the two lengths. 
            else{
                cout << " ";
            }
          

            if(j == width-1)
                cout << "#"; 
           }
           cout << endl;
       }
    //Lets do the same for the bottom wall
    for(int i = 0; i < width+2; i++){
        cout << "#" ;
        
    }
    cout << endl;
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
