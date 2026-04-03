#include<iostream>
using namespace std;

    main(){
int holidays;
cout<<"Enter the Holidays";
cin>>holidays;

float workingdays=365-holidays;

float gamestimeinmin=(workingdays*63)+(holidays*127);
int distancefromNorm=30000- gamestimeinmin;
int distanceinHours=(distancefromNorm/60);
int distanceinminutes=distancefromNorm%60;

  if(distancefromNorm<30000){
cout<<"Tom sleep well"<<endl;
cout<<distanceinHours<<"hours and"<<distanceinminutes<<"minutes less for play";


}


  if(distancefromNorm>30000){
cout<<"Tom will run away"<<endl;
cout<<distanceinHours<<"hours and"<<distanceinminutes<<"minutes for play";


}



































 








  }