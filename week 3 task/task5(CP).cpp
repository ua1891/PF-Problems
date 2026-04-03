#include<iostream>
using namespace std;
main(){ 
cout<<"Enter your name..";
string name;
cin>>name;


cout<<"Enter your matric marks(out of 1100)..";
float matric_marks;
cin>>matric_marks;

cout<<"Enter your inter marks(out of 550)..";
float interMarks;
cin>>interMarks;


cout<<"Enter your Ecat marks(out of 400)..";
float ecatMarks;
cin>>ecatMarks;

matric_marks=(matric_marks/1100)*100*0.1;
interMarks=(interMarks/550)*100*0.4;
ecatMarks=(ecatMarks/400)*100*0.5;
float Aggregrate;
Aggregrate=matric_marks+interMarks+interMarks;
cout<<"Your Aggregrate is.."<<Aggregrate;






}