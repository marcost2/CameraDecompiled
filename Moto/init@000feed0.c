
/* qcamera::QCameraThermalAdapter::init(qcamera::QCameraThermalCallback*) */

int __thiscall qcamera::QCameraThermalAdapter::init(QCameraThermalAdapter *this,EVP_PKEY_CTX *ctx)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = *(int *)(DAT_000ff01c + 0xfeede);
  if (*(int *)(iVar5 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000ff024 + 0xfeef4,0x46,DAT_000ff020 + 0xfeeec);
  }
  iVar1 = dlopen(DAT_000ff028 + 0xfeefe,0);
  *(int *)(this + 4) = iVar1;
  if (iVar1 == 0) {
    iVar1 = dlerror();
    if (*(int *)(iVar5 + 0x20) != 0) {
      iVar2 = DAT_000ff02c + 0xfef70;
      if (iVar1 != 0) {
        iVar2 = iVar1;
      }
      mm_camera_debug_log(1,1,DAT_000ff034 + 0xfef86,0x4b,DAT_000ff030 + 0xfef7a,iVar2);
    }
    goto LAB_000feffc;
  }
  iVar1 = dlsym(iVar1,DAT_000ff038 + 0xfef0c);
  *(int *)(this + 8) = iVar1;
  if (iVar1 == 0) {
    iVar1 = dlerror();
    if (*(int *)(iVar5 + 0x20) != 0) {
      iVar2 = DAT_000ff03c + 0xfef9a;
      if (iVar1 != 0) {
        iVar2 = iVar1;
      }
      uVar4 = 0x53;
      iVar1 = DAT_000ff040 + 0xfefa4;
      iVar3 = DAT_000ff044 + 0xfefb0;
      goto LAB_000fefec;
    }
  }
  else {
    iVar1 = dlsym(*(undefined4 *)(this + 4),DAT_000ff048 + 0xfef1c);
    *(int *)(this + 0xc) = iVar1;
    if (iVar1 == 0) {
      iVar1 = dlerror();
      if (*(int *)(iVar5 + 0x20) != 0) {
        iVar2 = DAT_000ff04c + 0xfefc0;
        if (iVar1 != 0) {
          iVar2 = iVar1;
        }
        uVar4 = 0x5b;
        iVar1 = DAT_000ff050 + 0xfefca;
        iVar3 = DAT_000ff054 + 0xfefd6;
        goto LAB_000fefec;
      }
    }
    else {
      *(EVP_PKEY_CTX **)this = ctx;
      iVar2 = (**(code **)(this + 8))
                        (*(undefined4 *)(DAT_000ff058 + 0xfef32),
                         *(undefined4 *)(DAT_000ff05c + 0xfef34),0);
      *(int *)(this + 0x10) = iVar2;
      if (-1 < iVar2) {
        if (*(int *)(iVar5 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000ff074 + 0xfef56,0x76,DAT_000ff070 + 0xfef4e);
        }
        return 0;
      }
      if (*(int *)(iVar5 + 0x20) != 0) {
        uVar4 = 0x66;
        iVar1 = DAT_000ff060 + 0xfefe2;
        iVar3 = DAT_000ff064 + 0xfefee;
LAB_000fefec:
        mm_camera_debug_log(1,1,iVar3,uVar4,iVar1,iVar2);
      }
    }
  }
  *(undefined4 *)(this + 0x10) = 0;
  dlclose(*(undefined4 *)(this + 4));
  *(undefined4 *)(this + 4) = 0;
LAB_000feffc:
  if (*(int *)(iVar5 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000ff06c + 0xff012,0x83,DAT_000ff068 + 0xff00a);
  }
  return -0x80000000;
}

