#include <iostream>
#include <string>
#include "LinkedList.h"

using namespace std;

int main(){
    LinkedList<string> list;
    list.insertTail("lazy");
    list.insertHead("lazy");
//    list.insertAfter("dog", "lazyy");
    list.insertHead("ME");
    list.insertHead("NEw HEaD");
    list.insertTail("TAIL!");
    list.insertTail("TAIL!");
    list.insertHead("TAIL!");
    list.insertHead("ME");
    list.insertAfter("dog2", "lazy");
    for (int i = 0; i < list.size(); i++)
        list.at(i);

    cout << list.toString() << endl;

    return 0;
}
