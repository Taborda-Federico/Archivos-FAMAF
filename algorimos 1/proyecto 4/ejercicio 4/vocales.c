#include<stdio.h>
#include<stdbool.h>





bool es_vocal(char letra){
 
if (letra == 'A'){
printf("es una vocal\n");
}else if (letra == 'E')
{
  printf("es una vocal\n");
}else if (letra == 'I')
{
   printf("es una vocal\n");
}
else if (letra == 'O')

{
printf("es una vocal\n");
}else if (letra == 'U')
{
 printf("es una vocal\n");
}

if (letra == 'a'){
printf("es una vocal\n");
}else if (letra == 'e')
{
  printf("es una vocal\n");
}else if (letra == 'i')
{
   printf("es una vocal\n");
}
else if (letra == 'o')
{
printf("es una vocal\n");
}else if (letra == 'u')
{
 printf("es una vocal\n");
}
else{
  printf("Falso no es una vocal");
}
return 0;
}




int main(){
  char n;
  printf("ingrese una letra:");
  scanf("%c", &n);
  es_vocal(n);
  return 0;
}