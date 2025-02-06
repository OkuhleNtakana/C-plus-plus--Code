#include <iostream>
#include <ctime>

using namespace std;

int GenNum(int,int);
int main()
{
   srand(time(0));
   cout<<"Enter your name cool player"<<endl;
   string Name;
   cin>>Name;
   string ArrWords[20] = {"Okuhle","Ntakana","Bored","Kuzolunga","Mama","Tata","Phone","Eminem","Reece","Malonqo","Ntabankulu","Fill","Random","numbers","Display","Option","Empty","Vectors","End","Programme"};
   char ArrNums[100];
   bool blnContinue = true;
   bool blnWon =false;
   int IntRanNum = GenNum(0,21);
   string Word = ArrWords[IntRanNum];
   string Guess;
   int intcount=0;

    do
    {

      cout<<endl<<Name<<" please enter the random word"<<endl;
        cin>>Guess;
    if(ArrWords[IntRanNum]!= Guess)
    {
        int d = 0;
        cout<<Guess<<" Is incorrect"<<endl;
           for(char a :ArrWords[IntRanNum])
           {
               for(char n : Guess)
               {
                   if(n==a)
                   {
                      ArrNums[d]=n;
                      d++;
                   }
               }
           }
           for(int w =0; w<d;w++)
        cout<<ArrNums[w]<<" Is part of the word you are looking for"<<endl;
    }
    else
    {
        blnContinue= false;
        cout<<endl<<Name<<" found the word '"<<ArrWords[IntRanNum]<<"' after "<<intcount<<" tries"<<endl;
    }


    intcount++;
     if(intcount==5)
        {
            blnWon=true;
            blnContinue=false;
            cout<<"The word is "<<ArrWords[IntRanNum]<<endl;
        }
    }while(blnContinue);

    if(blnWon!=true)
    {
        cout<<"**********************************************"<<endl;
        cout<<"*                  GAME WON                  *"<<endl;
        cout<<"**********************************************"<<endl;
    }
    else
    {
          cout<<"**********************************************"<<endl;
        cout<<"*                  Game Lost                  *"<<endl;
        cout<<"**********************************************"<<endl;
    }
         return 0;
}
 int GenNum(int intLower,int intHigher)
    {
       int intNum = intHigher-intLower+1;
       return rand()%intNum+intLower;
    }
