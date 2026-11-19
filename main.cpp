#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    unsigned int n, time, pid;
    cin >> n;
    while(n > 0){
        cin >> time >> pid;
    }
    unsigned short run_size = 16; //TODO przerobić na dynamiczne może
    unsigned short num_of_runs = n / run_size; //to ignoruje ostatni run jeśli jest krótszy, trzeba zrobić ogonowy
    for(unsigned short i = 0; i < num_of_runs; i++){
        bool is_growing = false;
        if(i * run_size + 1 < n){
            is_growing =
        }
    }

    return 0;
}
