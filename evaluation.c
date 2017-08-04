 #include<stdio.h>
int stack[30];
int top=-1;
void push(int x)
{
	stack[++top]=x;
}
int pop(){
int x=stack[top];
top--;
return x;	
}
int digit(char x){
if(x>47 && x<58)
return 1;
else
return 0;
}
int main()
{
	char exp[30],*s;
	int n1,n2,n3,num;
	printf("Enter the expression\n");
	scanf("%s",exp);
	s=exp;
	while(*s!='\0'){
		if(digit(*s)){
		num=*s-48;
		push(num);
		}
		else{
			switch(*s){
				case '+':
				{
					n1=pop();
					n2=pop();
					n3=n1+n2;
					push(n3);
				}
				case '-':
				{
					n1=pop();
					n2=pop();
					n3=n1-n2;
					push(n3);
				}
				case '*':
				{
					n1=pop();
					n2=pop();
					n3=n1*n2;
					push(n3);
				}
				case '/':
				{
					n1=pop();
					n2=pop();
					n3=n1/n2;
					push(n3);
				}
			}
		}
		s++;
	}
	printf("ans is %d",stack[top]);
	return 0;
}
