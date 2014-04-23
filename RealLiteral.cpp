
#include "RealLiteral.hpp"

// Constructor && Destructor Implimentation
RealLiteral::RealLiteral(const float &data)
{
    LiteralData ld;
    ld.realData = data;
    setLiteralData(ld);
}

RealLiteral::~RealLiteral()
{
}

CommonLiteral::LiteralType RealLiteral::getType()
{
    return CommonLiteral::RealLiteral;
}

// Public Functions


// Protected Functions


// Private Functions
