#include <iostream>

const int SIZE = 5;


int findDsum(int num){
    int sum = 0;
    while(num){
        sum += num % 10;
        num /= 10;
    }
   
    return sum;   
}


void InsertionSort(int* array){
    using namespace std;

    size_t min, max;
    min = 0;
    max = SIZE - 1;
    
    while(min <= max){
        for(size_t i = min; i < max; ++ i){
            if(array[i] > array[i + 1])
                swap(array[i], array[i + 1]);
        }
        
        -- max;

        for(size_t j = max; j > min; -- j){
            if(array[j - 1] > array[j])
                swap(array[j - 1], array[j]);
        }
        
        ++ min;
    }
}


int main(){
    using namespace std;
   
    int array[SIZE];
   
    // input
    for(int &elem : array)
        cin >> elem;
       
    // sorting   
    InsertionSort(array);
   
    // output
    for(int &elem : array)
        cout << elem;
       
       
    return 0;
}