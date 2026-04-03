 #include<iostream>
 #include<fstream>
 using namespace std;
int countCharacters(string fileName);
 main(){
        string name="task2";
       int result= countCharacters(name);
       cout<<"Total characters:"<<result;

 }
 int countCharacters(string fileName){
    string line;
    fstream file;
    int count=0;
    file.open(fileName+".txt",ios::in);
    while (!file.eof())
    {
        getline(file,line);
        for (int i = 0; i <line.length(); i++)
        {
            count++;
        }
        
    }
    return count;
 }