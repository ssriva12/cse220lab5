

#include "IntegerLiteral.hpp"

// Constructor && Destructor Implimentation
IntegerLiteral::IntegerLiteral(const int &data)
{
    LiteralData ld;
    ld.interData = data;
    setLiteralData(ld);
}

IntegerLiteral::~IntegerLiteral()
{
}

CommonLiteral::LiteralType IntegerLiteral::getType()
{
    return CommonLiteral::IntegerLiteral;
}

// Public Functions


// Protected Functions


// Private Functions
