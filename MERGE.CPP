#include<iostream.h>
#include<conio.h>
void main()
{
int a[5],b[5],c[10];
clrscr();
cout<<"Khan Iffat KSBSCIT019"<<endl;
cout<<"Enter 1st Array Elements: ";
for(int i=0;i<5;i++)
{
cin>>a[i];
}
cout<<"Enter 2nd Array elements: ";
for(i=0;i<5;i++)
{
cin>>b[i];
}
cout<<"\n The merged array is \n";
int temp=0;
for(i=0;i<10;i++){
temp++;
if(temp<=5)
{
c[i]=a[i];
}
else{
c[i]=b[i-5];
}
}
for(i=0;i<10;i++)
{
cout<<c[i]<<"\t";
}
getch();
}
