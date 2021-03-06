#include "graph.h"

bool AllLetter::DFS_letter(const int first, const int second)
{
    for(int i=0; i<letter_number; i++)
    {
        if(letter[first][i]==true)
        {
            if(letter[second][i]==true) return true;
        }
    }

    return false;
}
void AllLetter::setTRUE_letter(const int first, const int second)
{
    for(int i=0; i<letter_number; i++)
    {
        if(letter[first][i]==true)
        {
            letter[second][i]=true;
            letter[i][second]=true;
        }
        if(letter[second][i]==true)
        {
            letter[first][i]=true;
            letter[i][first]=true;
        }
    }
}
bool AllLetter::plus_letter(char *input_char_connectivity) // true then execute minus_num_stack(--)
{
    int first=input_char_connectivity[0]-'A', second=input_char_connectivity[1]-'A';

    if((letter[first][second]==true && letter[second][first]==true) || first==second) return false;
    else if(DFS_letter(first,second))
    {
        letter[first][second]=true;
        letter[second][first]=true;
        setTRUE_letter(first,second);
        return false;
    }
    else
    {
        letter[first][second]=true;
        letter[second][first]=true;
        setTRUE_letter(first,second);
        return true;
    }
}
void AllLetter::reset_letter()
{
    for(int i=0; i<letter_number; i++)
    {
        for(int j=0; j<letter_number; j++)
        {
            letter[i][j]=false;
        }
    }
}
