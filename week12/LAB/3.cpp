 #include<iostream>
 using namespace std;

    int ManyStickers(int a);
 main(){
        int n=0,final;
        cout<<"Enter the side of the length:";
        cin>>n;
       final= ManyStickers(n);
       cout<<"The Rubik's cube of side length"<<n<<" has "<<final<<" stickers";
 }
int ManyStickers(int a){
    int result=6*(a*a);
    return result;
 }