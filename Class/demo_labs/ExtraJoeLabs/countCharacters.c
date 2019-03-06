#include <stdio.h>
#include <ctype.h>

int main()
{
    char phrase[] = "When in the political bands it encourages them to impede to the separation.";

    int index,alpha,blank,punct,upper,lower;

    alpha = blank = punct = upper = lower = 0;

/* gather data */
    index = 0;
    while(phrase[index])
    {
        if(isalpha(phrase[index]))
            alpha++;
        if(isblank(phrase[index]))
            blank++;
        if(ispunct(phrase[index]))
            punct++;
		if(isupper(phrase[index]))
            upper++;
        if(islower(phrase[index]))
            lower++;
        index++;
    }

/* print results */
    printf("\"%s\"\n",phrase);
    puts("Statistics:");
    printf("%d alphabetic characters\n",alpha);
    printf("%d blanks\n",blank);
    printf("%d punctuation symbols\n",punct);
    printf("%d uppercase characters\n", upper);
    printf("%d lowercase characters\n", lower);

    return(0);
}