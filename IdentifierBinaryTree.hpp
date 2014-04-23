#ifndef __Lab4__IdentifierBinaryTree__
#define __Lab4__IdentifierBinaryTree__

#include <iostream>

#include "Identifier.hpp"

class Token;

class IdentifierBinaryTree
{
public:
    IdentifierBinaryTree();
    ~IdentifierBinaryTree();

public:
    inline Identifier *getTreeRoot()
    {
        return mTreeRoot;
    }

    inline void setTreeRoot(Identifier *root)
    {
        mTreeRoot = root;
    }

    bool addIdentifier(Identifier *tok, int lineNum);
    void depthFirstDeleteTree(Token *tok);

private:
    Identifier *mTreeRoot;
};

#endif /* defined(__Lab4__IdentifierBinaryTree__) */
