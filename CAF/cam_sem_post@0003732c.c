
/* cam_sem_post(cam_semaphore_t*) */

void cam_sem_post(cam_semaphore_t *param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 4));
  *(int *)param_1 = *(int *)param_1 + 1;
  pthread_cond_signal((pthread_cond_t *)(param_1 + 8));
  __ThumbV7PILongThunk_pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 4));
  return;
}

