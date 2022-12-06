class Solution
{
public:
    bool checkIsAP(int arr[], int n)
    {
        // code here
        priority_queue<int, vector<int>, greater<int>> min_heap;

        for (int i = 0; i < n; i++)
        {
            min_heap.push(arr[i]);
        }

        int a = min_heap.top();
        min_heap.pop();

        int d = min_heap.top() - a;

        a = min_heap.top();
        min_heap.pop();

        while (!min_heap.empty())
        {
            if ((min_heap.top() - a) != d)
            {

                return false;
            }

            a = min_heap.top();
            min_heap.pop();
        }
        return true;
    }
};