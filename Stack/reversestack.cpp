#include <iostream>
#include <stack>

using namespace std;

void reverse(int arr[], int n)
{
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        st.push(arr[i]);
    }

    int i = 0;

    while (!st.empty())
    {

        int top = st.top();
        st.pop();

        arr[i] = top;

        i++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return;
}

int main()
{
    int n = 4;

    int arr[] = {100, 200, 300, 400};

    reverse(arr, n);

    return 0;
}
