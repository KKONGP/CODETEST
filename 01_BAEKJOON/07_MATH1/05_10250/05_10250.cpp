#include <iostream>
#include <string>
#include <vector>

using namespace std;

string RoomNumber(int nH, int nW, int nN);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nCase(0);
    int nH(0), nW(0), nN(0);
    vector<string> szRoom;

    cin >> nCase;

    for (int i = 0; i < nCase; i++)
    {
        cin >> nH >> nW >> nN;
        szRoom.push_back(RoomNumber(nH, nW, nN));
    }

    for (int i = 0; i < nCase; i++)
    {
        cout << szRoom.at(i) << '\n';
    }
    return 0;
}


string RoomNumber(int nH, int nW, int nN)
{
    string szRoomNumber;
    string szRoomW;
    int nRoomH(0), nRoomW(0);
    int nTmpH(0), nTmpW(0);

    nTmpH = nN % nH;
    nTmpW = nN / nH;

    if (nTmpH == 0)
    {
        nRoomH = nH;
        nRoomW = nTmpW;
    }
    else
    {
        nRoomH = nTmpH;
        nRoomW = nTmpW + 1;
    }

    szRoomW = to_string(nRoomW);

    if (szRoomW.size() == 1)
    {
        szRoomW.insert(0, "0");
    }

    szRoomNumber = to_string(nRoomH) + szRoomW;

    return szRoomNumber;
}