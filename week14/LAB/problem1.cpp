 #include<iostream>
 #include<fstream>
 using namespace std;
 void countInteger();
 main(){
    countInteger();

 }
 void countInteger(){
     string line;
    fstream file;
    int count=0;
    file.open("task1.txt", ios::in);
    while (!file.eof())
    {

        getline(file,line);
        count++;
    }
    cout<<count;
 }
