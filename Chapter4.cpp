#include<iostream>
#include<stdio.h>

int ChessBoard[8][8]={0};

int Next(int PosX,int PosY,int Cur){
    int Nextpos[9][9]={{0,1,2,2,1,-1,-2,-2,-1},{0,-2,-1,1,2,2,1,-1,-2}};
    int NextX=PosX+Nextpos[0][Cur],NextY=PosY+Nextpos[1][Cur];
    if ( (0>=NextX||NextX<=8) && (0>=NextY||NextY<=8) && ChessBoard[NextX][NextY]==0 ) {
        return 1;
    }
    else return 0;

    //return Nextpos[0][Cur],Nextpos[1][Cur],Cur;
};

int main() {

    int Step=1;
    int initX=0,initY=0;
    int Cur=1;
    while (Step<=64) {
        if (Next(initX,initY,Cur)==1){

        };
    }


    return 0;
}
