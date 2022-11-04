
/* qcamera::QCamera3HardwareInterface::setBufferErrorStatus(qcamera::QCamera3Channel*, unsigned int,
   camera3_buffer_status) */

void __thiscall
qcamera::QCamera3HardwareInterface::setBufferErrorStatus
          (QCamera3HardwareInterface *this,QCamera3Channel *param_1,uint param_2,
          camera3_buffer_status param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  iVar3 = *(int *)(DAT_000986ec + 0x9864c);
  if (*(int *)(iVar3 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000986f4 + 0x98668,0x3087,DAT_000986f0 + 0x9865c,param_1,param_2,
                        param_3);
  }
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x3f0));
  puVar1 = *(uint **)(this + 0x270);
  puVar4 = (uint *)puVar1[7];
  if (puVar4 != puVar1) {
    iVar2 = DAT_000986f8 + 0x9868a;
    iVar5 = DAT_000986fc + 0x9868c;
    do {
      if (*puVar4 == param_2) {
        piVar7 = (int *)puVar4[5];
        for (piVar6 = (int *)piVar7[4]; piVar6 != piVar7; piVar6 = (int *)piVar6[4]) {
          if (*(QCamera3Channel **)(*piVar6 + 0x18) == param_1) {
            if (*(int *)(iVar3 + 0x34) != 0) {
              mm_camera_debug_log(1,6,iVar5,0x308f,iVar2,param_1,param_2,param_3);
            }
            piVar6[2] = 1;
          }
        }
      }
      puVar4 = (uint *)puVar4[7];
    } while (puVar4 != puVar1);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x3f0));
  return;
}

