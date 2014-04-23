
#ifndef _STRINGLITERAL_HPP
#define _STRINGLITERAL_HPP

//! Header declarations
#include <string>
#include "Common.hpp"

//! Class declarations.

using namespace std;

//! StringLiteral.
/*!
 * \brief A more elaborate class description.
 */
class StringLiteral : public CommonLiteral
{
public:
    //! Constructor.
    /*!
     * \brief A more elaborate description of the constructor.
     */
    explicit StringLiteral(char *data);

    //! Destructor.
    /*!
     * \brief A more elaborate description of the destructor.
     */
    ~StringLiteral();

    /*!
     * \brief getType
     * \return
     */
    LiteralType getType();

private:
    string mData;
};

#endif // _STRINGLITERAL_HPP
