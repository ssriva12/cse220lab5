#ifndef Lab4_Scanner_h
#define Lab4_Scanner_h

#include "Common.hpp"
#include "Print.hpp"

#define CHAR_TABLE_SIZE 256

typedef enum
{
    LETTER, DIGIT, QUOTE, SPECIAL, EOF_CODE,
}
CharCode;

typedef struct
{
    char *str;
    TokenCode token_code;
} RwStruct;

class Token;

class Scanner
{
public:
    Scanner(FILE *source_file, char source_name[], char date[], Print printer);
    ~Scanner();

public:
    Token* getToken();
    int getLineNumber();

private:
    bool getSourceLine(char source_buffer[]);
    char getChar(char source_buffer[]);
    void skipBlanks(char source_buffer[]);
    void skipComment(char source_buffer[]);
    void getWord(char *str, char *token_ptr, Token **tok);
    void getNumber(char *str, char *token_ptr, Token *tok);
    void getString(char *str, char *token_ptr, Token *tok);
    void getSpecial(char *str, char *token_ptr, Token *tok);
    void downshiftWord(char word[]);
    const RwStruct *reservedWord(char *str);

private:
    /*********************
     Private Variables for Scanner
     Must be initialized in the constructor.
     *********************/
    Print mPrint;
    FILE *mSrcFile;
    char src_name[MAX_FILE_NAME_LENGTH];
    char todays_date[DATE_STRING_LENGTH];
    CharCode char_table[CHAR_TABLE_SIZE];  // The character table
    char source_line[MAX_SOURCE_LINE_LENGTH];
    char *mLinePtr;
    int line_number;
};

#endif
