#include <iostream>
#include <ctype.h>

using namespace std;
int main ()
{
    char x, converted;
    cin>> x;
   converted = (x >='A' && x<='Z')? tolower(x): toupper(x);
   cout<< "converted alphabet:"<<converted;
    


return 0;
}


