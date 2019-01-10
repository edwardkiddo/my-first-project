#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 double tienvon;
 double tienkivong;
 double nam;
 double laisuat;
 double a,b;
 cout<<"nhap vao so tien von:";
 cin>>tienvon;
 cout<<"nhap vao lai suat:";
 cin>>laisuat;
 cout<<"nhap vao so tien ki vong:";
 cin>>tienkivong;
 laisuat= double(laisuat/100);
 a= double(tienkivong/tienvon);
 b= double(1+laisuat);
if(tienkivong>tienvon);
	nam=double(log(a)/log(b));
    cout<<"so nam can thiet de dat duoc so tien ki vong:"<<nam;
else
    cout<<"khong hop le.";	
 return 0;
}
