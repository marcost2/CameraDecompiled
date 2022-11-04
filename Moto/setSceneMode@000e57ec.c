
/* qcamera::QCameraParameters::setSceneMode(qcamera::QCameraParameters const&) */

void __thiscall
qcamera::QCameraParameters::setSceneMode(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s1;
  char *__s2;
  char **ppcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *__s2_00;
  int iVar5;
  int *piVar6;
  int local_2c;
  int local_28;
  int local_24;
  
  piVar6 = *(int **)(DAT_000e5a70 + 0xe57fc);
  local_24 = *piVar6;
  __s1 = (char *)android::CameraParameters::get((char *)param_1);
  __s2 = (char *)android::CameraParameters::get((char *)this);
  iVar5 = *(int *)(DAT_000e5a78 + 0xe5824);
  if (*(int *)(iVar5 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e5a80 + 0xe583e,0xf2e,DAT_000e5a7c + 0xe5834,__s1,__s2);
  }
  if (this[0x214] == (QCameraParameters)0x0) {
    if (this[0x289] != (QCameraParameters)0x0) {
      if (*(int *)(iVar5 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000e5a94 + 0xe5890,0xf37,DAT_000e5a90 + 0xe5888);
      }
      this[0x289] = (QCameraParameters)0x0;
      ppcVar1 = (char **)(DAT_000e5a98 + 0xe589e);
      goto LAB_000e589c;
    }
LAB_000e58a6:
    if (__s1 != (char *)0x0) goto joined_r0x000e58a2;
  }
  else {
    if (this[0x288] == (QCameraParameters)0x0) goto LAB_000e58a6;
    if (*(int *)(iVar5 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e5a88 + 0xe5864,0xf33,DAT_000e5a84 + 0xe585c);
    }
    this[0x289] = (QCameraParameters)0x1;
    ppcVar1 = (char **)(DAT_000e5a8c + 0xe5872);
LAB_000e589c:
    __s1 = *ppcVar1;
joined_r0x000e58a2:
    if (((__s2 == (char *)0x0) || (this[0x213] != this[0x214])) ||
       (iVar2 = strcmp(__s1,__s2), iVar2 != 0)) {
      iVar2 = strcmp(__s1,*(char **)(DAT_000e5a9c + 0xe58cc));
      if (iVar2 == 0) {
        this[0x265] = (QCameraParameters)0x1;
      }
      __s2_00 = *(char **)(DAT_000e5aa0 + 0xe58e0);
      iVar2 = strcmp(__s1,__s2_00);
      if (iVar2 == 0) {
        if ((this[0x300] == (QCameraParameters)0x0) ||
           (iVar2 = isSupportedSensorHdrSize(this,param_1), iVar2 == 0)) {
          this[0x288] = (QCameraParameters)0x1;
          if (*(int *)(iVar5 + 0x28) != 0) {
            uVar3 = 0xf50;
            iVar2 = DAT_000e5aac + 0xe595c;
            iVar4 = DAT_000e5ab0 + 0xe5964;
            goto LAB_000e5962;
          }
        }
        else {
          this[0x288] = (QCameraParameters)0x0;
          this[0x2ed] = (QCameraParameters)0x1;
          if (*(int *)(iVar5 + 0x28) != 0) {
            uVar3 = 0xf4d;
            iVar2 = DAT_000e5aa4 + 0xe593a;
            iVar4 = DAT_000e5aa8 + 0xe5942;
LAB_000e5962:
            mm_camera_debug_log(1,3,iVar4,uVar3,iVar2);
          }
        }
      }
      else {
        this[0x288] = (QCameraParameters)0x0;
        if (this[0x2ed] != (QCameraParameters)0x0) {
          this[0x230] = (QCameraParameters)0x1;
          this[0x2ed] = (QCameraParameters)0x0;
          setSensorSnapshotHDR(this,*(char **)(DAT_000e5ab4 + 0xe5906));
        }
      }
      if (this[0x2ed] == (QCameraParameters)0x0) {
        if ((this[0x288] != (QCameraParameters)0x0) ||
           ((__s2 != (char *)0x0 && (iVar2 = strcmp(__s2,__s2_00), iVar2 == 0)))) {
          if (*(int *)(iVar5 + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_000e5ac0 + 0xe599a,0xf60,DAT_000e5abc + 0xe5992);
          }
          goto LAB_000e599c;
        }
      }
      else {
        setSensorSnapshotHDR(this,*(char **)(DAT_000e5ab8 + 0xe5972));
LAB_000e599c:
        this[0x230] = (QCameraParameters)0x1;
      }
      iVar5 = strcmp(__s1,__s2_00);
      if (((iVar5 == 0) &&
          (iVar5 = *(int *)(*(int *)(this + 0x1d4) + 0x3000),
          android::CameraParameters::getVideoSize((CameraParameters *)param_1,&local_28,&local_2c),
          iVar5 << 0x17 < 0)) && (this[0x214] != (QCameraParameters)0x0)) {
        if (local_28 == 0xf00) {
          if (local_2c != 0x870) goto LAB_000e59e0;
        }
        else if ((local_28 != 0x780) || (local_2c != 0x438)) {
LAB_000e59e0:
          __android_log_print(6,DAT_000e5ac8 + 0xe59f0,DAT_000e5acc + 0xe59f2,DAT_000e5ad0 + 0xe59f4
                              ,local_28,local_2c);
          goto LAB_000e59f6;
        }
        this[0x288] = (QCameraParameters)0x0;
        this[0xd25] = (QCameraParameters)0x1;
        if (this[0x2ed] != (QCameraParameters)0x0) {
          this[0x2ed] = (QCameraParameters)0x0;
          setSensorSnapshotHDR(this,*(char **)(DAT_000e5ad4 + 0xe5a56));
          if (this[0xd25] == (QCameraParameters)0x0) goto LAB_000e59fc;
        }
        ppcVar1 = (char **)(DAT_000e5ac4 + 0xe5a6a);
      }
      else {
LAB_000e59f6:
        this[0xd25] = (QCameraParameters)0x0;
LAB_000e59fc:
        ppcVar1 = (char **)(DAT_000e5ad8 + 0xe5a02);
      }
      setVideoHDR(this,*ppcVar1);
      uVar3 = setSceneMode(this,__s1);
      goto LAB_000e5a10;
    }
  }
  uVar3 = 0;
LAB_000e5a10:
  if (*piVar6 != local_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

