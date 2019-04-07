#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define MAXITEM 1000
#define HEXBASE 16

int htoi(char s[], int limit);
int getString(char s[], int limit);

/* convent a hexadecimal string(including an optional 0x or 0X) to decimal 
 * Date: 2019-04-07 Sun 02:39 PM
 */
int main(int argc, const char** argv)
{
    char hex[MAXITEM];

    while (getString(hex, MAXITEM) > 0 ){
        printf("%d\n", htoi(hex, MAXITEM));
    }
    
    return 0;
}

int getString(char s[], int limit)
{
    int i, c;
    for( i = 0; i < MAXITEM - 1 && (c=getchar()) != EOF && c != '\n'; i++) {
        s[i]  = c;
    }
    if (c == '\n'){
        s[i] = '\0';
    }
    return i;
}

int htoi(char s[], int limit)
{
    int integer, len, digit;

    integer = 0;
    len = strlen(s);

    if ( s[0] == '0' && (s[1] == 'x' || s[1] == 'X')){
        for (int i = 0; i < len; i++){
            if (isdigit(s[i])){
                digit = s[i] - '0';
            } else if (s[i] >= 'a' && s[i] <= 'f'){
                digit = s[i] - 'a' + 10;
            } else if (s[i] >= 'A' && s[i] <= 'F'){
                digit = s[i] - 'A' + 10;
            }
            integer += digit * (int)pow(HEXBASE, (double)(len - i - 1));
        }
    }
    return integer;
}
