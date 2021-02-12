#include <stdio.h>
#include <string.h>

#define STR_LEN 26
int main()
{
	int i = 0, j = 0, num =0,x=0, first = 0,second = 0,temp=0;
	char letters[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}; //the leters
	int alphabets[STR_LEN] = {0};
	char input[STR_LEN] = {0};
    char firstCh = 'a',secondCh = 'a';
	printf("Enter a string: \n");
	fgets(input, STR_LEN, stdin); //get input
	for(i = 0; i < STR_LEN; i++)
	{
		for(j = 0; j < STR_LEN; j++)
		{
			if(input[i] == letters[j])
			{
				alphabets[j]++;  //how many times the letter showed
			}
		}
	}
    
	for(i = 0; i < STR_LEN;i++) //knowing the max1 and max2
	{
        if (alphabets[i] > second)  
        {
            if(first > alphabets[i])
            {
                second = alphabets[i];
                secondCh = letters[i];
            }
            else
            {
                second = first;
                first = alphabets[i];
                secondCh = firstCh;
                firstCh = letters[i];
            }
        }
	}
	i = 0;
	printf("most common: %c, 2nd most common: %c\n",firstCh,secondCh);
	for(i = 0; i < STR_LEN; i++) //change the max1 with max2
	{
		if (input[i] == firstCh)
		{
			input[i] = secondCh;
		}
		else if (input[i] == secondCh)
		{
			input[i] = firstCh;
		}
	}
	printf("Swapped: \n%s", input);
	
	return 0;
}
