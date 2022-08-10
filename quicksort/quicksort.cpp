int partition (int* arr, int low, int high);
void quicksort (int* arr, int low, int high);

void quicksort (int* arr, int low, int high)
{
  if (low >= high) return;
  int position = partition(arr, low, high);
  quicksort(arr, low, position-1);
  quicksort(arr, position+1, high);
}

int partition (int* arr, int low, int high)
{
  int pivot = arr[low];
  while (low < high) {
    while (low<high && arr[high]>=pivot) high--;
    arr[low] = arr[high];
    while (low<high && arr[low]<pivot) low++;
    arr[high] = arr[low];
  }
  arr[low] = pivot;

  return low;
}