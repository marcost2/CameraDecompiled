
/* qcamera::QCameraPerfLock::lock_acq() */

int __thiscall qcamera::QCameraPerfLock::lock_acq(QCameraPerfLock *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  undefined8 local_28;
  undefined4 local_20;
  int local_1c;
  
  piVar4 = *(int **)(DAT_0007d400 + 0x7d2e2);
  local_1c = *piVar4;
  iVar3 = *(int *)(DAT_0007d404 + 0x7d2f0);
  if (*(int *)(iVar3 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0007d40c + 0x7d308,0x15a,DAT_0007d408 + 0x7d300);
  }
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x10));
  if (*(int *)(this + 0xc) == 0) {
    iVar2 = -1;
  }
  else {
    local_28 = *(undefined8 *)(DAT_0007d410 + 0x7d31e);
    local_20 = *(undefined4 *)(DAT_0007d410 + 0x7d326);
    uVar1 = (uint)(byte)this[0x24];
    bVar5 = uVar1 != 0;
    if (bVar5) {
      uVar1 = *(uint *)(this + 0x1c);
    }
    if (bVar5 && uVar1 != 0) {
      (**(code **)(uVar1 + 0x88))(uVar1,*(undefined4 *)(this + 0x20),DAT_0007d414 + 0x7d344);
    }
    if ((*(code **)this == (code *)0x0) || (-1 < *(int *)(this + 0x14))) {
      iVar2 = -1;
    }
    else {
      iVar2 = (**(code **)this)(*(int *)(this + 0x14),1000,&local_28,3);
      if (*(int *)(iVar3 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_0007d41c + 0x7d3d0,0x16c,DAT_0007d418 + 0x7d3c6,iVar2);
      }
      if (iVar2 < 0) {
        if (*(int *)(iVar3 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_0007d424 + 0x7d3f6,0x16e,DAT_0007d420 + 0x7d3ee);
        }
      }
      else {
        *(int *)(this + 0x14) = iVar2;
      }
    }
    if (*(int *)(iVar3 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_0007d42c + 0x7d370,0x173,DAT_0007d428 + 0x7d364,
                          *(undefined4 *)(this + 0x14));
    }
  }
  if (*(int *)(iVar3 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0007d434 + 0x7d390,0x176,DAT_0007d430 + 0x7d388);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x10));
  if (*piVar4 != local_1c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}

