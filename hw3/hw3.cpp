#include <iostream>
#include <fstream>

void swap(int *a, int *b)
{
    int swap = *a;
    *a = *b;
    *b = swap;
}
void filteroutDuplicates(int arr[], int n)
{
  for (int a = 0; a < n; a++)
  {
    for (int b = a+1; b < n;)
    {
      if (arr[a]==arr[b])
      {
        for (int c = b; c < n; c++)
        {
          arr[c] = arr[c+1];
        }
        n--;
      }
      else
      {
        b++;
      }
    }
  }
  for ( int i = 0; i < n-1; i++)
  {
    std::cout << arr[i] << " ";
  }
  std::cout << '\n';
}
void displayArray(int arr[], int n)
{
  for (int i = 0; i < n-1; i++)
  {
  std::cout << arr[i] << " ";
}
  std::cout << '\n';
}
void performPass(int arr[], int n)
{
for (int i = 0; i < n-2; i++)
{
bool pass = true;
    while(pass)
  {
    pass = false;
      for(int j = 0; j < 1; j++)

          if( arr[j]>arr[j+1] )
       {
           swap(&arr[j], &arr[j+1]);
           pass = true;
         }
}
 std::cout << arr[i] << " ";
}
 std::cout << '\n';

 for (int i = 0; i < n-2; i++)
 {
 bool pass = true;
     while(pass)
   {
     pass = false;
       for(int j = 1; j < 2; j++)
           if( arr[j]>arr[j+1] )
        {
            swap(&arr[j], &arr[j+1]);
            pass = true;
          }
}
  std::cout << arr[i] << " ";
}
  std::cout << '\n';

  for (int i = 0; i < n-2; i++)
  {
  bool pass = true;
      while(pass)
    {
      pass = false;
        for(int j = 2; j < 3; j++)
            if( arr[j]>arr[j+1] )
         {
             swap(&arr[j], &arr[j+1]);
             pass = true;
           }
}
   std::cout << arr[i] << " ";
}
   std::cout << '\n';

   for (int i = 0; i < n-2; i++)
   {
   bool pass = true;
       while(pass)
     {
       pass = false;
         for(int j = 3; j < 4; j++)
             if( arr[j]>arr[j+1] )
          {
              swap(&arr[j], &arr[j+1]);
              pass = true;
            }
 }
    std::cout << arr[i] << " ";
 }
    std::cout << '\n';

    for (int i = 0; i < n-2; i++)
    {
    bool pass = true;
        while(pass)
      {
        pass = false;
          for(int j = 4; j < 5; j++)
              if( arr[j]>arr[j+1] )
           {
               swap(&arr[j], &arr[j+1]);
               pass = true;
             }
  }
     std::cout << arr[i] << " ";
  }
     std::cout << '\n';

     for (int i = 0; i < n-2; i++)
     {
     bool pass = true;
         while(pass)
       {
         pass = false;
           for(int j = 5; j < 6; j++)
               if( arr[j]>arr[j+1] )
            {
                swap(&arr[j], &arr[j+1]);
                pass = true;
              }
   }
      std::cout << arr[i] << " ";
   }
      std::cout << '\n';

      for (int i = 0; i < n-2; i++)
      {
      bool pass = true;
          while(pass)
        {
          pass = false;
            for(int j = 6; j < 7; j++)
                if( arr[j]>arr[j+1] )
             {
                 swap(&arr[j], &arr[j+1]);
                 pass = true;
               }
    }
       std::cout << arr[i] << " ";
    }
       std::cout << '\n';

       for (int i = 0; i < n-2; i++)
       {
       bool pass = true;
           while(pass)
         {
           pass = false;
             for(int j = 7; j < 8; j++)
                 if( arr[j]>arr[j+1] )
              {
                  swap(&arr[j], &arr[j+1]);
                  pass = true;
                }
     }
        std::cout << arr[i] << " ";
     }
        std::cout << '\n';

        for (int i = 0; i < n-2; i++)
        {
        bool pass = true;
            while(pass)
          {
            pass = false;
              for(int j = 8; j < 9; j++)
                  if( arr[j]>arr[j+1] )
               {
                   swap(&arr[j], &arr[j+1]);
                   pass = true;
                 }
      }
         std::cout << arr[i] << " ";
      }
         std::cout << '\n';
}
void displayPass(int arr[], int n)
{
  for (int i = 0; i < n-2; i++)
  {
  std::cout << arr[i] << " ";
}
  std::cout << '\n';
}
void bubbleSort(int arr[], int n)
{
  std::cout << "Bubble Sort Function from file of Array" << '\n';
  displayArray(arr, n);
  std::cout << '\n';
  std::cout << "Filtering out the Duplicates the Array becomes" << '\n';
  filteroutDuplicates(arr, n);
  std::cout << '\n';
  std::cout << "First Pass---------" << '\n';
  displayPass(arr, n);
  performPass(arr, n);
  std::cout << '\n';
  std::cout << "Second Pass--------" << '\n';
  displayPass(arr, n);
  performPass(arr, n);
  std::cout << '\n';
  std::cout << "Third Pass---------" << '\n';
  displayPass(arr, n);
  performPass(arr, n);
  std::cout << '\n';
  std::cout << "Fourth Pass--------" << '\n';
  displayPass(arr, n);
  performPass(arr, n);
  std::cout << '\n';
  std::cout << "Fifth Pass---------" << '\n';
  displayPass(arr, n);
  performPass(arr, n);
  std::cout << '\n';
  std::cout << "Sixth Pass---------" << '\n';
  displayPass(arr, n);
  performPass(arr, n);
  std::cout << '\n';
  std::cout << "Seventh Pass-------" << '\n';
  displayPass(arr, n);
  performPass(arr, n);
  std::cout << '\n';
  std::cout << "Eighth Pass--------" << '\n';
  displayPass(arr, n);
  performPass(arr, n);
  std::cout << '\n';
  std::cout << "Final Pass---------" << '\n';
  displayPass(arr, n);
  performPass(arr, n);
  std::cout << '\n';
}
int main()
{
  int n = 0;
  int arr[100];
  std::ifstream file;
  file.open("number.txt");
  while(!file.eof())
  {
    file >> arr[n];
    n++;
  }
  file.close();
  bubbleSort(arr, n);
  return 0;
}
