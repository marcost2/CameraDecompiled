
/* cam_sem_wait(cam_semaphore_t*) */

int cam_sem_wait(cam_semaphore_t *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  int iVar2;
  
  __mutex = (pthread_mutex_t *)(param_1 + 4);
  pthread_mutex_lock(__mutex);
  iVar1 = *(int *)param_1;
  if (iVar1 == 0) {
    do {
      iVar2 = pthread_cond_wait((pthread_cond_t *)(param_1 + 8),__mutex);
      iVar1 = *(int *)param_1;
    } while (iVar1 == 0);
  }
  else {
    iVar2 = 0;
  }
  *(int *)param_1 = iVar1 + -1;
  pthread_mutex_unlock(__mutex);
  return iVar2;
}

