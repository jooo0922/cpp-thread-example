#include <cstddef>
#include <pthread.h>
#include <stdio.h>
#include <unistd.h> // 프로세스 관련 함수 사용을 위해 포함(Linux 및 MacOS 에서만 지원되는 헤더)

/**
  단일 스레드가 수행할 작업을 정의한 함수
  주! pthread_create() 에 넘겨줄 함수는 반드시 void* 타입의 매개변수 하나를
  정의해야 함.
 */
void *foo(void *arg) {
  printf("process id is %d", getpid());
  return NULL;
}

int main() {
  // 스레드 생성
  pthread_t thread1;
  pthread_create(&thread1, NULL, foo, NULL);

  // 생성한 스레드가 작업을 완료해서 Main thread 에 복귀할 때까지 대기
  pthread_join(thread1, NULL);

  return 0;
}
