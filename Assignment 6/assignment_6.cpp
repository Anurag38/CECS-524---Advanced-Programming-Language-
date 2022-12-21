#include <iostream>
#include <map>
#include <string>

using namespace std;
template <class T>
void calcAddress(T base, T rowlb, T collb, T rowub, T colub, T elementsize){
    
    cout << "For array a[" << rowlb << ":" << rowub << " ," << collb << ":" << colub << "] " 
         << "with elementsize size " << elementsize << endl;
    
    
    auto n = colub - collb + 1;
    
    // int loc[];
    
    map<string, int> location;
    
    
    for (int i = rowlb; i <= rowub; i++){
        for (int j = collb; j <= colub; j++){
            string row = to_string(i);
            string col = to_string(j);
            string key = "a[" + row + "," + col + "]";
            location[key] = base - (((rowlb * n) + collb) * elementsize) + (((i * n) + j) * elementsize);  
        }
    }
    
    for (auto x : location){
        auto p = x.first;
        auto zz = x.second;
        cout << p<< " = " <<zz<< endl;
    }
}

int main()
{
    calcAddress(1200, 0, 0, 2, 2, 1);
    cout << endl;

    calcAddress(100, 1,1,2,2,2);
    cout << endl;
    
    calcAddress(100, 2, 3, 4,5,4);
    cout << endl;
    
    calcAddress(100, -1, -1, 1, 2, 8);

    return 0;
}