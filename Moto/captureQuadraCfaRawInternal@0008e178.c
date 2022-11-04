
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera3HardwareInterface::captureQuadraCfaRawInternal(camera3_capture_request*) */

int __thiscall
qcamera::QCamera3HardwareInterface::captureQuadraCfaRawInternal
          (QCamera3HardwareInterface *this,camera3_capture_request *param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  void *pvVar9;
  int *this_00;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined auStack112 [4];
  int local_6c;
  uint local_68;
  undefined4 uStack100;
  undefined8 local_60;
  undefined8 uStack88;
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 local_40;
  undefined8 uStack56;
  undefined4 local_30;
  undefined4 uStack44;
  int local_28;
  
  piVar8 = *(int **)(DAT_0008e3c8 + 0x8e188);
  local_28 = *piVar8;
  iVar10 = *(int *)(DAT_0008e3cc + 0x8e192);
  if (*(int *)(iVar10 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0008e3d4 + 0x8e1ae,0x1192,DAT_0008e3d0 + 0x8e1a6);
  }
  iVar1 = switchStreamConfigInternal((uint)this);
  if (iVar1 == 0) {
    (**(code **)(**(int **)(this + 0x8c) + 0x28))
              (*(int **)(this + 0x8c),0,*(undefined4 *)param_1,auStack112);
    (**(code **)(**(int **)(this + 0x117f30) + 0x28))
              (*(int **)(this + 0x117f30),0,*(undefined4 *)param_1,auStack112);
    local_40 = 0;
    uStack56 = 0;
    local_50 = 0;
    uStack72 = 0;
    local_60 = 0;
    uStack88 = 0;
    local_30 = 0;
    uStack44 = 0;
    local_6c = 1;
    this_00 = *(int **)(this + 0x117f30);
    uVar2 = (**(code **)(*this_00 + 0x20))(this_00);
    local_68 = QCamera3Channel::getStreamID((QCamera3Channel *)this_00,uVar2);
    uStack100 = 0xffffffff;
    uVar11 = 1;
    uVar12 = 0;
    uVar4 = local_30;
    uVar7 = uStack44;
    setFrameParameters((camera3_capture_request *)this,(cam_stream_ID_t)param_1,local_6c,local_68);
    (**(code **)((*(undefined4 **)(this + 100))[1] + 0x18))
              (**(undefined4 **)(this + 100),*(undefined4 *)(this + 0x1b4));
    QCamera3QCfaRawChannel::waitCaptureDone(*(QCamera3QCfaRawChannel **)(this + 0x117f30));
    if (*(int *)(iVar10 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_0008e3e4 + 0x8e310,0x11b0,DAT_0008e3e0 + 0x8e308,
                          (undefined4)local_60,local_60._4_4_,(undefined4)uStack88,uStack88._4_4_,
                          (undefined4)local_50,local_50._4_4_,(undefined4)uStack72,uStack72._4_4_,
                          (undefined4)local_40,local_40._4_4_,(undefined4)uStack56,uStack56._4_4_,
                          uVar4,uVar7,uVar11,uVar12);
    }
    (**(code **)(**(int **)(this + 0x117f30) + 0x10))();
    (**(code **)(**(int **)(this + 0x8c) + 0x10))();
    if (*(int *)(this + 0xf4) != 0) {
      (**(code **)((*(undefined4 **)(this + 100))[1] + 0x68))(**(undefined4 **)(this + 100));
    }
    QCamera3Channel::destroy((QCamera3Channel *)*(int **)(this + 0x117f30));
    if (*(int **)(this + 0x8c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x8c) + 4))();
    }
    *(undefined4 *)(this + 0x8c) = 0;
    pvVar5 = *(void **)(this + 0x3fc);
    pvVar3 = *(void **)((int)pvVar5 + 8);
    pvVar9 = pvVar5;
    if (*(void **)((int)pvVar5 + 8) != pvVar5) {
      do {
        pvVar9 = *(void **)((int)pvVar3 + 8);
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
          pvVar5 = *(void **)(this + 0x3fc);
        }
        pvVar3 = pvVar9;
      } while (pvVar9 != pvVar5);
    }
    *(void **)((int)pvVar9 + 4) = pvVar9;
    *(int *)(*(int *)(this + 0x3fc) + 8) = *(int *)(this + 0x3fc);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x3f0));
    configureStreamsPerfLocked(this,(camera3_stream_configuration *)(this + 0x118018));
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x3f0));
    if (*(int *)(iVar10 + 0x2c) == 0) goto LAB_0008e3b2;
    uVar4 = 4;
    uVar7 = 0x11c7;
    iVar10 = DAT_0008e3e8 + 0x8e3a8;
    iVar6 = DAT_0008e3ec + 0x8e3b0;
  }
  else {
    if (*(int *)(iVar10 + 0x20) == 0) goto LAB_0008e3b2;
    uVar4 = 1;
    uVar7 = 0x1198;
    iVar10 = DAT_0008e3d8 + 0x8e1d0;
    iVar6 = DAT_0008e3dc + 0x8e1d8;
  }
  mm_camera_debug_log(1,uVar4,iVar6,uVar7,iVar10);
LAB_0008e3b2:
  if (*piVar8 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}

