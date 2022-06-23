#include <iostream>
#include <String>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n(0), m(0);
    string s;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
    }

    //int     nN(0), nM(0);
    //int     nCnt(0);
    //string  szNum;
    //string  szTmp, szTmp_single;

    //cin >> nN >> nM;

    //int** arr1 = new int* [nN];
    //int** arr2 = new int* [nN];

    //for (int i = 0; i < nN; i++)
    //{
    //    arr1[i] = new int[nM];
    //    arr2[i] = new int[nM];
    //}


    //for (int i = 0; i < nN; i++)
    //{
    //    cin.ignore();
    //    getline(cin, szTmp);
    //    for (int j = 0; j < nM; j++)
    //    {
    //        for (int k = 0; k < szTmp.size(); k++)
    //        {
    //            szTmp_single = szTmp[k];
    //            if (szTmp_single == " ")
    //            {
    //                arr1[i][nCnt] = stoi(szNum);
    //                szNum.clear();
    //                nCnt++;
    //            }
    //            else
    //            {
    //                szNum += szTmp[k];
    //            }

    //        }
    //    }
    //    

    //}


    //for (int i = 0; i < nN; i++)
    //{
    //    delete[] arr1[i];
    //    delete[] arr2[i];
    //}

    //delete[] arr1;
    //delete[] arr2;

    return 0;
}