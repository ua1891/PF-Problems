#include<iostream>
using namespace std;

 main(){
cout<< "Enter the size of fertilizer bag in pounds";
float size;
cin>>size;

cout<<"Enter the cost of bag:$";
float cost;
cin>>cost;


cout<<"Enter the area in square feet that can be covered by the bag:";
float area;
cin>>area;



float costPerPound;
costPerPound=cost/size;
 
float costPersquare;
costPersquare=cost/area;

cout<<"cost of fertilizer per pound:"<<costPerPound<<endl;
cout<<"cost of fertilizer per square foot:"<<costPersquare;











 }