#include <iostream>
using namespace std;

template <class T>

void selection_Sort(T array[],int ary_length)
{
             int smal_val;
             for ( int k = 0; k < ary_length - 1; ++k )
              {
                           smal_val = k;
    
    			   for ( int index = k+1; index < ary_length; ++index )
                            if ( array[ index ] < array[ smal_val ] )
 
				    smal_val = index;
	                            swap (array[k], array[smal_val]);

																	               }



}

template <class Obj>
void swap(Obj &element_1, Obj &element_2)
{
	        Obj hold = element_1;
	        element_1 = element_2;
	        element_2 = hold;
}

