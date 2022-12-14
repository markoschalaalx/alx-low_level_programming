#include <stdio.h>
int main( void ) 
{
  FILE *stream;
  char *p, buffer[] = "This is the line of output\n";
  int  ch;
  ch = 0;
  for( p = buffer; (ch != EOF) && (*p != '\0'); p++ )
    ch = putchar( *p ); 
}
