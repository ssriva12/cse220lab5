
#ifndef _LITERAL_HPP
#define _LITERAL_HPP

//! Header declarations

//! Class declarations.

//! Literal.
/*!
 * \brief A more elaborate class description.
 */

template <class T>
class Literal
{
public:
    enum LiteralType
    {
        IntegerLiteral,
        RealLiteral,
        StringLiteral
    };

    //! Constructor.
    /*!
     * \brief A more elaborate description of the constructor.
     */
    explicit Literal() {}

    //! Destructor.
    /*!
     * \brief A more elaborate description of the destructor.
     */
    virtual ~Literal() {}

    /*!
     * \brief getType
     * \return
     */
    virtual LiteralType getType() = 0;

    /*!
     * \brief Get literal data.
     */
    inline const T &getLiteralData() const
    {
        return mData;
    }

    /*!
     * \brief Set literal data.
     */
    inline void setLiteralData(const T &data)
    {
        mData = data;
    }

private:
    /*!
     * \brief mData
     */
    T mData;
};

#endif // _LITERAL_HPP
