#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <windows.h> //clean the terminal window
#include <conio.h>   //to use automatic enter and sleep inbuit function
#include <string>    //exit
#include <string.h>
#include <fstream>
#include <stack> 
#include <algorithm>
using namespace std;

class Text;

class Logic{
    private:
        int AlgoType=0;
            //AlgoType 1 refers to the algorithm those work on the char conversion
            //AlgoType 2 refers to the algorithm those work on the word by word conversion
        int ResReq=0;
            //ResReq{Resource required}
            //ResReq=1 (usually for algo type 1) which do char to char conversion
                //A file is available in res folder having conversion written on it
        string InputBuffer;    
    
    public:
        friend class Text;
        //algo 1 _>MORSE CODE
        char MorseCode(char IN){
            AlgoType=1;
            
        };

};

class Text{
    private:
        string AlgoName;
        string Input;
        string text;
        string Output;

    public:
        Text(){};

};

int main(){

    return 0;
}