#include <stdio.h>
#include <math.h>
#include <string.h>

int i,z = 0;
int x = 0;
char v[5];
char c[20];
int main() {
   char a[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
   //char b,c;
      for(i=0;i<25;i++){
   if(a[i]== 'a'){
      v[z]=a[i];
      z++;
         }
   else if (a[i]=='e'){
      v[z]=a[i];
      z++;      
   }
   else if (a[i]=='i'){
      v[z]=a[i];
      z++;
   }
   else if (a[i]=='o'){
      v[z]=a[i];
      z++;      
   }
   else if (a[i]=='u'){
      v[z]=a[i];
      z++;     
   }
   else{
      c[x]=a[i];
      x++;
   }
}
printf("\ncontant are: ");
for(x=0;x<20;x++){
printf("%c," ,c[x]);}
printf("\nVowels are: ");
for(z=0;z<5;z++){
   printf("%c, ",v[z]);
}
return 0;
}
