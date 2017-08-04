#include<stdio.h>
#include<ctype.h> //for isaplha() function

typedef struct conversion
{
	char a[30];
	int top;
}
  stack ;

void checkcontinuity(char exp[]);
int ismatchingpair(char left,char right);

int main(){
	char exp[30];
	printf("enter parenthesis containing parenthesis");
	//scanf
	//call check
	return 0;
}	
int ismatchingpair(char left,char right)
{
	switch(left)
	{
		case '(': 
			if(right==')')
				return 1;
			else
				return 0;
		case '{':
			if(right=='}')
				return 1;
			else 
				return 0;
		case '[':
			if(right==']')
				return 1;
			else 
				return 0;
		default:
			return 0;
	}
}

void checkcontinuity(char exp[])
{
	int i;
	char c;
	stack s;
	
	for(i=0;exp[i]!='\0';i++)
	{
		if(exp[]=='('||exp[]=='{'||exp[]=='[')
		{
		push(exp[i], &s);
	}
		else
			if(!isempty)
			{
				c.pop(&s);
				else
				return;
			}
			if(c.exp[i])==ismatchingpair);
			continue;
			else
			return;
		}
	}

		if(isempty)
		{
		
		printf("expression valid");
	}
		else
		{
		printf("expression is invalid");
	}
	
void push(stack s,char opr)
{
	s.top++;
	s.a[s.top]=opr;
}

int pop(stack s)
{
	if (s.top==-1)
	{
		printf("stack is empty\n");
		return 0;
    }
    else
    {
		char data=s.a[s.top--];
		return data;
  }
}
}



	
				
					
			
			
		
	



