#include<iostream>
#include "selectionSort.hpp"
int main()
{
	
	int IntArray[200];
	int array_size1,array_size2;
        float flt_point_arr[200];
      
       cout<<"Please enter float array size:\n";
       cin>>array_size1;
       cout<<"\nEnter Float elements:\n";
       for(int i=0;i<array_size1;++i)
        {
            cout<<"\nEnter float number: "<<i+1<<"\n";
            cin>>flt_point_arr[i];
	}
	selection_Sort(flt_point_arr,array_size1);
	cout<<"\n Please enter Integer array size:\n";
        
    	cin>>array_size2;
        cout<<"\nEnter integer elements:\n";
        for(int i=0;i<array_size2;++i)
        {
            cout<<"\nEnter INT number: "<<i+1<<"\n";
            cin>>IntArray[i];
	}
	selection_Sort(IntArray,array_size2);
	cout<<"\nSorted Floating point numbers:\n";

       for(int i=0;i<array_size1;++i)
	{
	    cout<<flt_point_arr[i]<<"|";
	 }
	    cout<<"\n";
            cout<<"\nSorted Ingeters:\n";
       for(int i=0;i<array_size2;++i)
        {
              cout<<IntArray[i]<<"|";
        }
                cout<<"\n";
             return 0;
}


