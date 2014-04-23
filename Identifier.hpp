
#ifndef _IDENTIFIER_HPP
#define _IDENTIFIER_HPP

//! Header declarations
#include "Token.hpp"

//! Class declarations.

//! Identifier.
/*!
 * \brief A more elaborate class description.
 */
class Identifier : public Token
{
public:
    //! Constructor.
    /*!
     * \brief A more elaborate description of the constructor.
     */
    explicit Identifier();

    //! Destructor.
    /*!
     * \brief A more elaborate description of the destructor.
     */
    ~Identifier();

    /*!
     * \brief getCode
     * \return
     */
    TokenCode getCode();
};

#endif // _IDENTIFIER_HPP
