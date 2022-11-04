
/* qcamera::QCameraParameters::setAEBracket(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setAEBracket(QCameraParameters *this,QCameraParameters *param_1)

{
  size_t sVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 local_78;
  undefined8 uStack112;
  undefined8 local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined8 uStack80;
  undefined8 local_48;
  undefined8 uStack64;
  undefined8 local_38;
  undefined4 uStack48;
  undefined4 local_2c;
  undefined4 uStack40;
  undefined8 uStack36;
  int local_1c;
  
  piVar4 = *(int **)(DAT_000e6268 + 0xe6162);
  local_1c = *piVar4;
  if ((this[0x288] == (QCameraParameters)0x0) && (this[0x299] == (QCameraParameters)0x0)) {
    pcVar5 = *(char **)(DAT_000e627c + 0xe61b6);
    pcVar3 = (char *)android::CameraParameters::get((char *)param_1);
    if ((pcVar3 == (char *)0x0) || (sVar1 = strlen(pcVar3), sVar1 == 0)) {
      local_78 = 0;
      uStack112 = 0;
      uStack40 = 0;
      uStack36 = 0;
      local_38 = 0;
      uStack48 = 0;
      local_2c = 0;
      local_48 = 0;
      uStack64 = 0;
      local_58 = 0;
      uStack80 = 0;
      local_68 = 0;
      uStack96 = 0;
      property_get(DAT_000e6280 + 0xe6212,&local_78,DAT_000e6284 + 0xe6214);
      iVar2 = __strlen_chk(&local_78,0x5c);
      if (iVar2 == 0) {
        android::CameraParameters::remove((CameraParameters *)this,pcVar5);
      }
      else {
        android::CameraParameters::set((CameraParameters *)this,pcVar5,(char *)&local_78);
      }
    }
    else {
      android::CameraParameters::set((CameraParameters *)this,pcVar5,pcVar3);
    }
    pcVar3 = (char *)android::CameraParameters::get((char *)param_1);
    pcVar5 = (char *)android::CameraParameters::get((char *)this);
    if ((pcVar3 == (char *)0x0) ||
       ((pcVar5 != (char *)0x0 && (iVar2 = strcmp(pcVar3,pcVar5), iVar2 == 0)))) goto LAB_000e619e;
  }
  else {
    if (*(int *)(*(int *)(DAT_000e626c + 0xe6178) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e6274 + 0xe6190,0xfac,DAT_000e6270 + 0xe6188);
    }
    pcVar3 = *(char **)(DAT_000e6278 + 0xe6198);
  }
  setAEBracket(this,pcVar3);
LAB_000e619e:
  if (*piVar4 != local_1c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

