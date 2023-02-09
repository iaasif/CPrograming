#include <stdio.h>
#include <string.h>
int string_length(char str[])
{
    int i, length = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

int string_compare(char a[], char b[])
{
    int i,j;
    for(i=0; a[i]!='\0' && b[i] != '\0'; i++)
    {
        if(a[i]>b[i])
        {
            return -1;
        }
        if (a[i]>b[i])
        {
            return 1;
        }
    }
    if(string_length(a)==string_length(b))
    {
        return 0;
    }
    if(string_length(a) < string_length(b))
    {
        return -1;
    }
    if(string_length(a) > string_length(b))
    {
        return 1;
    }
}






int main()
{
    char s[1002],word[100];
    int i,j,length, is_word_started;
    gets(s);
    length =strlen(s);
    is_word_started = 0;
    for(i=0,j=0; i<length; i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            if(is_word_started==0)
            {
                is_word_started=1;
                word[j]='A'+s[i]-'a';
                j++;
            }
            else
            {
                word[j]=s[i];
                j++;
            }
        }
        else if(s[i]>='A'&& s[i]<='Z')
        {
            if(is_word_started == 0)
            {
                is_word_started =1;
            }
            word[j]=s[i];
            j++;
        }
        else if(s[i]>='0' && s[i]<='9'){
            if(is_word_started ==0){
                is_word_started =1;
            }
            word[j]=s[i];
            j++;
        }
        else{
            if(is_word_started==1){
                is_word_started =0;
                word[j]='\0';
                printf("%s\n",word);
                j=0;
            }
        }
    }

    return 0;
}
