#include <stdio.h>
void mainl(char);
void lo();
char ch;
char g;
char t;
int o;
void mainl(char ch){
if(ch == 'a'|| ch == 'e'|| ch == 'i' || ch == 'o' || ch == 'u'){
printf("%c is a vowel",ch);
}
else if(ch == 'A'|| ch == 'E'|| ch == 'I' || ch == 'O' || ch == 'U'){
printf("%c is a vowel",ch);
}
else{
printf("%c is a constant,g",ch);
};
lo();
};



int main(){
printf("\nEnter a letter: ");
scanf(" %c",&ch);
mainl(ch);
return 0;
};

void lo(){
printf("\ncontinue? y for yes ");
scanf(" %c",&t);
if(t == 'y'|| t == 'Y'){
main();
}
else
	while(0){
		break;}
	
}
