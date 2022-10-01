#include <vector>
#include <iostream>
using namespace std;
#define println(obj) cout << obj << endl;

template <typename T>
class List {
  private:
    int s = 0;

  public:
    //T *arr{ new T[s]{} };
    vector<T> arr;
    List(){}

    //Returns the size of the array
    int size(){
      return s;
    }

    //Inserts element into the array at the top of the stack.
    void push(T val) {
      arr.push_back(val);
      s++;
    }

    /*
    * Parameter: Index.
    * Removes element at the index if the index it provided else remove the top element from the stack.
    */
    void pop(int index = -1){
      if(index == -1){
        arr.pop_back();
        s--;
      }else{
        if(index >= 0 && index < s){
          for (int i = index; i < s - 1; i++){
            arr[index] = arr[index + 1];
          }
          arr.pop_back();
          s--;
        }else{
          println("Error: index out of bounds");
        }
      }
    }
    /*
    *Parameter: 1. Value, 2. Index
    *
    *Sets value at given index.
    */
    void setVal(T val, int index){
      if(index >= 0 && index < s){
        arr[index] = val;
      }else{
        println("Error: index out of bounds");
      }
    }

    /*
    *Parameter: Zero based index.
    *
    *Returns the value at index
    */
    T valueAt(int index){
      if(index >= 0 && index < s){
        return arr[index];
      }else{
        println("Error: index out of bounds");
        return NULL;
      }
    }
    
    /*
    * Parameter: Value to find.
    *
    * Returns: The index of the first value found in the array.
    * It will return -1 if the value is not found.
    */
    int find(T val){
      for (int i = 0; i < s; i++){
        if(arr[i] == val)
          return i;
      }
      return -1;
    }

    // Prints the array
    void print(){
      if(s > 0){
        cout << "[";
        for (int i = 0; i < s-1; i++){
          cout << arr[i] << ", ";
        }
        cout << arr[s - 1] << "]";
      }else{
        println("[]")
      }
    }


};
