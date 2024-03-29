#include "Print.hpp"
#include "Token.hpp"
//#include "RealLiteral.hpp"
//#include "IntegerLiteral.hpp"
//#include "StringLiteral.hpp"

const char* const SYMBOL_STRINGS[] =
{
    "<no token>", "<IDENTIFIER>", "<NUMBER>", "<STRING>",
    "^","*","(",")","-","+","=","[","]",":",";",
    "<",">",",",".","/",":=","<=",">=","<>","..",
    "<END OF FILE>", "<ERROR>",
    "AND","ARRAY","BEGIN","CASE","CONST","DIV","DO","DOWNTO",
    "ELSE","END","FILE","FOR","FUNCTION","GOTO","IF","IN",
    "LABEL","MOD","NIL","NOT","OF","OR","PACKED","PROCEDURE",
    "PROGRAM","RECORD","REPEAT","SET","THEN","TO","TYPE","UNTIL",
    "VAR","WHILE","WITH",
};

Print::Print(char source_name[], char date[])
{
    this->mSourceFileName = string(source_name);
    this->mCurrentDate = string(date);
    this->mPageNumber = 0;
    this->mLineCount = MAX_LINES_PER_PAGE;
}
Print::~Print()
{
    
}
void Print::printLine(char line[])
{
    char save_ch = '\0';
    char *save_chp = NULL;
    
    if (++mLineCount > MAX_LINES_PER_PAGE)
    {
        printPageHeader();
        mLineCount = 1;
    }
    if (strlen(line) > MAX_PRINT_LINE_LENGTH)
    {
        save_chp = &line[MAX_PRINT_LINE_LENGTH];
    }
    if (save_chp)
    {
        save_ch = *save_chp;
        *save_chp = '\0';
    }
    printf("%s", line);
    if (save_chp)
    {
        *save_chp = save_ch;
    }
}
void Print::printPageHeader()
{
    putchar(FORM_FEED_CHAR);
    printf("Page    %d  %s  %s\n\n", ++mPageNumber, mSourceFileName.c_str(), mCurrentDate.c_str());
}
void Print::printToken(Token *token)
{
    char line[MAX_SOURCE_LINE_LENGTH + 32];
    const char *symbol_string = SYMBOL_STRINGS[token->getCode()];
    
    switch (token->getCode())
    {
        case NUMBER:
            if (token->getLiteral()->getType() == CommonLiteral::IntegerLiteral)
            {
                sprintf(line, "    >> %-16s %d (integer)\n", symbol_string, token->getLiteral()->getLiteralData());
            }
            else
            {
                sprintf(line, "    >> %-16s %g (real)\n", symbol_string, token->getLiteral()->getLiteralData());
            }
            break;
        case STRING:
            sprintf(line, "    >> %-16s %-s\n", symbol_string, token->getLiteral()->getLiteralData());
            break;
        default:
            sprintf(line, "    >> %-16s %-s\n", symbol_string, token->getTokenString().c_str());
            break;
    }
    printLine(line);
}
int Print::getLineCount()
{
    return this->mLineCount;
}
void Print::printTreeRecursive(Token *identifier)
{
    char line[MAX_SOURCE_LINE_LENGTH + 32];
    
    if (identifier->getLeftChild() != NULL)
    {
        printTreeRecursive(identifier->getLeftChild());
    }
    sprintf(line, " %-16s %-s", identifier->getTokenString().c_str(), " ");
    printLine(line);
    
    LineNumberList *list = identifier->getLineNumberList();
    while (list != NULL)
    {
        cout << list->getLineNumber() << "\t";
        list = list->getNextLineNumber();
    }
    cout << "\n";
    if (identifier->getRightChild() != NULL)
    {
        printTreeRecursive(identifier->getRightChild());
    }
}
void Print::printTree(Token *identifier)
{
    cout << "\n Cross Reference Information\n";
    cout << " Identifier \t\tLine Numbers\n";
    cout << " -----------\t\t------------\n";
    printTreeRecursive(identifier);
}
