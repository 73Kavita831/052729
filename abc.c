#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 1000
int main(int argc, char *argv[])
{
if(argc!=3)
{
printf("compile : gcc leftr.c -o leftr\n");
printf("run : ./leftr \"string\" <number of rotate>\n");
return(1);
}
else{
int size_str=0,rotate_val=0,i=0;
char in_str[max];
size_str=strlen(argv[1]);
for(i = 0;i<size_str;i++)
{
in_str[i]=argv[1][i];
}
in_str[i]='\0';
rotate_val=atoi(argv[2]);
size_str=strlen(argv[1]);
int no_of_act_rotate=rotate_val%size_str;
if(no_of_act_rotate==0)
{
    printf("%s",in_str);
    return(0);
}
for(int ax=0;ax<no_of_act_rotate;ax++)
{
char temp=in_str[0];
for(int j=0;j<size_str-1;j++)
{
in_str[j]=in_str[j+1];
}
in_str[size_str-1]=temp;
}
printf("%s\n",in_str);
}
}
