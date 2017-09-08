#include<stdio.h>
#include<ctype.h>
#define max 30
//char stack[max];
//int top=-1;
typedef struct match{
	char stack[max];
	int top=-1;
}
void push(struct match x){
	match.top++;
	match.stack[match.top]=x;
}
void pop(){
	match.top--;
}
int main(){
	printf("Enter the Expression\n");
	char exp[30],*c;
	scanf("%s",exp);
	c=exp;
	while(*c!='\0'){
		if(*c=='(' || *c=='{' || *c=='['){
		push(*c);
		}
		else if(*c==')'){
			if(match.stack[match.top]=='(')
			pop();
			else
			break;
		}
		else if(*c=='}'){
			if(match.stack[match.top]=='{')
			pop();
			else
			break;
		}
		else if(*c==']'){
			if(match.stack[match.top]=='[')
			pop();
			else
			break;
		}
		c++;
	}
	if(match.top==-1)
	printf("expression is balance");
	else
	printf("Expression is not balance");
	return 0;
}
	
