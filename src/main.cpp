#include <iostream>
#include "front/lexer/lexer.h"
#include <fstream>
using namespace std;
int main() {
    fstream fd;
    fd.open("a.x", ios::in);
    Token token;
    Lexer lexer = Lexer(fd);
    for(int i=0;i<10;i++) {
        token = lexer.nextToken();
        cout << "line: " << token.line() << "\tvalue: " << token.val() << endl;
    }
    return 0;
}