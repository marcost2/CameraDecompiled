
/* qcamera::QCameraParametersIntf::getDynamicImgData() */

void qcamera::QCameraParametersIntf::getDynamicImgData(void)

{
  undefined8 *in_r0;
  int iVar1;
  int *in_r1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pthread_mutex_lock((pthread_mutex_t *)(in_r1 + 1));
  iVar1 = *in_r1;
  if (iVar1 != 0) {
    uVar4 = *(undefined8 *)(iVar1 + 2000);
    uVar2 = *(undefined8 *)(iVar1 + 0x7d8);
    uVar3 = *(undefined8 *)(iVar1 + 0x7e0);
    uVar5 = *(undefined8 *)(iVar1 + 0x7e8);
    uVar6 = *(undefined8 *)(iVar1 + 0x7f0);
    *in_r0 = *(undefined8 *)(iVar1 + 0x7c8);
    in_r0[1] = uVar4;
    in_r0[2] = uVar2;
    in_r0[3] = uVar3;
    in_r0[4] = uVar5;
    in_r0[5] = uVar6;
    pthread_mutex_unlock((pthread_mutex_t *)(in_r1 + 1));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe3c4 + 0xfe3be,DAT_000fe3c8 + 0xfe3c0,DAT_000fe3cc + 0xfe3c2);
}

