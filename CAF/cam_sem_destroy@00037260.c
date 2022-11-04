
/* cam_sem_destroy(cam_semaphore_t*) */

void cam_sem_destroy(cam_semaphore_t *param_1)

{
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 4));
  pthread_cond_destroy((pthread_cond_t *)(param_1 + 8));
  *(undefined4 *)param_1 = 0;
  return;
}

