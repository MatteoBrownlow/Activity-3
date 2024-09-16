#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand((unsigned)time(0)); 
    int i, j;
    i = (rand()%6)+1; 
    j = (rand()%6)+1;
    cout << i << ", " << j << endl; 
    return 0;
}