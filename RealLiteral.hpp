
#ifndef _REALLITERAL_HPP
#define _REALLITERAL_HPP

//! Header declarations
#include "Common.hpp"

//! Class declarations.

//! RealLiteral.
/*!
 * \brief A more elaborate class description.
 */
class RealLiteral : public CommonLiteral
{
public:
    //! Constructor.
    /*!
     * \brief A more elaborate description of the constructor.
     */
    explicit RealLiteral(const float &data);

    //! Destructor.
    /*!
     * \brief A more elaborate description of the destructor.
     */
    ~RealLiteral();

    /*!
     * \brief getType
     * \return
     */
    LiteralType getType();

private:
    /*!
     * \brief mData
     */
    float mData;
};

#endif // _REALLITERAL_HPP
