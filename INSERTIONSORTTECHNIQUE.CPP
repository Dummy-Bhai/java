#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
cout<<"Khan Iffat KSBSCIT019"<<endl;
int a[10],i,j,temp,s;
cout<<"Enter the array size"<<endl;
cin>>s;
cout<<"Enter array elements: ";
for(i=0;i<s;i++)
{
cin>>a[i];
}
for(i=1;i<s;i++)
{
temp=a[i];
j=i-1;
while((temp<a[j])&&(j>=0))
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=temp;
}
for(i=0;i<s;i++)
{
cout<<a[i]<<"\t"<<"Elements is sorted using insertion sort\n";

}
getch();
}
