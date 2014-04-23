#ifndef __Lab4__Print__
#define __Lab4__Print__

#include <iostream>
#include "Common.hpp"
#include "Token.hpp"

using namespace std;

class Print
{
public:
    Print(char source_name[], char date[]);
    ~Print();

public:
    void printLine(char line[]);
    void printToken(Token *token);
    int getLineCount();
    void printTree(Token *identifier);
    void printTreeRecursive(Token *identifier);

private:
    void printPageHeader();

private:
    string mSourceFileName;
    string mCurrentDate;
    int mPageNumber;
    int mLineCount;
};

#endif /* defined(__Lab4__Print__) */
