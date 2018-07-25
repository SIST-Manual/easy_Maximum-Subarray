#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>

void parsing(const std::string & inString, std::vector<int> & outInt)
{
  size_t ptr1 = 0;
  size_t ptr2 = 0;
  ptr1 = inString.find_first_not_of("[], \r\n\t", ptr2);
  ptr2 = inString.find_first_of("[], \r\n\t", ptr1);
  while (ptr1 != std::string::npos && ptr2 > ptr1) {
    int temp;
    sscanf(inString.substr(ptr1, ptr2 - ptr1).c_str(), "%d", &temp);
    outInt.push_back(temp);
    ptr1 = inString.find_first_not_of("[], \r\n\t", ptr2);
    ptr2 = inString.find_first_of("[], \r\n\t", ptr1);
  }
}

int main()
{
  char buf[4096];
  fgets(buf, 4095, stdin);
  std::vector<int> numbers;
  parsing(static_cast<std::string>(buf), numbers);

  int now_sum = numbers.at(0);
  int sum_max = now_sum;
  for (auto iter = numbers.begin() + 1; iter != numbers.end(); ++iter) {
    now_sum = std::max((*iter) + now_sum, (*iter));
    sum_max = std::max(sum_max, now_sum);
  }

  printf("%d\n", sum_max);
  return 0;
}
