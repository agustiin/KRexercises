/*
Exercise 3-2. Write a function escape(s,t) that converts characters like newline and tab into
visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write a
function for the other direction as well, converting escape sequences into the real characters.
*/

#include <stdio.h>

void escape(char * s,const char * t)
{
	int i , j;
	i = j = 0;
	while (t[i]){ 
		switch (t[i]){
			case '\t' : 
					s[j++] = '\\';
					s[j] = 't';
					break;
			case '\n' : 
					s[j++] = '\\';
					s[j] = 'n';
					break;
			default : 
					s[j] = t[i]; 
					break;
	 }
		++i;
		++j;
	}
	s[j] = '\0';
}

int main(void) {
		char t[50] = "tab:	";
		char s[50];
		escape(s,t);
	  printf("t:: %s \ns(escaped):: %s \n",t,s);
	return 0;
}
