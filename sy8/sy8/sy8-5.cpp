#include <stdio.h> 
unsigned int fun ( unsigned int w ) 
{
int z,i=1,m;
m=w;
while(m>=10)
{
m=m/10;
i=i*10;
}
int h=(int)((w/i)*i);
z=w-h;
return(z);
} 
void main() 
{
unsigned int x; 
printf ( "Enter a unsigned integer number : " ); 
scanf ( "%d", &x ); 
printf ( "The original data is : %d\n", x ); 
if ( x < 10 ) printf ("Data error !"); 
else printf ( "The result : %d\n", fun ( x ) ); 
}