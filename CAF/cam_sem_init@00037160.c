
/* cam_sem_init(cam_semaphore_t*, int) */

void cam_sem_init(cam_semaphore_t *param_1,int param_2)

{
  int *piVar1;
  pthread_condattr_t pStack28;
  int local_18;
  
  piVar1 = *(int **)(DAT_000371ac + 0x3716c);
  local_18 = *piVar1;
  pthread_condattr_init(&pStack28);
  pthread_condattr_setclock(&pStack28,1);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 4),(pthread_mutexattr_t *)0x0);
  pthread_cond_init((pthread_cond_t *)(param_1 + 8),&pStack28);
  pthread_condattr_destroy(&pStack28);
  *(undefined4 *)param_1 = 0;
  if (*piVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

