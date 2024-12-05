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
    long num = 0xFFFF1111;
    ofs.write(reinterpret_cast<const char*>(&num), sizeof(long));
    ofs.close();
    return 0;
}
