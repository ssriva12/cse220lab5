#ifndef __Lab4__Token__
#define __Lab4__Token__

#include <iostream>
#include "Common.hpp"
#include "LineNumberList.hpp"
#include "Literal.hpp"

using namespace std;

/**************
 this is a valid Pascal token.  A token must have a literal type,
 a literal value, and a token code.
 ***************/
class Token
{
public:
    Token();
    virtual ~Token();

public:
    void setCode(TokenCode newCode);
    virtual TokenCode getCode();
    CommonLiteral *getLiteral();
    void setLiteral(CommonLiteral *literl);
    void setTokenString(string s);
    string getTokenString();
    void setLeftChild(Token *tok);
    Token *getLeftChild();
    void setRightChild(Token *tok);
    Token *getRightChild();
    void addToLineNumberList(LineNumberList *listItem);
    LineNumberList *getLineNumberList();

private:
    TokenCode mCode;
    CommonLiteral *mLiteral;
    string mTokenString;
    //What variables and methods am I missing to implement a binary tree.
    Token *mLeftChild;
    Token *mRightChild;
    LineNumberList *mList;
};

#endif /* defined(__Lab4__Token__) */
