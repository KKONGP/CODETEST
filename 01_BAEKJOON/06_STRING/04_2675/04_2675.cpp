#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <class T>
void vector_release(vector<T>& vec);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string  szString;
    string  szString_single;
    string  szString_sub;
    int     nNumCase(0);
    int     nNumRepeat(0);
    int     nNumStringSize(0);
        
    vector<string> szArr;


    cin >> nNumCase;

    if (nNumCase > 1000 || nNumCase < 1)
    {
        cout << "정수값의 범위를 확인하세요" << '\n';
        return 0;
    }

    for (int i = 0; i < nNumCase; i++)
    {
        cin >> nNumRepeat;
        cin >> szString;
        nNumStringSize = szString.size();

        if (nNumRepeat > 8 || nNumRepeat < 1 || nNumStringSize > 20 || nNumStringSize < 0)
        {
            cout << "정수값의 범위를 확인하세요" << '\n';
            return 0;
        }


        for (int j = 0; j < nNumStringSize; j++)
        {
            szString_single = szString.at(j);

            for (int k = 0; k < nNumRepeat; k++)
            {
                szString_sub = szString_sub + szString_single;
            }

        }
        szArr.push_back(szString_sub);
        szString_sub.clear();

    }


    for (int i = 0; i < nNumCase; i++)
    {
        cout << szArr.at(i) << '\n';
    }

    vector_release(szArr);

    return 0;
}

template <class T>
void vector_release(vector<T>& vec)
{
    vector<T> vTmp;
    vTmp.swap(vec);
}