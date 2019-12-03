#include <iostream>
#include <queue>
using namespace std;


int main(int argc, char *argv[])
{
    //定义优先队列对象，元素类型为整型;
    priority_queue <int> pq;
    //入队，插入新的元素;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(9);
    pq.push(4);
    pq.resize(4);
    //返回队列中元素的个数;
    cout << pq.size() << endl;
    while(!pq.empty()) {
        //读取当前队首元素;
        cout << pq.top() << " ";
        //出队，删除队首元素;
        pq.pop();
    }
    cout << endl;
    return 0;
}
