
/* qcamera::QCamera2HardwareInterface::processASDUpdate(cam_asd_decision_t) */

void __thiscall
qcamera::QCamera2HardwareInterface::processASDUpdate
          (QCamera2HardwareInterface *this,cam_asd_decision_t param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_58;
  undefined4 uStack84;
  undefined8 local_50;
  ulonglong local_48;
  undefined8 local_40;
  longlong lStack56;
  undefined8 local_30;
  undefined8 uStack40;
  int local_20;
  
  piVar5 = *(int **)(DAT_000bb0b0 + 0xbafa2);
  local_20 = *piVar5;
  if ((int)((uint)(byte)this[0x4b5] << 0x1a) < 0) {
    puVar2 = (undefined4 *)
             (**(code **)(this + 0x4c8))(0xffffffff,0xc,1,*(undefined4 *)(this + 0x4d0));
    if (puVar2 == (undefined4 *)0x0) {
      if (*(int *)(*(int *)(DAT_000bb0b4 + 0xbb05a) + 0x20) == 0) {
        uVar1 = 0xfffffff4;
      }
      else {
        mm_camera_debug_log(1,1,DAT_000bb0bc + 0xbb072,0x2094,DAT_000bb0b8 + 0xbb06a);
        uVar1 = 0xfffffff4;
      }
      goto LAB_000bafb0;
    }
    puVar3 = (undefined4 *)*puVar2;
    if (puVar3 == (undefined4 *)0x0) {
      if (*(int *)(*(int *)(DAT_000bb0c0 + 0xbb080) + 0x20) == 0) {
        uVar1 = 0x80000000;
      }
      else {
        mm_camera_debug_log(1,1,DAT_000bb0c8 + 0xbb098,0x209a,DAT_000bb0c4 + 0xbb090);
        uVar1 = 0x80000000;
      }
      goto LAB_000bafb0;
    }
    *puVar3 = 1;
    puVar3[1] = 4;
    puVar3[2] = param_1;
    uStack40 = 0;
    local_40 = 0;
    local_50 = 0;
    local_58 = 1;
    uStack84 = 0x2000;
    lStack56 = ZEXT48(puVar2) << 0x20;
    local_30 = CONCAT44(*(undefined4 *)(DAT_000bb0cc + 0xbb018),this);
    local_48 = ZEXT48(puVar2);
    iVar4 = QCameraCbNotifier::notifyCallback
                      ((QCameraCbNotifier *)(this + 0x854),(qcamera_callback_argm_t *)&local_58);
    if (iVar4 != 0) {
      if (*(int *)(*(int *)(DAT_000bb0d0 + 0xbb032) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000bb0d8 + 0xbb04a,0x20ac,DAT_000bb0d4 + 0xbb042);
      }
      (*(code *)puVar2[3])(puVar2);
    }
  }
  uVar1 = 0;
LAB_000bafb0:
  if (*piVar5 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

