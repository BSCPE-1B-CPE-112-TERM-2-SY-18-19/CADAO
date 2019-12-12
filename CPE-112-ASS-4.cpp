#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
	class cpe1b{ 
		public:
			long palindromic_prime(long num); 
			void exam(long num[1000],long size);
			void sorting_ascending(long num[1000],long size);
			long i,num,size; 
			long rev,rem,bin,base,key,pdtemp,pdnum,countit,k,tempo,s,pdnumber,count1; 
	};
int main() 
	{
		long i,inp[1000],size; 
		cpe1b CADAO; 
			cout<<"Magic Array: ";  
						size=0; 
							for(i=0;;i++)
							{ 
								cin>>inp[i];
									if(inp[i]==0)
												{
													break; 
												}
								size++; 
							}
							cout<<"Magic  of Array"<<": "<<size<<endl;
		CADAO.exam(inp,size);					
	}						
	
	
	long cpe1b::palindromic_prime(long num) 
	{	
			countit=0; 
							for(k=2;k<num;k++)
							{			
								if(num%k==0)
								{
									countit++;
								}
							}
							
		if(countit==0)
		{ 	
				pdtemp=num;
				bin=0;
				base=1;
				
					       for(;pdtemp>0;)
						   {
								rem=pdtemp%2;
								bin=bin+(rem*base);
								base=base*10;
								pdtemp=pdtemp/2;
							}
				key=bin;
				tempo=0;
				rev=0;
					      for(;key!=0;)
						   {
								tempo=key%10;
								key=key/10;
								rev=tempo+(rev*10);
							}
		
				if(rev==bin)
				{	
					return 1; 
				}
				else
				{
					return 0; 
				}
		}
				else
				{
					return 0;
				}
	}

	void cpe1b::exam(long num[1000],long size) 
{
		cpe1b CADAO;
		if(CADAO.palindromic_prime(size)==1)
		{
			cout<<"Sorted Ascending: ";
			CADAO.sorting_ascending(num,size);
		}
		else
		{
			cout<<"Not Sorted: ";
			for(i=0;i<size;i++)
				{
					cout<<" "<<num[i];
				}
		}
}

	void cpe1b::sorting_ascending(long num[1000],long size)
		{
			long temp1;
			for(i=0;i<size;i++)
				{
					for(k=i+1;k<size;k++)
						{
							if(num[i]>num[k])
								{
									temp1=num[i];
									num[i]=num[k];
									num[k]=temp1;
								}
						}		
					
				}
		for(i=0;i<size;i++)
			{
				cout<<" "<<num[i];
			}
		}
