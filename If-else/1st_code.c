//check uppercase or lower case
#include<stdio.h>
int main()
{
    char c;
    printf("enter the charachter: ");
    scanf("%c",&c);
    if(c>='A'&&c<='Z')
    {
        printf("your character is uppercase");
    }
    else if (c>='a'&&c<='z')
    {
        printf("your character is lower case");
    }
    else
    {
        printf("your character is not an alphabet");
    }
    return 0 ;
    

}
