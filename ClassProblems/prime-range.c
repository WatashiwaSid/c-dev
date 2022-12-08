// Objective : To count prime numbers in a gievn range. Range is known.
// Range : (1,100)
// Author : Siddhant Nautiyal

#include<stdio.h>
void main()
{
    int range,verifier,prime=0,count;
    for(range=2;range<=100;range++)
    {
        verifier=0;
        for(count=2;count<range;count++)
        {
            if(range%count==0)
                verifier++;
            else
                continue;    
        }
        if(verifier==0)
            prime++;
        else
            continue;    

    }
    printf("Total number of prime numbers : %d", prime);
}