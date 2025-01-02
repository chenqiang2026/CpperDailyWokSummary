#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

pthread_mutex_t mymutex1 = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mymutex2 = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t mycond = PTHREAD_COND_INITIALIZER;
pthread_cond_t mycond1 = PTHREAD_COND_INITIALIZER;
 void *mythread1(void *param)
 {
  pthread_mutex_lock(&mymutex1);
  pthread_cond_wait(&mycond1,&mymutex1);
  fprintf(stderr,"this is mythread1.\n");
  pthread_mutex_unlock(&mymutex1);
  return NULL;
 }
 void *mythread2(void *param)
 {
  pthread_mutex_lock(&mymutex2);
  pthread_cond_wait(&mycond1,&mymutex2);
  fprintf(stderr,"this is mythread2.\n");
  pthread_mutex_unlock(&mymutex2);
  return NULL;
 }
 int main(int argc,char* argv[],char *envp[])
 {
  int i;
  pthread_t tid1,tid2;
  pthread_create(&tid1,NULL,mythread1,NULL);
  pthread_create(&tid2,NULL,mythread2,NULL);
  sleep(2);
  if(pthread_cond_broadcast(&mycond)){
  printf("error\n");
  return 1;
  }
  void *res;
  //pthread_join(tid1, &res);
  //pthread_join(tid2, &res);
  printf("this is main thread.\n");
  return 0;
 }