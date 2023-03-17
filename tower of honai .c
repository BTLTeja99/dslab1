// Tower of Honai

#include<stdio.h>
void TOH(int n,char x,char y,char z)
{
if(n>0) {
TOH(n-1,x,z,y);
printf("%c to %c",x,y);
TOH(n-1,z,y,x);
}
}
int main() {
int n=3;
TOH(n,'A','B','C');
}
out put :
A to B
A to C
B to C
A to B
C to A
C to B
A to B