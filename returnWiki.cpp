#include <iostream>

std::string findWiki(std::string urlList[]);

int main() {
  std::string strArr [4] = {"https://www.khanacademy.org/humanities/ap-art-history/later-europe-and-americas/enlightenment-revolution/a/david-oath-of-the-horatii",
  "https://www.google.com?s=wikipedia+hello","http://en.wikipedia.org/wiki/Oath_of_the_Horatii", "https://www.google.com?s=wikipedia+hello"};
  std::cout << findWiki(strArr);
}

std::string findWiki (std::string urlList[]) {
  size_t size = sizeof(*urlList);
  std::string wiki = "wikipedia.org";
  bool found = false;
  size_t startingIndex;

  for (size_t i = 0; i < size && !found; i++) {
    if (urlList[i].find(wiki) != std::string::npos) {
      startingIndex = i;
      found = true;
    }
  }

  return urlList[startingIndex];
}
