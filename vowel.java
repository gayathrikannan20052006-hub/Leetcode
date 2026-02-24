bool vowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        return true;
    }
    return false;
}

int* vowelStrings(char** words, int wordsSize, int** queries, int queriesSize, int* queriesColSize, int* returnSize)
{
    int list[wordsSize];
    int len,i;
    len=(int)strlen(words[0]);
    if(vowel(words[0][0])&&vowel(words[0][len-1]))
    {
        list[0]=1;
    }
    else
    {
        list[0]=0;
    }
    for(i=1;i<wordsSize;i++)
    {
        len=(int)strlen(words[i]);
        if(vowel(words[i][0])&&vowel(words[i][len-1]))
        {
            list[i]=list[i-1]+1;
        }
        else
        {
            list[i]=list[i-1];
        }
    }
    int* ret=(int*)malloc(sizeof(int)*queriesSize);
    for(i=0;i<queriesSize;i++)
    {
        if(queries[i][0]==0)
        {
            ret[i]=list[queries[i][1]];
        }
        else
        {
            ret[i]=list[queries[i][1]]-list[queries[i][0]-1];
        }
    }
    *returnSize=queriesSize;
    return ret;
}
