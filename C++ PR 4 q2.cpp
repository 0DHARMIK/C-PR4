#include<iostream>
using namespace std;
class Distance{
	public:
		int km,meter;
		public:
			void readdistance()
			{
				cout<<"enter km=";
				cin>>km;
				cout<<"enter meter=";
				cin>>meter;
			}
			void dispdistance()
			{
				cout<<"km="<<km<<"\t"
				<<"meter="<<meter<<endl;
			}
			Distance operator+(Distance &dist1)
			{
				Distance tempD;
				tempD.meter=meter+dist1.meter;
				tempD.km=km+dist1.km+(tempD.meter/1000);
				tempD.meter=tempD.meter%1000;
				return tempD;
			}
			
};