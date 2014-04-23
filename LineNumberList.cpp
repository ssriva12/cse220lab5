#include "LineNumberList.hpp"

LineNumberList::LineNumberList(const int &lineNumber) : mLineNumber(lineNumber)
                                                      , mNextLineNumber(NULL)
{

}
LineNumberList::~LineNumberList()
{
    if (mNextLineNumber != NULL)
    {
        delete mNextLineNumber;
    }
}
void LineNumberList::setLineNumber(int num)
{
    mLineNumber = num;
}
int LineNumberList::getLineNumber()
{
    return mLineNumber;
}
void LineNumberList::setNextLineNumber(LineNumberList *next)
{
    mNextLineNumber = next;
}
LineNumberList *LineNumberList::getNextLineNumber()
{
    return mNextLineNumber;
}
