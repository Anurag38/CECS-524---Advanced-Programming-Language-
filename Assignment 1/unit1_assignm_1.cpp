#include <iostream>
using namespace std;

void open_brac(char *inp, char *out, int var){

    if (*out == 0) {
        ++var;
        while (*inp != ']' || var != 0) {
            ++inp;
            if (*inp == '[') {
                ++var;
            }
            else if (*inp == ']') {
                --var;
            }
        }
    }
} 

void close_brac(char *inp, char *out, int var){
    if (*out != 0) {
        ++var;
        while (*inp != '[' || var != 0) {
            --inp;
            if (*inp == ']') {
                ++var;
            }
            else if (*inp == '[') {
                --var;
            }
        }
    }
}

int main() {
    
    char inp[] = "++++++++[>++++[>++>+++>+++>+<<<<-]>+>+>->>+[<]<-]>>.>---.+++++++..+++.>>.<-.<.+++.------.--------.>>+.>++.";
    char *i;

    i = inp;

    char out[3000]={0};
    char *o;
    o = out;

    int var = 0;

    while(*i){
        switch (*i){
            case '>':
                o++;
                break;

            case '<':
                o--;
                break;

            case '+':
                (*o)=(*o)+1;
                break;
            
            case '-':
                (*o)=(*o)-1;
                break;

            case '.':
                cout<<*o;
                break;

            case '[':
                open_brac(i, o, var);
                break;

            case ']':
                close_brac(i, o, var);
                break;

        }
        i=i+1;
    }

}