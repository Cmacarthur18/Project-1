
#ifndef History_h
#define History_h
//#include "Arena.h"
#include "globals.h"

class History
{
public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;
private:
   int m_rows;
   int  m_cols;
    char Positions[MAXCOLS][MAXROWS];


};
#endif /* History_hpp */
