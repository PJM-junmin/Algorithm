#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_LENGTH 100000
int arrSize = 0;


struct Node {
	int data;
	int priority;
};


Node heap[MAX_LENGTH + 1];


Node returnRoot(Node arr[])
{
	if (arrSize == 0)
		return { -1, -1 };
	return arr[1];
}


void max_heapify(Node arr[], int i)
{
	int left = i * 2;
	int right = i * 2 + 1;
	int largest = i;

	if (left <= arrSize && arr[left].priority > arr[largest].priority)
		largest = left;
	if (right <= arrSize && arr[right].priority > arr[largest].priority)
		largest = right;

	if (largest != i)
	{
		swap(arr[i], arr[largest]);
		max_heapify(arr, largest);
	}
}


void enqueue(Node arr[], Node val)
{
	// int i = 0;
	if (arrSize == MAX_LENGTH)
		return;

	arrSize++;
	int i = arrSize;
	arr[i] = val;

	while (i > 1 && arr[i / 2].priority < arr[i].priority)
	{
		swap(arr[i / 2], arr[i]);
		i = i / 2;
	}
}


Node dequeue(Node arr[])
{
	if (arrSize == 0)
		return {-1, -1};

	Node max = arr[1];
	arr[1] = arr[arrSize];
	arrSize--;

	max_heapify(arr, 1);

	return max;
}


int main()
{
	// connect cin, cout, just (use cin or cout) or (use scanf or printf)
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);

	int count = 0;
	cin >> count;

	for (int i = 0; i < count; ++i)
	{
		int x;
		cin >> x;

		if (x == 0)
		{
			Node out = dequeue(heap);
			cout << (out.priority == -1 ? 0 : out.priority) << "\n";
		}
		else
		{
			Node node = { x, x };
			enqueue(heap, node);
		}
	}

	return 0;
}