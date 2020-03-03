#include <iostream>
#include <vector>
#include <time.h> 
using namespace std;

string genItems(){
    vector<string> items = { "IE", "BT", "PD", "Dorans", "Rod", "random"};
    srand(time(NULL));
    for(int i = 0; i < 3; i++){
    cout << items[rand() % items.size()] << endl;
    items.erase(items.begin() + rand() + items.size());
    }
    

    return 0;
}

string genChampion(){
    return 0;
}

int main() {
    genItems();
}