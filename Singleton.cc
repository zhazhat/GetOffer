#include<iostream>

using namespace std;
class Singleton4 {
public:

    Singleton4(){};

    static Singleton4 instance = new Singleton4();

    static Singleton4 getInstance() {
        return instance;
    }
}