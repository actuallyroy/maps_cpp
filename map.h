#include "list.h"
#include <iostream>


#define println(obj) cout << obj << endl;
using namespace std;

template <typename T1, typename T2>

class Map{
  private:
    List<T1> keys;
    List<T2> values;
  public:
    Map(){}

    void insert(T1 key, T2 val){
      int i = keys.find(key);
      if(i == -1){
        keys.push(key);
        values.push(val);
      }else{
        values.setVal(val, i);
      }
    }

    void remove(T1 key){
      int i = keys.find(key);
      if(i != -1){
        keys.pop(i);
        values.pop(i);
      }else{
        println("Key Error: Key not present in the map.");
      }
    }

    T2 valueOf(T1 key){
      int index = keys.find(key);
      if(index != -1){
        return values.valueAt(index);
      }
      println("Key Error: Key not present in the map.");
      return NULL;
    }

    void print(){
      int s = size();
      if(s != 0){
        cout << "{";
        for (int i = 0; i < s-1; i++){
          cout << keys.valueAt(i) << " : " << values.valueAt(i) << ", ";
        }
        cout << keys.valueAt(s - 1) << " : " << values.valueAt(s - 1) << "}";
      }else{
        println("{}")
      }
    }

    int size(){
      return keys.size();
    }


    List<T1> getKeys() {
      return keys;
    }
    List<T2> getValues() {
      return values;
    }
};
