#include <stdio.h>
#define TRUE 1
#define FALSE 0
void squeeze(char s[], char s2[]);
void backspace(char s[], int pos);
int main ()
{
    char sampleString1 [] = "HELLO WORLD" ; 
    char sampleString2 [] = "OWL";

    /*printf("This is the original string: %s \n",sampleString1);
    backspace(sampleString1,5);
    printf("This is the string with a backspace at index %d : %s \n",5,sampleString1 );
    backspace(sampleString1,6);
    printf("This is the string with a backspace at index %d : %s \n",5,sampleString1 ); */
    squeeze(sampleString1,sampleString2);
    printf("This is the squeezed string: %s \n", sampleString1);
    
}

void squeeze(char s1[], char s2[] )
{
    int i , j,k;
    for(i=k=0;s1[i]!= '\0';i++)
    {
        for (j=0; s2[j]!= '\0' ;j++)
        {
            if (s1[i]== s2[j])
            {
                backspace(s1,i);   
                --i; // need to decrement i because now that the string is smaller the next index it points to may skip a char 
            }
        }     
    }
    s1[i] = '\0';
}

// This function needs to shift all characters one  to the left 
void backspace(char s[], int pos )
{
    while (s[pos] != '\0')
    {
        s[pos] = s[pos+1];  
        pos++;  
    }
    s[pos] = '\0';
    
}

/*
 I am attempting to loop through the string and flip the match "switch " to true when it encounters a match with a banned character.
 When match is true it is supposed to increment the value of k, k's purpose is to let the program know how much a character needs to be shifted to the left
 On each pass it should perform the appropriate shift to the left by taking a copy of the letter
 that needs needs to be in the current position and assigning it to that position
I'm encountering some problems with either my method / logic , Sometimes the wrong letters get removed , garbage values will be added at the end
and there is a problem where the program may copy a banned character into a position and have to deal with it on the next step ,
rather than dealing with it there or ignoring it.

I understand that I am getting garbage values because the k value is telling the program to get a character from outside of the range of the string,
which I beleive I can fix. 

I think a simpler but less efficient option would be to loop through the string check if there is a match with a banned character then shift all the neccesary
characters there and then to the left using the backspace function I worte. As opposed to using k to cumatively keep track of how much characters need to move 
This approach would mean I am doing an extra loop to the end of the message string which may be redundant as I am going to loop through it anyways 
hence I was attempting the previous method

Maybe I am dumb or overcomplicating this but for now I will stick with this less efficient option and move on.


void squeeze(char s1[], char s2[] )
{
    int i , j,k;
    int match;
    int prevMatch;
    match = FALSE;
    prevMatch = FALSE;
    for(i=k=0;s1[i]!= '\0';i++)
    {
        if (match)
        {
            match = FALSE;
            prevMatch = TRUE;

        }

        //check if there is a match then set match to true 
        for (j=0; s2[j]!= '\0' || match != TRUE ;j++)
        {
            if (s1[i]== s2[j])
            {
                match = TRUE;
                
            }

        } 
        //only when match is true increment k
        if(match == TRUE )
        {
            match = FALSE;
            prevMatch = FALSE;
            //k is supposed to indicate how much to shift the character left by
            k++;

        }
        if (s1[i+1]!= '\0')
        {
            s1[i] = s1[i+1]; 
        }
        
        
     
        
    }
    s1[i++] = '\0';
}


Possible things to try:
Give the program a way to know if the next character is forbidden or not and deal with it appropriately
Play with the "match /!match" conditions , this solved a bug in my solutions that uses the backspace method 
Add a condition so that the loop stops once 
*/