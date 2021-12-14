#include <iostream>
#include "Url.h"


int main()
{
URL u("http://www.google.com:8080/new/posts");
std::cout<<"Scheme: "<<u.getScheme()<<std::endl;
std::cout<<"Authority: "<<u.getAuthority()<<std::endl;
std::cout<<"Path: "<<u.getPath()<<std::endl;
std::cout<<"Complete URL: "<<u.getCompleteURL()<<std::endl;
  
return 0;
return 0;
}
Url.h

#include <string>
class URL {
private:
std::string scheme;
std::string authority;
std::string path;
  
public:
URL(std::string url);
  
std::string getScheme();

  
std::string getAuthority();
  
std::string getPath();
  
std::string getCompleteURL() ;
};
Url.cpp

#include "Url.h"

URL::URL(std::string url) {
int firstColonIndex = url.find(":");
scheme = url.substr(0, firstColonIndex);
std::string restUrl = url.substr(firstColonIndex+3, url.length());
int thirdSlashIndex = restUrl.find("/");
authority = url.substr(firstColonIndex+3, thirdSlashIndex);
path = restUrl.substr(thirdSlashIndex, url.length());
}
std::string URL::getScheme() {
return scheme;
}
std::string URL::getAuthority() {
return authority;
}
std::string URL::getPath() {
return path;
}
std::string URL::getCompleteURL() {
return scheme+"://"+authority+path;
}
