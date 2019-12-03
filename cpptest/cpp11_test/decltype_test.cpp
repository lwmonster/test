#include<iostream>
#include<mutex>

using namespace std;


namespace butil {
namespace detail {
    template <typename T>
    std::lock_guard<typename std::remove_reference<T>::type> get_lock_guard();
}   // namespace detail
}   // namespace butil

#define BAIDU_SCOPED_LOCK(ref_of_lock)                                  \
        decltype(::butil::detail::get_lock_guard<decltype(ref_of_lock)>()) \
        scoped_locker_dummy_at_line_(ref_of_lock)

int main() {
    
    //cout << boolalpha << std::is_same(int, int) << endl;
    //
    mutex mu;
    BAIDU_SCOPED_LOCK(mu);
    //butil::detail::get_lock_guard<mutex>();
}
