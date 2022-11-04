
/* qcamera::QCameraMemoryPool::clear() */

void __thiscall qcamera::QCameraMemoryPool::clear(QCameraMemoryPool *this)

{
  int **ppiVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int local_2c;
  int local_28;
  
  piVar3 = *(int **)(DAT_000c58e8 + 0xc5828);
  local_28 = *piVar3;
  pthread_mutex_lock((pthread_mutex_t *)(this + 100));
  iVar4 = 0;
  do {
    ppiVar1 = (int **)(this + iVar4 * 8 + 8);
    piVar6 = *ppiVar1;
    piVar5 = (int *)piVar6[7];
    if (piVar5 != piVar6) {
      do {
        if (-1 < *piVar5) {
          close(*piVar5);
          *piVar5 = -1;
        }
        if (-1 < piVar5[1]) {
          local_2c = piVar5[2];
          ioctl(piVar5[1],0xc0044901,&local_2c);
          close(piVar5[1]);
          piVar5[1] = -1;
        }
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5 = (int *)piVar5[7];
      } while (piVar5 != *ppiVar1);
      piVar6 = (int *)piVar5[7];
      piVar2 = piVar6;
      if (piVar6 != piVar5) {
        do {
          piVar6 = (int *)piVar2[7];
          if (piVar2 != (int *)0x0) {
            operator_delete(piVar2);
            piVar5 = *ppiVar1;
          }
          piVar2 = piVar6;
        } while (piVar6 != piVar5);
      }
    }
    piVar6[6] = (int)piVar6;
    iVar4 = iVar4 + 1;
    (*ppiVar1)[7] = (int)*ppiVar1;
  } while (iVar4 != 0xc);
  pthread_mutex_unlock((pthread_mutex_t *)(this + 100));
  if (*piVar3 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

