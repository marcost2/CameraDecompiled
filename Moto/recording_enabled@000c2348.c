
/* qcamera::QCameraMuxer::recording_enabled(camera_device*) */

undefined4 __thiscall
qcamera::QCameraMuxer::recording_enabled(QCameraMuxer *this,camera_device *param_1)

{
  camera_device *extraout_r1;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_000c2448 + 0xc2354);
  if (*(int *)(iVar4 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c2450 + 0xc236c,0x3e1,DAT_000c244c + 0xc2364);
    param_1 = extraout_r1;
  }
  if (**(int **)(DAT_000c2454 + 0xc2374) == 0) {
    if (*(int *)(iVar4 + 0x20) == 0) {
      return 0xffffffed;
    }
    uVar2 = 0x3e2;
    iVar4 = DAT_000c2458 + 0xc23ac;
    iVar1 = DAT_000c245c + 0xc23b4;
  }
  else {
    if (this != (QCameraMuxer *)0x0) {
      param_1 = *(camera_device **)(this + 0x44);
    }
    if (this != (QCameraMuxer *)0x0 && param_1 != (camera_device *)0x0) {
      if (*(uint *)(param_1 + 0x54) != 0) {
        uVar3 = 0;
        do {
          iVar1 = *(int *)(**(int **)(DAT_000c2454 + 0xc2374) + 0x2c) +
                  *(int *)(param_1 + uVar3 * 4 + 0x5c) * 0x38;
          if (iVar1 == 0) {
            if (*(int *)(iVar4 + 0x20) == 0) {
              return 0xffffffed;
            }
            uVar2 = 0x3e9;
            iVar4 = DAT_000c2468 + 0xc2418;
            iVar1 = DAT_000c246c + 0xc2420;
            goto LAB_000c23b2;
          }
          if (*(int *)(iVar1 + 0x30) == 0) {
            if (*(int *)(iVar4 + 0x20) == 0) {
              return 0xffffffed;
            }
            uVar2 = 0x3ec;
            iVar4 = DAT_000c2470 + 0xc2432;
            iVar1 = DAT_000c2474 + 0xc243a;
            goto LAB_000c23b2;
          }
          if (*(int *)(iVar1 + 0x10) == 0) {
            uVar2 = (*(code *)PTR_recording_enabled_00119f78)(*(undefined4 *)(iVar1 + 0x34));
            return uVar2;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(param_1 + 0x54));
      }
      if (*(int *)(iVar4 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000c247c + 0xc23fe,0x3f2,DAT_000c2478 + 0xc23f6);
      }
      return 0;
    }
    if (*(int *)(iVar4 + 0x20) == 0) {
      return 0xffffffed;
    }
    uVar2 = 0x3e5;
    iVar4 = DAT_000c2460 + 0xc2394;
    iVar1 = DAT_000c2464 + 0xc239c;
  }
LAB_000c23b2:
  mm_camera_debug_log(1,1,iVar1,uVar2,iVar4);
  return 0xffffffed;
}

