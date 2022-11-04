
/* qcamera::QCameraParameters::setInitialExposureIndex(qcamera::QCameraParameters const&) */

void __thiscall
qcamera::QCameraParameters::setInitialExposureIndex
          (QCameraParameters *this,QCameraParameters *param_1)

{
  undefined8 *__s1;
  char *__s2;
  int iVar1;
  pthread_t pVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
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
  
  piVar6 = *(int **)(DAT_000ec010 + 0xebe56);
  local_1c = *piVar6;
  pcVar4 = *(char **)(DAT_000ec014 + 0xebe64);
  __s1 = (undefined8 *)android::CameraParameters::get((char *)param_1);
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if (__s1 == (undefined8 *)0x0) {
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
    property_get(DAT_000ec030 + 0xebefa,&local_78,DAT_000ec034 + 0xebefc);
    iVar1 = __strlen_chk(&local_78,0x5c);
    if ((iVar1 == 0) ||
       ((__s2 != (char *)0x0 && (iVar1 = strcmp((char *)&local_78,__s2), iVar1 == 0))))
    goto LAB_000ebf80;
    iVar1 = atoi((char *)&local_78);
    if (*(int *)(*(int *)(DAT_000ec038 + 0xebf22) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000ec040 + 0xebf3c,0x2345,DAT_000ec03c + 0xebf32,iVar1);
    }
    if (-1 < iVar1) {
      __s1 = &local_78;
      goto LAB_000ebf4a;
    }
  }
  else if ((__s2 == (char *)0x0) || (iVar1 = strcmp((char *)__s1,__s2), iVar1 != 0)) {
    iVar1 = atoi((char *)__s1);
    if (*(int *)(*(int *)(DAT_000ec024 + 0xebe96) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000ec02c + 0xebeb0,0x2339,DAT_000ec028 + 0xebea6,iVar1);
    }
    if (-1 < iVar1) {
LAB_000ebf4a:
      updateParamEntry(this,pcVar4,(char *)__s1);
      iVar5 = *(int *)(this + 0x1e0);
      if (iVar5 == 0) {
        uVar3 = 0;
      }
      else {
        if ((*(int *)(this + 0xd30) == 1) &&
           (pVar2 = pthread_self(), pVar2 == *(pthread_t *)(this + 0xd34))) {
          *(int *)(s_Use_offline_ISP_for_input_RAW_fo_00076fe0 + iVar5 + 0x10) = iVar1;
          *(undefined *)(*(int *)(this + 0x1e0) + 0xfd) = 1;
          uVar3 = 0;
          goto LAB_000ebffc;
        }
        MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
        uVar3 = *(undefined4 *)(this + 0x1e0);
      }
      __android_log_print(6,DAT_000ec044 + 0xebfd2,DAT_000ec048 + 0xebfd4,DAT_000ec04c + 0xebfd6,
                          0x234e,uVar3,0xfd);
      if (*(int *)(*(int *)(DAT_000ec050 + 0xebfde) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000ec058 + 0xebff6,0x234f,DAT_000ec054 + 0xebfee);
      }
      uVar3 = 0xffffffea;
      goto LAB_000ebffc;
    }
  }
  else {
LAB_000ebf80:
    iVar1 = -1;
  }
  if (*(int *)(*(int *)(DAT_000ec018 + 0xebf8a) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000ec020 + 0xebfa4,0x2353,DAT_000ec01c + 0xebf9a,iVar1);
  }
  uVar3 = 0;
LAB_000ebffc:
  if (*piVar6 != local_1c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

