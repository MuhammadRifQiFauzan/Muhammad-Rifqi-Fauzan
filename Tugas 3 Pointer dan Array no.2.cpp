 #include <iostream>
 using namespace std;
 
 int main()
 {
 	int i,n, sum;
 	int a[2][2];
 	
 	for(i=0;i<2;i++)
 	{
 		for(n=0;n<2;n++)
 		{
 			cin>>a[i][n];
		 }
	 }
	 sum = a[0][0]+a[0][1]+a[1][0]+a[1][1];
	 cout<<"Maka hasilnya adalah: "<<sum;
	 
	 return 0;
 }
