# include<stdio .h>
# include<math .h>
# include<stdlib .h>
int main()
{
int a,b,c,d, deno ;
float root1 , root2 ;
printf ("\n QUADRATIC EQUATION ");
printf ("\n Enter the values for a,b,c");
scanf ("%d%d%d" ,&a ,&b ,&c);
d = (b*b) -(4*a*c);
deno = 2*a;
if(d >=0)
{
printf ("\n Real Roots \n");
root1 = (-b+ sqrt (d ))/ deno ;
root2 = (-b- sqrt (d ))/ deno ;
printf (" ROOT1 =%f\ tROOT2 =%f",root1 , root2 );
}
else if(d ==0)
{
printf ("\n Equal Roots ");
root1 = -b/ deno ;
root2 = -b/ deno ;
printf (" ROOT1 =%f\ tROOT2 =%f",root1 , root2 );
}
else
printf ("\n Imaginary roots ");
return 0;
}
