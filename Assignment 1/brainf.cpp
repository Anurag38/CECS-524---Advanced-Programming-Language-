#include <iostream>
using namespace std;

// void 

int main() {
    
    char inp[] = "++++++++[>++++[>++>+++>+++>+<<<<-]>+>+>->>+[<]<-]>>.>---.+++++++..+++.>>.<-.<.+++.------.--------.>>+.>++.";
    //char inpp[]="+++.";
    char *i;

    i = inp;

    char out[3000]={0};
    char *o;
    o = out;

    int var;

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
                // var+=1;
                // if (*o == '\0'){
                //     while (var > 0){
                //         ++i;
                //         if (*i == '[')
                //             var+=1;
                //         else if (*i == ']')
                //             var-=1;
                //     }
                // }
                var = 1;
                if (*o == '\0') {
                    do {
                        i++;
                        if      (*i == '[') var++;
                        else if (*i == ']') var--;
                    } while ( var != 0 );
                }
                break;

            case ']':
                // var-=1;
                // while(var>0){
                //     if (*i == '[')
                //         var+=1;
                //     else if (*i == ']')
                //         var-=1;
                //     --i;
                // }
                var = 0;
                do {
                    if      (*i == '[') var++;
                    else if (*i == ']') var--;
                    i--;
                    } while ( var != 0 );
                break;

        }
        i=i+1;
    }

    // return 0;
}
