/*
买帽子
时间限制：1秒
空间限制：32768K
度度熊想去商场买一顶帽子，商场里有N顶帽子，有些帽子的价格可能相同。度度熊想买一顶价格第三便宜的帽子，问第三便宜的帽子价格是多少？ 
输入描述:
首先输入一个正整数N（N <= 50），接下来输入N个数表示每顶帽子的价格（价格均是正整数，且小于等于1000）


输出描述:
如果存在第三便宜的帽子，请输出这个价格是多少，否则输出-1

输入例子:
10
10 10 10 10 20 20 30 30 40 40

输出例子:
30
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

//用STL解决了，不是最优方案
int main(){
    int N;
    cin >> N;
    vector<int> prices(N);
    for(int i = 0; i < N; i++){
        cin >> prices[i];
    }
    sort(prices.begin(), prices.end());
    auto it = unique(prices.begin(), prices.end());
    int nums = distance(prices.begin(), it);
    if(nums > 2){
        cout << prices[2] << endl;
    }
    else{
        cout << -1 << endl;
    }
}