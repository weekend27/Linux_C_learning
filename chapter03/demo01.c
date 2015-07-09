/*
**escape:expand newline and tab into visible sequences while copying the string t to s
*/

#include<stdio.h>
#include<string.h>

main(){
	void escape(char s[],char t[]);
	char s[50],t[20];

	strcpy(t,"hello		,weekend.\nhello,c++.");
	strcpy(s,"");
	escape(s,t);
}

void escape(char s[],char t[]){
	int i, j;

	for(i = j = 0;t[i] != '\0'; i++)
		switch(t[i]){
			case '\n':
				s[j++] = '\\';
				s[j++] = 'n';
				break;
			case '\t':
				s[j++] = '\\';
				s[j++] = 't';
				break;
			default:
				s[j++] = t[i];
				break;
		}
	s[j] = '\0';

	printf("the s string is : %s\n", s);	
}