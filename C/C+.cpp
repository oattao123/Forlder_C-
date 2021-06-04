//     run c++ in there use ./___.bat but .bat or use code runner 
//     ./run
#include <iostream>

using namespace std;

int add(int x,int y){
    return x + y ;
}
int main()
{
    bool gender = false;
    if (gender)
    {
        cout << "This is a boy" << endl;
    }
    else 
    {
        cout << "This is a girl" << endl;
    }

    cout << add(10,19);
}