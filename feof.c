#include<stdio.h>
int main() 
{
char st[]="how are you ";
char ch[20];
FILE *fp;
fp=fopen("abc,txt?","w");
fputs(st,fp);
fclose(fp);
fp=fopen("abc.txt","r");
while(!feof(fp))
{
fscanf(fp,"%s",ch);
puts(ch);
}
fclose(fp);
return 0;
}
