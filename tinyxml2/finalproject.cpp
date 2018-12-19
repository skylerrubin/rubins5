#include <iostream>
#include "tinyxml2.h"
using namespace tinyxml2;

int main()
{
  static const char* xml =
  "<?xml version=\"1.0\" encoding=\"utf-8\" ?>"
  "<bookstore>"
      "<book statement=\"My first book I want to buy\">'People of the Future' written by George Clooney about 2060. </book>"
      "<book statement=\"My second book I want is\">'The Life of Freddie Mercury' about is life as the lead vocalist of Queen. </book>"
      "<book statement=\"The third book I want is\"> 'The New York Mets' of their championship win of the 1986 World Series.</book>"
      "</bookstore>";

XMLDocument doc;
doc.Parse(xml);
XMLHandle docHandle(&doc);
XMLElement *book = docHandle.FirstChildElement("bookstore").ToElement();

if(book)
{
  for(XMLNode *node = book->FirstChildElement(); node; node = node->NextSibling())
    {
      XMLElement *element = node->ToElement();
          const char *statement = element->Attribute("statement");
          if(statement)
          {
          std::cout<<statement<<": ";
          }
          std::cout<<element->GetText();
    }
}
return 0;
}
