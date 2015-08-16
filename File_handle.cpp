#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<new.h>
#include<iostream.h>
#include<fstream.h>
void check(char []);
char* getword();
struct node{
char data;
struct node *its;
struct node *nxt;
};
void main()
{
	int a,b=3;
	char *str,ans[10];
	//clrscr();
	printf("*Welcome to WORD GUESSING GAME*\nInstructions: A word will be given to you\n with some characters are replaced by '_'.\nYou have to guess the word and type it:-)\n");
	str=getword();
	srand(time(NULL));	//use this outside to get different random no.
	while(b--)
	{
	a=rand() % (strlen(str)-2); //line end with \n\0 so strlen is more by 2
	//b=strlen(str);
	str[a]='_';
	//printf("%d ",a);
	}
	printf("\n");
	//printf("%s",str);
	printf("Your word is\t");
	puts(str);
	printf("\nEnter the answer\t");
	scanf("%s",ans);
	cout<<ans;
	//check(ans);
	//getch();
}

char* getword()
{
char item[10];
static char s[10];
int i;
ifstream in ("words.txt");
srand(time(NULL));
i=rand() % 11 + 1;
while(i--)
{
in>>item;
//cout<<item<<"\n";
}
//cout<<item;
strcpy(s,item);
//cout<<s;
in.close();
return (s);
}
