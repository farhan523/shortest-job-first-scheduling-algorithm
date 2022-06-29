#include <iostream>
using namespace std;
#include <vector>
#include <queue>

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq2;
vector<int> res;
int count;
void insertArrivedProcess(vector<vector<int>> &tasks)
{
    while (!pq2.empty() and pq2.top().first <= count)
    {
        pq.push({tasks[pq2.top().second][1], pq2.top().second});
        pq2.pop();
    }
}
vector<int> getOrder(vector<vector<int>> &tasks)
{

    for (int i = 0; i < tasks.size(); i++)
    {
        pq2.push({tasks[i][0], i});
    }
    cout << pq2.top().first;
    count = pq2.top().first;
    while (!pq2.empty() and pq2.top().first <= count)
    {
        pq.push({tasks[pq2.top().second][1], pq2.top().second});
        pq2.pop();
    }
    int val;
    while (!pq.empty())
    {
        res.push_back(pq.top().second);
        val = pq.top().second;
        count += pq.top().first;
        pq.pop();
        if (!pq2.empty())
        {
            while (pq2.top().first < count and pq2.top().first <= coun)
                count++;
            insertArrivedProcess(tasks);
        }
    }

    return res;
}
int main()
{
    vector<vector<int>> heights = {{5, 2}, {7, 2}, {9, 4}, {6, 3}, {5, 10}, {1, 1}};

    getOrder(heights);
}
