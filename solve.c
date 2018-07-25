#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define max(A,B) (((A) > (B)) ? (A) : (B)) 

int parse_and_malloc(const char *input, int **nums)
{
  const char *ptr = input;
  int nums_num = 1;
  while (*ptr != '\0') {
    if (',' == *ptr) nums_num++;
    ptr++;
  }
  *nums = (int *)malloc(nums_num * sizeof(int));
  ptr = input;
  int nums_ptr = 0;
  bool same_number = false;
  while (*ptr != '\0') {
    switch (*ptr) {
      case '[':
      case ']':
      case ',':
      case ' ':
      case '\r':
      case '\n':
      case '\t':
        same_number = false;
        break;
      default:
        if (!same_number) {
          sscanf(ptr, "%d", &(*nums)[nums_ptr++]);
          same_number = true;
        }
        break;
    }
    ptr++;
  }
  return nums_num;
}

int main()
{
  char buf[4096];
  fgets(buf, 4095, stdin);
  int *numbers;
  int num_size = parse_and_malloc(buf, &numbers);
  
  long long now_sum = numbers[0];
  long long sum_max = numbers[0];
  for (int i = 1; i < num_size; i++) {
    now_sum = max(now_sum + numbers[i], numbers[i]);
    sum_max = max(sum_max, now_sum);
  }
  printf("%lld\n", sum_max);

  free(numbers);
  return 0;
}
