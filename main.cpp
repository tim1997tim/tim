#include"graph.h"

int main()
{
    int case_of_graph=0;

    scanf("%d", &case_of_graph);
    getchar();
    for(int num_case=0;num_case<case_of_graph;num_case++)
    {
        if(num_case==0) getchar(); // eat the enter

        char input_start_char;
        scanf(" %c", &input_start_char);
        getchar();
        GraphPoint GP(input_start_char);

        // scan lines and determine whether characters have appear or not
        // if character whether one or both haven't appear then the character place of array +1 and num_stack -1
        // because initial number of stack is same as the number of character
        // or do nothing
        const int side_of_char_conect=3;
        char input_char_connectivity[side_of_char_conect]={};
        while(gets(input_char_connectivity))
        {
            if(input_char_connectivity[0]=='\0') break;

            if(GP.num_all_letter_.plus_letter(input_char_connectivity))
            {
                GP.minus_num_stack(input_char_connectivity);
            }
        }

        GP.print_num_stack();
        if(num_case!=case_of_graph-1)
        {
            puts("");
        }
        GP.num_all_letter_.reset_letter();
    }

    return 0;
}
