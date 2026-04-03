#include<iostream>
using namespace std;
 

main(){
cout<<"Enter Imposter:";
float imposter;
cin>>imposter;


cout<<"Enter player count:";
float player_count;
cin>>player_count;

float chance;
chance=100*(imposter/player_count);

cout<<"chance of being imposter:"<<chance<<"%";




}