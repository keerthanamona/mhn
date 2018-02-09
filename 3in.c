#include <stdio.h>

int main() {
	char b[10]={"123"};
	int i,count=0;
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]>='0'&&b[i]<='9')
		{
		    
			count=count+1;

		}
	}
	printf("%d",count);
	
	
	return 0;
}
