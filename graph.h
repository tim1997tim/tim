#ifndef GRAPH
#define GRAPH

#include<stdio.h>

static constexpr int letter_number=26;

class AllLetter
{
public:
    bool plus_letter(char *input_char_connectivity); // true then execute minus_num_stack
    void reset_letter();
    bool DFS_letter(const int first, const int second);
    void setTRUE_letter(const int first, const int second);
private:
    bool letter[letter_number][letter_number];// record times of letter appear
};
class GraphPoint
{
public:
    GraphPoint(char input_point):input_point_(input_point)
    {
        num_stack_=(input_point_-'A')+1;
        for(int i=0;i<letter_number;i++)
        {
            for(int j=0;j<letter_number;j++)
            {
                num_all_letter_.reset_letter();
            }
        }
    } // setting-function
    void minus_num_stack(char *input_char_connectivity){ num_stack_-=1;}// if plus_letter is ture means the letter hasn't appear so plus and minus num_stack
    void print_num_stack()const { printf("%d\n", num_stack_);}
    AllLetter num_all_letter_;
private:
    const char input_point_;
    int num_stack_; // means number of stack and point at the same time
};

#endif // GRAPH
