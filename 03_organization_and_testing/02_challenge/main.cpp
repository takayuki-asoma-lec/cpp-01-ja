#include <thread>
#include <iostream>

int main(){
    thread_local int thread_data{10};
    std::thread t1([]()
                   { std::cout << "t1 thread_data: " << thread_data << std::endl; 
                  thread_data++; });
    std::thread t2([]()
                   { 
                    
                    for(int i = 0; i < 1000000000; ++i){
                        int j = i * i;
                    }
                    std::cout << "t2 thread_data: " << thread_data << std::endl; });
    t1.join();
    t2.join();
}