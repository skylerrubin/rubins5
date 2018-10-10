#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string findSum(std::string s1, std::string s2)
{

int size1 = s1.size();
int size2 = s2.size();
int carry = 0;
std::string s3;

  if ( size2==size1 )
{
      for (int a=size2-1; a>=0; a--)
    {
          int sum = ((s1[a]-'0') + (s2[a]-'0') + carry);
          s3.push_back(sum%10 + '0');
          carry = sum/10;
    }

  if (carry)
  s3.push_back(carry+'0');

  std::reverse(s3.begin(), s3.end());
}

  else if ( size2>size1 )
{

  std::string str1 = std::string(size2 - s1.size(), '0') + s1;

      for (int a=size2-1; a>=0; a--)
    {
          int sum = ((str1[a]-'0') + (s2[a]-'0') + carry);
          s3.push_back(sum%10 + '0');
          carry = sum/10;
    }
  if (carry)
  s3.push_back(carry+'0');

  std::reverse(s3.begin(), s3.end());

}

  else //( size1>size2 )
{

  std::string str2 = std::string(size1 - s2.size(), '0') + s2;
      for (int a=size1-1; a>=0; a--)
  {
          int sum = ((s1[a]-'0') + (str2[a]-'0') + carry);
          s3.push_back(sum%10 + '0');
          carry = sum/10;
  }
    if (carry)
    s3.push_back(carry+'0');

    std::reverse(s3.begin(), s3.end());

}
  std::cout << "The result of the two is: " << s3 << '\n';
  return s3;
}
int main()
{
  std::string s1,s2;
  std::cout << "Please enter the first large number" << '\n';
  std::cin >> s1;
  std::cout << "Please enter the second large number" << '\n';
  std::cin >> s2;
  std::cout << findSum(s1, s2);
  return 0;
}
