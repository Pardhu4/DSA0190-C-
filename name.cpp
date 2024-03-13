#include<iostream>
using namespace std;
int main()
{
string  a[10],b[10];
int i;
for(i=1;i<3;i++)
{
cout << "Enter name of person:";
cin >> a[i];
cout << "Enter class in which the student is studying:";
cin >> b[i];
}
for (i = 1;i<3;i++){

cout << a[i]<<b[i]<<"\n";
}

return 0;
}
