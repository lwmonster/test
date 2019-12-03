#include <iostream>
#include <vector>
#include <map>
using namespace std;

template<typename T, typename Comp>
class TopKHeap {
private:

    vector<T> _container;
    
    Comp _comparer;
    int _ele_num;

    typedef typename vector<T>::iterator iterator;

    inline int parent(int x) {
        return (x - 1) / 2;
    }

    inline int left(int x) {
        return x * 2 + 1;
    }

    inline int right(int x) {
        return x * 2 + 2;
    }
    
    inline void swap(int i, int j) {
        T tmp = _container[i];
        _container[i] = _container[j];
        _container[j] = tmp;
    }

    void sift_up(int idx) {
        int p = parent(idx);
        if (idx && _comparer(_container[p], _container[idx])) {
            swap(p, idx);
            sift_up(p);
        }
    }
    

    void sift_down(int idx) {
        int l = left(idx), r = right(idx);
        int largest = idx;

        if (l < size() && _comparer(_container[idx], _container[l])) {
            largest = l;
        }

        if (r < size() && _comparer(_container[largest], _container[r])) {
            largest = r;
        }

        if (largest != idx) {
            swap(largest, idx);
            sift_down(largest);
        }
    }
    
  public:
    TopKHeap(): _ele_num(0){
    }

    TopKHeap(int size):_ele_num(size){
        if(_ele_num > 0) {
            _container.reserve(_ele_num);
        }
    }
    
    TopKHeap(int size, std::vector<T> & source):_ele_num(size) {
        if(_ele_num > 0) {
            _container.reserve(_ele_num);
        }

        for(auto &entry:source) {
            push(entry);
        }
    }
    
    template<typename RandomIt>
    TopKHeap(int size, RandomIt first, RandomIt end) : _ele_num(size) {
        if(_ele_num > 0) {
            _container.reserve(_ele_num);
        }
        while (first != end) {
            push(*first);
            first++;
        }
    }
    
    iterator begin() {
        return _container.begin();
    }

    iterator end() {
        return _container.end();
    }

    bool empty() {
        return _container.empty();
    }

    int size() {
        return _container.size();
    }

    T top() {
        return _container[0];
    }

    T pop() {
        T ret = top();

        _container[0] = _container.back();
        _container.pop_back();

        sift_down(0);

        return ret;
    }

    void push(T val) {
        if(_ele_num > 0) {
            // 固定大小堆
            if(_container.size() < _ele_num) {
                // 堆未满
                _container.push_back(val);
                sift_up(_container.size() - 1);
            } else {
                // 堆已满
                if(_comparer(val, _container[0])) {
                    std::cout << "old:" << *_container[0] << "new:" << *val << std::endl;
                    _container[0] = val;
                    //sift_up(_ele_num - 1);
                    sift_down(0);
                }
            }
        } else {
            // 无大小限制堆
            _container.push_back(val);
            sift_up(_container.size() - 1);
        }

        std::cout << "heap after push " << *val << std::endl;
        for(auto &x: _container) {
            std::cout << *x << "\t";
        }
        std::cout << std::endl;
    }

    void maintain() {
        for (int i = parent(size()); i >=0; -- i) {
            sift_down(i);
        }
    }

};

struct myComp {
    bool operator() (int *a, int *b){
        return *a > *b;
    }
};



int main() {
/**
	TopKHeap<int, myComp> h;
    int i1 = 1;
    int i2 = 7;
    int i3 = 3;
    int i4 = 9;
    int i5 = 2;
    int i6 = 19;
    int i7 = 11;
	h.push(&i1);
	h.push(&i2);
	h.push(&i3);
	h.push(&i4);
	h.push(&i5);
	h.push(&i6);
	h.push(&i7);

	cout << h.size() << endl;
	
	while(h.size() > 0) {
		cout << *h.pop() << endl;
	}

    vector<int> v;
    v.push_back(1);
    v.push_back(7);
    v.push_back(3);
    v.push_back(9);
    v.push_back(2);
    v.push_back(19);
    v.push_back(11);

	//TopKHeap<int, myComp> *h = new TopKHeap<int, myComp>(v);
    TopKHeap<int, myComp> h(v);
	cout << h.size() << endl;
	
	while(h.size() > 0) {
		cout << *(h.pop()) << endl;
	}

    std::map<string, int> m;
    m.insert(make_pair("a", 1));
    m.insert(make_pair("b", 7));
    m.insert(make_pair("c", 3));
    m.insert(make_pair("d", 9));
    m.insert(make_pair("e", 2));
    m.insert(make_pair("f", 19));
    m.insert(make_pair("g", 11));

    TopKHeap<int, myComp> h(m);
	cout << h.size() << endl;
	
	while(h.size() > 0) {
		cout << *(h.pop()) << endl;
	}
**/


    vector<int*> v;
    int i1 = 1;
    int i2 = 7;
    int i3 = 3;
    int i4 = 9;
    int i5 = 2;
    int i6 = 19;
    int i7 = 11;
    v.push_back(&i1);
    v.push_back(&i2);
    v.push_back(&i3);
    v.push_back(&i4);
    v.push_back(&i5);
    v.push_back(&i6);
    v.push_back(&i7);
    
    TopKHeap<int*, myComp> h(10, v.begin(), v.end());
	cout << h.size() << endl;
    	
    cout << "===========================" <<endl; 
    for(auto & item : h) {
        cout << *item << endl;
    }
    cout << "===========================" <<endl; 
    for(auto iter = h.begin(); iter != h.end(); iter++) {
        cout << **iter << endl;
    }
    cout << "pop all ===========================" <<endl; 
	while(h.size() > 0) {
		cout << *(h.pop()) << endl;
	}
    
}


