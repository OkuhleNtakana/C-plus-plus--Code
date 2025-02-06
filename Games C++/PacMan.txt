#include "PacMan.h"

using namespace PacMan;

int main(int argc, char** argv)
{
    srand(time(nullptr));
    if(argc!=6)
    {
        cerr << "Please run the application with " << argv[0] << " <intRows> <intCols> <intGhosts> <intIsh> <intSuperIsh> "<<endl;
        exit(ERR_ARGC);
    }



    int intRow= ConvertToInt(argv[1]);
    int intCol= ConvertToInt(argv[2]);
    int intGhosts= ConvertToInt(argv[3]);
    int intIsh = ConvertToInt(argv[4]);
    int intSuperIsh=ConvertToInt(argv[5]);
    int intCountIsh =0;
    int intCountSuperIsh=0;
    int intLives=3;
    int intTurnsToNewGhost=0;
    int intSupersIsh =0;
    TwoDArray arrNums= InitArray(intRow,intCol);
    InitGame(arrNums,intRow,intCol,intGhosts,intIsh,intSuperIsh);
    bool blnContinue = true;
    char chInput = '\0';

    do
    {
        system("cls");
        Display(arrNums,intRow,intCol,intLives,intIsh,intSupersIsh,intTurnsToNewGhost);
        cin>>chInput;

        switch(chInput)
        {
        case'A':
            case'a':
                {
                    MovePlayer(arrNums, intRow,intCol,MOVE_LEFT,intCountIsh,intCountSuperIsh,intLives,intTurnsToNewGhost,intSupersIsh);
                    break;
                }
                case'D':
                    case'd':
                        {
                            MovePlayer(arrNums,intRow,intCol,MOVE_RIGHT,intCountIsh,intCountSuperIsh,intLives,intTurnsToNewGhost,intSupersIsh);
                            break;
                        }
                        case'S':
        case's':
        {
            MovePlayer(arrNums,intRow,intCol,MOVE_DOWN,intCountIsh,intCountSuperIsh,intLives,intTurnsToNewGhost,intSupersIsh);
            break;
        }
        case 'W':
        case'w':
        {
            MovePlayer(arrNums,intRow,intCol,MOVE_UP,intCountIsh,intCountSuperIsh,intLives,intTurnsToNewGhost,intSupersIsh);
            break;
        }
        case'Q':
        case'q':
        {
            blnContinue=false;
            break;
        }
        default:
        {
            cerr<<"Input Error"<<endl;
            pause();
        }
        }
        EndGame(arrNums,intIsh,intCountIsh,intLives,blnContinue,intRow,intCol,intGhosts,intSuperIsh);
    }
    while(blnContinue);

    DeleteArray(arrNums,intRow);

    return 0;
}


