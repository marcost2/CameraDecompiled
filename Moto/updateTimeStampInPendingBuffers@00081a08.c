
/* qcamera::QCamera3HardwareInterface::updateTimeStampInPendingBuffers(unsigned int, long long) */

void qcamera::QCamera3HardwareInterface::updateTimeStampInPendingBuffers
               (uint param_1,longlong param_2)

{
  int *piVar1;
  int in_r1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined local_28 [8];
  int local_20;
  
  piVar4 = *(int **)(DAT_00081a70 + 0x81a1a);
  local_20 = *piVar4;
  piVar1 = *(int **)(param_1 + 0x270);
  piVar3 = (int *)piVar1[7];
  if (piVar3 != piVar1) {
    do {
      if ((*piVar3 == in_r1) && (iVar2 = *(int *)(piVar3[5] + 0x10), iVar2 != piVar3[5])) {
        do {
          setMetaData(**(undefined4 **)(iVar2 + 4),1,local_28);
          iVar2 = *(int *)(iVar2 + 0x10);
        } while (iVar2 != piVar3[5]);
        piVar1 = *(int **)(param_1 + 0x270);
      }
      piVar3 = (int *)piVar3[7];
    } while (piVar3 != piVar1);
  }
  if (*piVar4 != local_20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

