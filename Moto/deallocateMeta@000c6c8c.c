
/* qcamera::QCameraVideoMemory::deallocateMeta() */

void __thiscall qcamera::QCameraVideoMemory::deallocateMeta(QCameraVideoMemory *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  
  if (this[0x820] != (QCameraVideoMemory)0x0) {
    iVar9 = *(int *)(DAT_000c6d24 + 0xc6caa);
    iVar3 = DAT_000c6d28 + 0xc6cb2;
    iVar4 = DAT_000c6d2c + 0xc6cb8;
    iVar5 = DAT_000c6d30 + 0xc6cbe;
    iVar1 = 0x1c8;
    piVar8 = (int *)(this + 0x720);
    do {
      if (piVar8[0x43] == 0) {
        if (*(int *)(iVar9 + 0x20) != 0) {
          uVar7 = 0x615;
          iVar2 = iVar3;
          goto LAB_000c6cf6;
        }
      }
      else {
        iVar2 = native_handle_delete();
        if ((iVar2 != 0) && (*(int *)(iVar9 + 0x20) != 0)) {
          uVar7 = 0x612;
          iVar2 = iVar5;
LAB_000c6cf6:
          mm_camera_debug_log(1,1,iVar4,uVar7,iVar2);
        }
      }
      piVar8[0x43] = 0;
      (**(code **)(*piVar8 + 0xc))();
      *piVar8 = 0;
      uVar6 = iVar1 - 0x1c7;
      iVar1 = iVar1 + 1;
      piVar8 = piVar8 + 1;
    } while (uVar6 < (byte)this[0x820]);
  }
  this[0x820] = (QCameraVideoMemory)0x0;
  return;
}

