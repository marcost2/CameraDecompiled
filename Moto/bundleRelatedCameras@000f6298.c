
/* qcamera::QCameraParameters::bundleRelatedCameras(bool, unsigned int) */

undefined4 __thiscall
qcamera::QCameraParameters::bundleRelatedCameras(QCameraParameters *this,bool param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(this + 0x1d8) == 0) {
    if (*(int *)(*(int *)(DAT_000f6354 + 0xf6314) + 0x20) == 0) {
      return 0xffffffed;
    }
    uVar1 = 0x3376;
    iVar3 = DAT_000f6358 + 0xf6324;
    iVar2 = DAT_000f635c + 0xf632c;
  }
  else {
    iVar3 = *(int *)(DAT_000f6360 + 0xf62ae);
    if (*(int *)(iVar3 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000f6368 + 0xf62ca,0x337b,DAT_000f6364 + 0xf62be,param_1,param_2);
    }
    if (*(undefined4 **)(this + 0x1e8) != (undefined4 *)0x0) {
      uVar1 = 2;
      if (param_1 != false) {
        uVar1 = 1;
      }
      **(undefined4 **)(this + 0x1e8) = uVar1;
      *(undefined4 *)(*(int *)(this + 0x1e8) + 8) = *(undefined4 *)(this + 500);
      *(undefined4 *)(*(int *)(this + 0x1e8) + 4) = *(undefined4 *)(this + 0x1f0);
      *(uint *)(*(int *)(this + 0x1e8) + 0xc) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000f630c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)((*(undefined4 **)(this + 0x1d8))[1] + 0x94))
                        (**(undefined4 **)(this + 0x1d8),*(undefined4 *)(this + 0x1e8));
      return uVar1;
    }
    if (*(int *)(iVar3 + 0x20) == 0) {
      return 0xffffffed;
    }
    uVar1 = 0x338a;
    iVar3 = DAT_000f636c + 0xf633c;
    iVar2 = DAT_000f6370 + 0xf6348;
  }
  mm_camera_debug_log(1,1,iVar2,uVar1,iVar3);
  return 0xffffffed;
}

