
/* qcamera::QCameraParameters::setNoDisplayMode(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setNoDisplayMode(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s;
  char *__s2;
  size_t sVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined8 local_80;
  undefined8 uStack120;
  undefined8 local_70;
  undefined8 uStack104;
  undefined8 local_60;
  undefined8 uStack88;
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 local_40;
  undefined4 uStack56;
  undefined4 local_34;
  undefined4 uStack48;
  undefined8 uStack44;
  int local_20;
  
  piVar4 = *(int **)(DAT_000e8cac + 0xe8b7e);
  local_20 = *piVar4;
  pcVar3 = *(char **)(DAT_000e8cb0 + 0xe8b8c);
  __s = (char *)android::CameraParameters::get((char *)param_1);
  __s2 = (char *)android::CameraParameters::get((char *)this);
  iVar5 = *(int *)(DAT_000e8cb4 + 0xe8ba6);
  if (*(int *)(iVar5 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000e8cbc + 0xe8bc4,0x127d,DAT_000e8cb8 + 0xe8bba,__s,__s2);
  }
  if (*(int *)(this + 500) == 1) {
    if (this[0x231] == (QCameraParameters)0x0) {
      android::CameraParameters::set((CameraParameters *)this,pcVar3,1);
      *(undefined2 *)(this + 0x230) = 0x101;
    }
  }
  else {
    if ((__s == (char *)0x0) || (sVar1 = strlen(__s), sVar1 == 0)) {
      local_80 = 0;
      uStack120 = 0;
      uStack48 = 0;
      uStack44 = 0;
      local_40 = 0;
      uStack56 = 0;
      local_34 = 0;
      local_50 = 0;
      uStack72 = 0;
      local_60 = 0;
      uStack88 = 0;
      local_70 = 0;
      uStack104 = 0;
      property_get(DAT_000e8cc4 + 0xe8c62,&local_80,*(undefined4 *)(DAT_000e8cc0 + 0xe8c5c));
      iVar2 = atoi((char *)&local_80);
      if (iVar2 != 0) {
        iVar2 = 1;
      }
      this[0x231] = SUB41(iVar2,0);
    }
    else if ((__s2 == (char *)0x0) || (iVar2 = strcmp(__s,__s2), iVar2 != 0)) {
      iVar2 = atoi(__s);
      if (iVar2 != 0) {
        iVar2 = 1;
      }
      this[0x231] = SUB41(iVar2,0);
      android::CameraParameters::set((CameraParameters *)this,pcVar3,__s);
      this[0x230] = (QCameraParameters)0x1;
    }
    if (*(int *)(iVar5 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e8ccc + 0xe8c94,0x1294,DAT_000e8cc8 + 0xe8c88,this[0x231]);
    }
  }
  if (*piVar4 == local_20) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

