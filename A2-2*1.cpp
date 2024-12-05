#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ofs("data.bin", ios::out | ios::binary);
    if (!ofs)
    {
        cout << "Error opening file" << endl;
        return 1; 
    }
    int num = 10;
    ofs.write(reinterpret_cast<const char*>(&num), sizeof(int));
    ofs.close();
    return 0;
}