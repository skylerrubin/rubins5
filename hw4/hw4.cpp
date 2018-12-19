#include <iostream>
#include <fstream>
#include <algorithm>

void swap(int *a, int *b)
{
    int swap = *a;
    *a = *b;
    *b = swap;
}
int partition(int arr[], int begin, int end)
{
  int pivot = arr[end];
  int index = begin;
  for(int i = begin; i < end; i++)
  {
    if( arr[i] <= pivot )
  {  swap(&arr[i], &arr[index]);
    index++;
}
  }
swap(&arr[index], &arr[end]);
return index;
}
void quicksort(int arr[], int begin, int end)
{
if( begin < end)
{
int index = partition(arr, begin, end);
quicksort(arr, begin, index-1);
quicksort(arr, index+1, end);
}
}
void binarySearch(int arr[], int n, int guess)
{
int min = 0;
int max = n-1;
int mid = (min+max)/2;
std::cout << "The binary search's first guess is the middle index of the whole sorted array" << '\n';
std::cout << "If guess is less than that value it looks at the first half from index " << min << " to " << mid-1 << '\n';
std::cout << "If guess is greater than that value it looks at the second half from index " << mid+1 << " to " << max << '\n';
std::cout << '\n';
std::cout << "Please input a number from the array you wish to search:" << '\n';
std::cin >> guess;
int *x;
x = std::find(arr, arr+15, guess);
 if (x != arr+15)
{
  for(int i = min; i < max; i++)
  std::cout << arr[i] << " ";
  std::cout << '\n';
    for(int i = min; i < max; i++)
{
if (arr[mid] == guess)
{
    std::cout << "The first guess is the middle value of this new array" << '\n';
    std::cout << "The number " << guess << " is in the array at index: " << mid << '\n';
return;
}
        else if (arr[mid] > guess)
        {
          std::cout << "The array is shortened to all values less than the middle index " << mid << '\n';
          for(int i = min; i <= mid-1; i++)
          std::cout << arr[i] << " ";
          std::cout << '\n';
        for(int i = min; i <= mid-1; i++)
        {
          int lowermid = (min+(mid-1))/2;
          if (arr[lowermid] == guess)
          {
            std::cout << "The first guess is the middle value of this new array" << '\n';
            std::cout << "The number " << guess << " is in the array at index: " << lowermid << '\n';
            return;
          }

          if (arr[lowermid] > guess)
          {
            std::cout << "If the guess is less than the middle value of this new array, we divide this array into two again" << '\n';
            for(int i = min; i <= lowermid-1; i++)
            std::cout << arr[i] << " ";
            std::cout << '\n';
            for (int i = min; i <= lowermid-1; i++)
            {
            int lowermid2 = (min+lowermid-1)/2;
            if (arr[lowermid2] == guess)
            {
              std::cout << "The search guesses the middle value of this array" << '\n';
              std::cout << "The number " << guess << " is in the array at index: " << lowermid2 << '\n';
              return;
            }
            if (arr[lowermid2] > guess)
            {
              std::cout << "If the guess is less than the value of index " << lowermid2 << '\n';
              std::cout << "The number " << guess << " is in the array by default at index: " << min << '\n';
              return;
            }
            if (arr[lowermid2] < guess)
            {
              std::cout << "If the guess is greater than the value of index " << lowermid2 << '\n';
              std::cout << "The number " << guess << " is in the array by default at index: " << lowermid-1 << '\n';
              return;
            }
          }
          }
          if (arr[lowermid] < guess)
          {
            std::cout << "If the guess is greater than the middle value of this new array, we divide this array into two again" << '\n';
            for(int i = lowermid+1; i <= mid-1; i++)
            std::cout << arr[i] << " ";
            std::cout << '\n';
          for (int i = lowermid+1; i <= mid-1; i++)
          {
            int uppermid1 = ((lowermid+1)+(mid-1))/2;
            if (arr[uppermid1] == guess)
            {
              std::cout << "The search guesses the middle value of this array" << '\n';
              std::cout << "The number " << guess << " is in the array at index: " << uppermid1 << '\n';
              return;
            }
            if (arr[uppermid1] > guess)
            {
              std::cout << "If the guess is less than the value of index " << uppermid1 << '\n';
              std::cout << "The number " << guess << " is in the array by default at index: " << lowermid+1 << '\n';
              return;
            }
            if (arr[uppermid1] < guess)
            {
              std::cout << "If the guess is greater than the value of index " << uppermid1 << '\n';
              std::cout << "The number " << guess << " is in the array at index: " << mid-1 << '\n';
              return;
            }
          }
        }
}
}
        else if (arr[mid] < guess)
        {
        std::cout << "The array is shortened to all values greater than the middle index " << mid << '\n';
          for(int i = mid+1; i < max; i++)
          std::cout << arr[i] << " ";
          std::cout << '\n';
        for (int i = mid+1; i < max; i++)
        {
        int uppermid = ((mid+1)+max)/2;
        if (arr[uppermid] == guess)
        {
          std::cout << "The search guesses the middle value of this array" << '\n';
          std::cout << "The number " << guess << " is in the array at index: " << uppermid << '\n';
          return;
        }
        if (arr[uppermid] > guess)
        {
          std::cout << "If the guess is less than the middle value of this new array, we divide this array into two again" << '\n';
          for(int i = mid+1; i < uppermid; i++)
          std::cout << arr[i] << " ";
          std::cout << '\n';
        for (int i = mid+1; i <= uppermid; i++)
        {
        int lowermid3 = ((mid+1)+(uppermid-1))/2;
        if (arr[lowermid3] == guess)
        {
          std::cout << "The search guesses the middle value of this array" << '\n';
          std::cout << "The number " << guess << " is in the array at index: " << lowermid3 << '\n';
          return;
        }
        if (arr[lowermid3] > guess)
        {
          std::cout << "If the guess is less than the value of index " << lowermid3 << '\n';
          std::cout << "The number " << guess << " is in the array by default at index: " << lowermid3-1 << '\n';
          return;
        }
        if (arr[lowermid3] < guess)
        {
          std::cout << "If the guess is greater than the value of index " << lowermid3 << '\n';
          std::cout << "The number " << guess << " is in the array at index: " << lowermid3+1 << '\n';
          return;
        }
      }
      }
      if (arr[uppermid] < guess)
      {
        std::cout << "If the guess is greater than the middle value of this new array, we divide this array into two again" << '\n';
        for(int i = uppermid+1; i < max; i++)
        std::cout << arr[i] << " ";
        std::cout << '\n';
      for (int i = uppermid+1; i < max; i++)
      {
        int uppermid2 = ((uppermid+1)+max)/2;
        if (arr[uppermid2] == guess)
        {
          std::cout << "The search guesses the middle value of this array" << '\n';
          std::cout << "The number " << guess << " is in the array at index: " << uppermid2 << '\n';
          return;
        }
        if (arr[uppermid2] < guess)
        {
          std::cout << "If the guess is greater than the value of index " << uppermid2 << '\n';
          std::cout << "The number " << guess << " is in the array at index: " << uppermid2+1 << '\n';
          return;
        }
        if (arr[uppermid2] > guess)
        {
          std::cout << "If the guess is less than the value of index " << uppermid2 << '\n';
          std::cout << "The number " << guess << " is in the array at index: " << uppermid2-1 << '\n';
          return;
        }
      }
    }
}
}
}
}
else
{
  std::cout << "The number " << guess << " you have entered is not in the array. Please try again" << '\n';
}
}
int main()
{
int n = 0;
int arr[100];
std::ifstream file;
file.open("integerseries.txt");
while(!file.eof())
{
file >> arr[n];
n++;
}
file.close();
std::cout << "The series of integers are: " << '\n';;
for (int i = 0; i < n-1; i++)
{
std::cout << arr[i] << " ";
}
std::cout << '\n';
std::cout << '\n';
std::cout << "After Quick Sorting the array becomes: " << '\n';
quicksort(arr, 0, 14);
for(int i = 0; i < 15; i++)
std::cout << arr[i] << " ";
std::cout << '\n';
int guess = 0;
std::cout << '\n';
binarySearch(arr,n,guess);
return 0;
}
