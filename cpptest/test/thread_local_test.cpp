#include <thread>
#include <iostream>

thread_local int g_n = 1;

void f()
{
    g_n++;
    //printf("id=%d, n=%d\n", (int)std::this_thread::get_id(),g_n);
    std::cout << "id:" << std::this_thread::get_id() << " n:" << g_n << std::endl;
}

void foo()
{
    thread_local int i=0;
    //printf("id=%d, n=%d\n", (int)std::this_thread::get_id(), i);
    std::cout << "id:" << std::this_thread::get_id() << " n:" << i << std::endl;
    i++;
}

void f2()
{
    foo();
    foo();
}

int main()
{
    g_n++; 
    f();    
    std::thread t1(f);
    std::thread t2(f);

    t1.join();
    t2.join();
    std::cout << "=====================================" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));

    f2();
    std::cout << "=====================================" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::thread t4(f);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "=====================================" << std::endl;
    std::thread t5(f2);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "=====================================" << std::endl;
    std::thread t6(f2);

    t4.join();
    t5.join();
    t6.join();
    return 0;
}
