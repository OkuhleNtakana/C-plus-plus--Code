#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

int GetRand(int intLower, int intHigher);

int main()
{
    bool blncontinue = true;
    char chinput='\0';
  srand(time(0));
vector<int> intArr;

  do
  {
      system("cls");
      cout<<"1: Generate New Numbers"<<endl;
      cout<<"2: Exit"<<endl;
      cin>>chinput;
      switch(chinput)
      {
      case'1':

        {
            for(int n=0;n<6;n++)
  {
  int intNumber=GetRand(1,52);
  intArr.push_back(intNumber);
  }

  for(int n: intArr)
  {
      cout<<n<<" ";
  }
  intArr.clear();
cout<<endl<<"Press Enter To Continue"<<endl;
  cin.ignore('500','\n');
  cin.get();
            break;
        }
      case'2':
        {
            blncontinue=false;
            break;
        }
      }
  }while(blncontinue);






    return 0;
}
int GetRand(int intLower, int intHigher)
{
    int intRand = intHigher-intLower+1;
    return rand()% intRand+intLower;

}

