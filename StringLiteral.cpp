
#include "StringLiteral.hpp"

// Constructor && Destructor Implimentation
StringLiteral::StringLiteral(char *data)
{
    LiteralData ld;
    ld.stringData = data;
    setLiteralData(ld);
}

StringLiteral::~StringLiteral()
{
}

CommonLiteral::LiteralType StringLiteral::getType()
{
    return CommonLiteral::StringLiteral;
}

// Public Functions


// Protected Functions


// Private Functions
