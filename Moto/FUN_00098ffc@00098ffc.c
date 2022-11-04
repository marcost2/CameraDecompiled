
int FUN_00098ffc(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata
            ((CameraMetadata *)(param_1 + 0x38));
  *(int *)(param_1 + 0x14) = *(int *)(DAT_00099074 + 0x9900c) + 8;
  pvVar2 = *(void **)(param_1 + 0x18);
  pvVar1 = *(void **)((int)pvVar2 + 0xc);
  pvVar3 = pvVar2;
  if (*(void **)((int)pvVar2 + 0xc) != pvVar2) {
    do {
      pvVar3 = *(void **)((int)pvVar1 + 0xc);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        pvVar2 = *(void **)(param_1 + 0x18);
      }
      pvVar1 = pvVar3;
    } while (pvVar3 != pvVar2);
  }
  *(void **)((int)pvVar3 + 8) = pvVar3;
  *(int *)(*(int *)(param_1 + 0x18) + 0xc) = *(int *)(param_1 + 0x18);
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x18));
  }
  *(int *)(param_1 + 0xc) = *(int *)(DAT_00099078 + 0x99040) + 8;
  pvVar2 = *(void **)(param_1 + 0x10);
  pvVar1 = *(void **)((int)pvVar2 + 0x10);
  pvVar3 = pvVar2;
  if (*(void **)((int)pvVar2 + 0x10) != pvVar2) {
    do {
      pvVar3 = *(void **)((int)pvVar1 + 0x10);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        pvVar2 = *(void **)(param_1 + 0x10);
      }
      pvVar1 = pvVar3;
    } while (pvVar3 != pvVar2);
  }
  *(void **)((int)pvVar3 + 0xc) = pvVar3;
  *(int *)(*(int *)(param_1 + 0x10) + 0x10) = *(int *)(param_1 + 0x10);
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x10));
  }
  return param_1;
}

