
/* BokehOneData::setBokehFileName(char const*) */

void __thiscall BokehOneData::setBokehFileName(BokehOneData *this,char *param_1)

{
  undefined4 uVar1;
  size_t __n;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(DAT_000ff3bc + 0xff324);
  if (*(int *)(iVar3 + 0x2c) != 0) {
    uVar1 = gettid();
    mm_camera_debug_log(1,4,DAT_000ff3c0 + 0xff338,0x6a,DAT_000ff3c4 + 0xff336,uVar1,
                        DAT_000ff3c0 + 0xff338);
  }
  if (param_1 != (char *)0x0) {
    __n = strlen(param_1);
    uVar4 = __n + 1;
    pvVar2 = operator_new__(uVar4 | (int)uVar4 >> 0x1f);
    *(void **)(this + 0x54) = pvVar2;
    __aeabi_memclr8(pvVar2,uVar4);
    strncpy(*(char **)(this + 0x54),param_1,__n);
    if (*(int *)(iVar3 + 0x2c) == 0) {
      return;
    }
    uVar1 = gettid();
    mm_camera_debug_log(1,4,DAT_000ff3c8 + 0xff384,0x70,DAT_000ff3cc + 0xff382,uVar1,
                        DAT_000ff3c8 + 0xff384,*(undefined4 *)(this + 0x54));
  }
  if (*(int *)(iVar3 + 0x2c) != 0) {
    uVar1 = gettid();
    mm_camera_debug_log(1,4,DAT_000ff3d0 + 0xff3a8,0x72,DAT_000ff3d4 + 0xff3a6,uVar1,
                        DAT_000ff3d0 + 0xff3a8);
  }
  return;
}

