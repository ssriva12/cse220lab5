#include <stdlib.h>
#include "Token.hpp"

Token::Token() : mLiteral(NULL)
               , mLeftChild(NULL)
               , mRightChild(NULL)
               , mList(NULL)
{
}

Token::~Token()
{
    if (mList != NULL)
    {
        delete mList;
        mList = NULL;
    }

    if (mLiteral)
    {
        delete mLiteral;
        mLiteral = NULL;
    }
}
void Token::setCode(TokenCode newCode)
{
    mCode = newCode;
}
TokenCode Token::getCode()
{
    return mCode;
}

CommonLiteral *Token::getLiteral()
{
    return mLiteral;
}

void Token::setLiteral(CommonLiteral *literal)
{
    if (mLiteral)
    {
        delete mLiteral;
        mLiteral = NULL;
    }
    mLiteral = literal;
}

void Token::setTokenString(string s)
{
    mTokenString = s;
}
string Token::getTokenString()
{
    return mTokenString;
}
//What methods am I missing to implement a binary tree.
void Token::setLeftChild(Token *tok)
{
    mLeftChild = tok;
}
Token *Token::getLeftChild()
{
    return mLeftChild;
}
void Token::setRightChild(Token *tok)
{
    mRightChild = tok;
}
Token *Token::getRightChild()
{
    return mRightChild;
}
void Token::addToLineNumberList(LineNumberList *listItem)
{
    if (mList == NULL)
    {
        mList = listItem;
    }
    else
    {
        LineNumberList *tmp = mList;
        while (tmp->getNextLineNumber() != NULL)
        {
            tmp = tmp->getNextLineNumber();
        }
        tmp->setNextLineNumber(listItem);
    }
}
LineNumberList *Token::getLineNumberList()
{
    return mList;
}
