
#ifndef _INTEGERLITERAL_HPP
#define _INTEGERLITERAL_HPP

//! Header declarations
#include "Common.hpp"

//! Class declarations.

//! IntegerLiteral.
/*!
 * \brief A more elaborate class description.
 */
class IntegerLiteral : public CommonLiteral
{
public:
    //! Constructor.
    /*!
     * \brief A more elaborate description of the constructor.
     */
    explicit IntegerLiteral(const int &data);

    //! Destructor.
    /*!
     * \brief A more elaborate description of the destructor.
     */
    ~IntegerLiteral();

    /*!
     * \brief getType
     * \return
     */
    LiteralType getType();

private:
    /*!
     * \brief mData
     */
    int mData;
};

#endif // _INTEGERLITERAL_HPP
