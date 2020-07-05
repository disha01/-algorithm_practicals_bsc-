
//quicksort
#include<iostream.h>
class quicksort
 { int q,a[50],x,temp,count;
	 public:
	  int n;
	  void get_details();
	  void qsort(int,int);
	  int partition(int,int);
	  void display();
 };
 void quicksort::get_details()
  { cout<<"\n\tEnter no. of elements : ";
	 cin>>n;
	 cout<<"\n\tEnter elements : ";
	  for(int i=1;i<=n;i++)
		{ cin>>a[i];}
		count=0;
  }
 void quicksort::qsort(int p,int r)
  {  if(p<r)
		 { count++;
			 q=partition(p,r);
			 qsort(p,q-1);
			 qsort(q+1,r);
		 }
  }
 int quicksort::partition(int p,int r)
  { count++;
	 x=a[r];
	  int i=p-1;
		for(int j=p;j<=r-1;j++)
		 { if(a[j]<=x)
				{ i=i+1;
				  temp=a[i];
				  a[i]=a[j];
				  a[j]=temp;
				}
		 }
		temp=a[i+1];
		a[i+1]=a[r];
		a[r]=temp;
		return i+1;
 }

 void quicksort::display()
  { cout<<"\n\tThe sorted array is : ";
		for(int i=1;i<=n;i++)
		 { cout<<a[i]<<"  ";}
	 cout<<"\n\tThe number of comparisons are : "<<count;
  }
int main()
  { quicksort ob;
		ob.get_details();
		ob.qsort(1,ob.n);
		ob.display();
  }
