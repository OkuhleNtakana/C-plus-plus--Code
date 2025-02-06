#include <iostream>
#include <cstdlib>
using namespace std;

void OptionA(int, int);
int main()
{

    char chinput ='\0';
    int intTerms =0;
    bool  blnContinue = true;
    do
    {
        system("cls");
        cout <<"Select an option"<<endl
             <<"Option A: A0469011 Seqeance"<<endl
             <<"Option B: Sum of A0469011 Sequence"<<endl
             <<"Option C: Reverse A string"<<endl
             <<"Option X: Exit programme"<<endl;
        cin>>chinput;
//Option A
        switch(chinput)
        {
        case 'a':
        case'A':
            {

                int intSequence=0;
                int counter =0;
                cout<<"Enter Number Of terms:";
                cin>> intTerms;
                //Check errors
                while(cin.fail())
            {
              cin.clear();
                string strRubish;
                cin>>strRubish;
                cerr<<"Please type in a number"<<endl;
                cout<<"Enter number of terms:";
                cin>>intTerms;
            }
        if (intTerms<=0)
    {
        cerr<<"Please type in a number >0";
    }
            OptionA(intTerms, intSequence);
            cin.ignore(500,'\n');
            cout<<endl<<"Press enter to continue"<<endl;
            cin.get();
            break;
        }

//Option B
        case'b':
            case'B':
                {
                    int intTotal=0;
                    int intPreviuos = 0;
            {
                int i =1;
                cout<<endl<<"Enter number of terms:"<<endl;
                cin>>intTerms;
                //Check input errors
                while(cin.fail())
                {
                    cin.clear();
                    string strRubish;
                    cin>>strRubish;
                    cerr<<"Please type in a number"<<endl;
                    cout<<"Enter number of terms:";
                    cin>>intTerms;

                }
                if (intTerms<1)
                {
                    cerr<<"Please type in a number >0";
                }
                while(i<=intTerms)
                {
                    if (intPreviuos > i)
                    {
                        intPreviuos = intPreviuos- i;
                    }
                    else
                    {
                        intPreviuos = intPreviuos + i;
                    }
                    intTotal+=intPreviuos;
                    i++;
                }
                cout<<"Answer is "<<intTotal<<endl;
                cout<<"Press enter to continue"<<endl;
                cin.ignore(500,'\n');
                cin.get();
                break;
            }
        }

//Option C
        case'c':
            case'C':
               {
                                string strSentence;
                                string strNew;
                                cout<<"Type in a sentence"<<endl;
                                cin.ignore(100,'\n');
                                getline(cin,strSentence);
     for(char a: strSentence)
    {
        strNew = a + strNew;
    }
    cout<< strNew;

    cout<<endl<<"Press enter to continue"<<endl;
    cin.ignore(500,'\n');
    cin.get();
        break;
               }
//Option X
        case 'x':
        case'X':
        {
            blnContinue = false;
            break;
        }
        default :
        {
            cerr<<"Please select a valid menu option"<<endl;
            cout << "press enter to continue"<<endl;
            cin.ignore(100,'\n');
            cin.get();
        }
        }
    }
    while(blnContinue);
    return 0;
}

void OptionA(int intTerms,int intSequence)
{
 for(int counter=1 ; counter<=intTerms; counter++)
    {
        if (intSequence > counter)
            {
                intSequence -=counter;
                cout<< intSequence<<" ";
            }
            else
            {
                intSequence +=counter;
                cout<< intSequence<<" ";
            }
        }
     // return intSequence;
}
