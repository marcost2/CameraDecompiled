
/* qcamera::Int_Pic_thread(void*) */

void qcamera::Int_Pic_thread(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  bool local_71;
  undefined8 local_70;
  undefined8 uStack104;
  undefined8 local_60;
  undefined8 uStack88;
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 local_40;
  undefined8 uStack56;
  undefined8 local_30;
  undefined4 uStack40;
  undefined4 local_24;
  undefined4 uStack32;
  undefined8 uStack28;
  int local_14;
  
  piVar3 = *(int **)(DAT_000b89c0 + 0xb8922);
  local_14 = *piVar3;
  if (param_1 == (void *)0x0) {
    if (*(int *)(*(int *)(DAT_000b89c4 + 0xb897a) + 0x20) == 0) {
      uVar2 = 0xffffffea;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000b89cc + 0xb8992,0x1955,DAT_000b89c8 + 0xb898a);
      uVar2 = 0xffffffea;
    }
  }
  else {
    local_71 = false;
    local_30 = 0;
    uStack40 = 0;
    local_40 = 0;
    uStack56 = 0;
    local_50 = 0;
    uStack72 = 0;
    local_60 = 0;
    uStack88 = 0;
    local_70 = 0;
    uStack104 = 0;
    local_24 = 0;
    uStack32 = 0;
    uStack28 = 0;
    iVar1 = QCamera2HardwareInterface::takeBackendPic_internal((bool *)param_1,&local_71);
    if (iVar1 == 0) {
      QCamera2HardwareInterface::checkIntPicPending
                ((QCamera2HardwareInterface *)param_1,local_71,(char *)&local_70);
    }
    else {
      QCamera2HardwareInterface::clearIntPendingEvents((QCamera2HardwareInterface *)param_1);
    }
    uVar2 = 0;
  }
  if (*piVar3 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

