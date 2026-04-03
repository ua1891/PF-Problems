 #include <iostream>
 #include<fstream>
 using namespace std;
 void integer();
 void decimal();
 void chracter();
 main(){

     integer();
     decimal();
     chracter();
 }
 void integer(){
    int integer;
    cout<<"Enter integer:\n";
    cin>>integer;
    fstream integr;
    integr.open("integer.txt",ios::out);
    integr<<integer;
    integr.close();

 }
  void decimal(){
    float decimal;
    cout<<"Enter decimal:\n";
    cin>>decimal;
    fstream de;
    de.open("decimal.txt",ios::out);
    de<<integer;
    de.close();

 }
  void chracter(){
    char character;
    cout<<"Enter character:\n";
    cin>>character;
    fstream ch;
    ch.open("character.txt",ios::out);
    ch<<character;
    ch.close();

 }