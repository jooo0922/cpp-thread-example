#include "stdio.h"
#include <unistd.h> // 프로세스 관련 함수 사용을 위해 포함(Linux 및 MacOS 에서만 지원되는 헤더)

int main() {
  printf("process id is %d", getpid());
  return 0;
}
