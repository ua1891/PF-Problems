#include <iostream>
using namespace std;
main()
{
  char letter = 'A';
    int num;
    cout<<"Enter total rows:";
    cin>>num;
  for (int i = 1; i <= num; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << letter << " ";
      letter++;
      if (letter >'Z')
      {
        
        letter = 'A';
      }
    }
    cout<<endl;

}
}