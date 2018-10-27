#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{int n,a[100],i,j,max,t;

	while(cin>>n)
    {for(i=0;i<n;i++)

			cin>>a[i];

	for(i=0;i<n-1;i++)
    {

    max=i;

		for(j=i+1;j<n;j++)

			if(abs(a[j])>abs(a[max]))

				max=j;

		if(max!=i)
		{
		    t=a[i];

			a[i]=a[max];

			a[max]=t;
		}
    }

    for(i=0;i<n;i++)
    {cout<<a[i];

	if(i!=n-1)

		cout<<" ";

    }
    cout<<endl;

    }
    return 0;
}
