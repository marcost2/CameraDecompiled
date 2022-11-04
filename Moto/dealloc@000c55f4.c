
/* qcamera::QCameraMemory::dealloc() */

void __thiscall qcamera::QCameraMemory::dealloc(QCameraMemory *this)

{
  int *piVar1;
  undefined8 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int local_2c;
  int local_28;
  
  piVar1 = *(int **)(DAT_000c56c4 + 0xc5602);
  local_28 = *piVar1;
  if (this[5] != (QCameraMemory)0x0) {
    piVar3 = (int *)(this + 0xc);
    uVar4 = 0;
    do {
      iVar5 = *(int *)(this + 0x608);
      if (iVar5 == 0) {
        if (-1 < piVar3[-1]) {
          close(piVar3[-1]);
          piVar3[-1] = -1;
        }
        if (-1 < *piVar3) {
          local_2c = piVar3[1];
          ioctl(*piVar3,0xc0044901,&local_2c);
          close(*piVar3);
          *piVar3 = -1;
        }
        piVar3[1] = 0;
        piVar3[2] = 0;
      }
      else {
        iVar6 = *(int *)(this + 0x60c);
        pthread_mutex_lock((pthread_mutex_t *)(iVar5 + 100));
        iVar6 = *(int *)(iVar5 + iVar6 * 8 + 8);
        puVar2 = (undefined8 *)operator_new(0x20);
        uVar9 = *(undefined8 *)(piVar3 + 3);
        uVar7 = *(undefined8 *)(piVar3 + -1);
        uVar8 = *(undefined8 *)(piVar3 + 1);
        *(int *)((int)puVar2 + 0x1c) = iVar6;
        puVar2[2] = uVar9;
        *puVar2 = uVar7;
        puVar2[1] = uVar8;
        *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(iVar6 + 0x18);
        *(undefined8 **)(*(int *)(iVar6 + 0x18) + 0x1c) = puVar2;
        *(undefined8 **)(iVar6 + 0x18) = puVar2;
        pthread_mutex_unlock((pthread_mutex_t *)(iVar5 + 100));
      }
      piVar3 = piVar3 + 6;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (byte)this[5]);
  }
  if (*piVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

