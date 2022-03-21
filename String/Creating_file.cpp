#include<fstream>
using namespace std;
int main()
{
    ofstream file ("my.file");
    file<<"Hello"<<endl;
    file<<"Arvind"<<endl;
    file<<"How are you"<<endl;
    file.close();
}