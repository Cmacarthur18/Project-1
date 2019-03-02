//
//  History.cpp
//  Project 1
//
//  Created by Chet MacArthur on 1/9/19.
//  Copyright © 2019 Chet MacArthur. All rights reserved.
//

#include "History.h"
#include <iostream>
#include "globals.h"
using namespace std;

//class Arena;
History:: History(int nRows, int nCols){
    
    m_cols = nCols;
    m_rows = nRows;
   
    for(int k= 0; k < m_rows; k++){
        for (int r = 0; r < m_cols; r++){
            Positions[k][r] = 0;
        }
    }
    
}

bool History :: record(int r, int c){
    
    
    //cout << "potition " << r << "," << c << endl;
        if( r <= 0 || c <= 0 || r > m_rows || c > m_cols)
            return false;
        else if ( r-1 > m_rows || c-1 > m_cols)
            return false;
        else {
            Positions[r-1][c-1]++;
            return true;
        }
//    }
//
//    else{
//        return false;
//        }
    
}

void History :: display() const{
    char newPos[MAXROWS][MAXCOLS];
    for (int r = 0; r < m_rows; r++)
        for (int c = 0; c < m_cols; c++)
        {
            if(Positions[r][c] == 0) newPos[r][c] = '.';
            else if(Positions[r][c] == 1)
                newPos[r][c] = 'A';
            else if(Positions[r][c] == 2)
                newPos[r][c] = 'B';
            else if(Positions[r][c] == 3)
                newPos[r][c] = 'C';
            else if(Positions[r][c] == 4)
                newPos[r][c] = 'D';
            else if(Positions[r][c] == 5)
                newPos[r][c] = 'E';
            else if(Positions[r][c] == 6)
                newPos[r][c] = 'F';
            else if(Positions[r][c] == 7)
                newPos[r][c] = 'G';
            else if(Positions[r][c] == 8)
                newPos[r][c] = 'H';
            else if(Positions[r][c] == 9)
                newPos[r][c] = 'I';
            else if(Positions[r][c] == 10)
                newPos[r][c] = 'J';
            else if(Positions[r][c] == 11)
                newPos[r][c] = 'K';
            else if(Positions[r][c] == 12)
                newPos[r][c] = 'L';
            else if(Positions[r][c] == 13)
                newPos[r][c] = 'M';
            else if(Positions[r][c] == 14)
                newPos[r][c] = 'N';
            else if(Positions[r][c] == 15)
                newPos[r][c] = 'O';
            else if(Positions[r][c] == 16)
                newPos[r][c] = 'P';
            else if(Positions[r][c] == 17)
                newPos[r][c] = 'Q';
            else if(Positions[r][c] == 18)
                newPos[r][c] = 'R';
            else if(Positions[r][c] == 19)
                newPos[r][c] = 'S';
            else if(Positions[r][c] == 20)
                newPos[r][c] = 'T';
            else if(Positions[r][c] == 21)
                newPos[r][c] = 'V';
            else if(Positions[r][c] == 22)
                newPos[r][c] = 'U';
            else if(Positions[r][c] == 23)
                newPos[r][c] = 'W';
            else if(Positions[r][c] == 24)
                newPos[r][c] = 'X';
            else if(Positions[r][c] == 25)
                newPos[r][c] = 'Y';
            else if(Positions[r][c] >= 26)
                newPos[r][c] = 'Z';
        }
    clearScreen();
    
    for (int i = 0; i < m_rows; i++)
    {
        for (int j = 0; j < m_cols; j++)
        {
            cout << newPos[i][j];
        }
        cout << endl;
    }
    cout << endl;
    cout << "Press enter to continue.";
    cin.ignore(10000, '\n');

    
    
}


