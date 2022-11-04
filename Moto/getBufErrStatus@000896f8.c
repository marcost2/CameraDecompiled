
/* qcamera::PendingBuffersMap::getBufErrStatus(native_handle const**) */

uint __thiscall
qcamera::PendingBuffersMap::getBufErrStatus(PendingBuffersMap *this,native_handle **param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(this + 8) + 0x1c);
  do {
    if (iVar2 == *(int *)(this + 8)) {
      return 0;
    }
    iVar3 = *(int *)(iVar2 + 0x14);
    while (iVar3 = *(int *)(iVar3 + 0x10), iVar3 != *(int *)(iVar2 + 0x14)) {
      if (*(native_handle ***)(iVar3 + 4) == param_1) {
        uVar1 = *(uint *)(iVar3 + 8);
        if (((uVar1 & 1) != 0) && (*(int *)(*(int *)(DAT_00089754 + 0x8972c) + 0x28) != 0)) {
          mm_camera_debug_log(1,3,DAT_0008975c + 0x89746,0x35a3,DAT_00089758 + 0x8973a,param_1);
          uVar1 = *(uint *)(iVar3 + 8);
        }
        return uVar1;
      }
    }
    iVar2 = *(int *)(iVar2 + 0x1c);
  } while( true );
}

