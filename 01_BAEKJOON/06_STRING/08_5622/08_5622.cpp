#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string szNum_input;
    string szNum_single;
    int nNumSize(0);
    int nNumTime(0);
    int nNum_single;
    char szChar_single;


    cin >> szNum_input;
    nNumSize = szNum_input.size();

    for (int i = 0; i < nNumSize; i++)
    {
        szNum_single = szNum_input.at(i);

        nNum_single = (int)(szNum_single[0]);

        switch (nNum_single)
        {
        case 'A':
        case 'B':
        case 'C':
            nNumTime += 3;
            break;
        case 'D':
        case 'E':
        case 'F':
            nNumTime += 4;
            break;
        case 'G':
        case 'H':
        case 'I':
            nNumTime += 5;
            break;
        case 'J':
        case 'K':
        case 'L':
            nNumTime += 6;
            break;
        case 'M':
        case 'N':
        case 'O':
            nNumTime += 7;
            break;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            nNumTime += 8;
            break;
        case 'T':
        case 'U':
        case 'V':
            nNumTime += 9;
            break;
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            nNumTime += 10;
            break;
        default:
            break;
        }
    }

    cout << nNumTime << '\n';

    return 0;
}
