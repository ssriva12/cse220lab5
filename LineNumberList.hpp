#ifndef __Lab4__LineNumberList__
#define __Lab4__LineNumberList__

#include <iostream>

class LineNumberList
{
public:
    LineNumberList(const int &lineNumber = 0);
    ~LineNumberList();
    void setLineNumber(int num);
    int getLineNumber();
    void setNextLineNumber(LineNumberList *next);
    LineNumberList *getNextLineNumber();

private:
    int mLineNumber;
    LineNumberList *mNextLineNumber;
};

#endif /* defined(__Lab4__LineNumberList__) */
