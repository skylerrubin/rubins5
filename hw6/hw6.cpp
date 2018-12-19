//THIS CODE DOESNT COMPILE

#include <iostream>
#include "hw6.h"
using namespace std;



class database: public userdata
{
int user_zipcode;
std::string user_bloodtype;
std::string user_address;

public:
  int get_zipcode();
  std::string get_bloodtype();
  std::string get_address();

  void get_id(int input_id);
  void get_name(std::string input_name);
  void get_phonenumber(std::string input_phonenumber);
  void get_zipcode(int input_zipcode;
  void get_bloodtype(std::string input_bloodtype);
  void get_address(std::string input_address);
};

void get_id(int input_id)
{
  int input_id;
  std::cout << "ID: " << input_id << '\n';
  return input_id;
}
void std::string get_name(std::string input_name);
{
  std::string input_name = "John Adams";
  std::cout << "Name: " << input_name << '\n';
  return input_name;
}
database::userdata(int & input_zipcode, std::string input_bloodtype, std::string input_address)
{
  user_zipcode = input_zipcode;
  user_bloodtype = input_bloodtype;
  user_address = input_address;
}

int userdata::get_zipcode()
{
  return user_zipcode;
}

std::string userdata::get_bloodtype()
{
  return user_bloodtype;
}

std::string userdata::get_address()
{
  return user_addressr;
}
int main()
{
  get_id();
  get_name();
  get_phonenumber();
  get_zipcode();
  get_bloodtype();
  get_address();
  std::cout << "5 entries are: " << '\n';
}
return 0;
