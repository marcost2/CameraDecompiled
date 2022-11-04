
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCameraParameters::setInstantCapture(qcamera::QCameraParameters const&) */

void __thiscall
qcamera::QCameraParameters::setInstantCapture(QCameraParameters *this,QCameraParameters *param_1)

{
  undefined8 *__s1;
  char *__s2;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
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
  
  piVar6 = *(int **)(DAT_000ec2c0 + 0xec06a);
  local_20 = *piVar6;
  pcVar4 = *(char **)(DAT_000ec2c4 + 0xec078);
  __s1 = (undefined8 *)android::CameraParameters::get((char *)param_1);
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if (__s1 == (undefined8 *)0x0) {
    __s1 = &local_80;
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
    property_get(DAT_000ec2ec + 0xec114,__s1,*(undefined4 *)(DAT_000ec2e8 + 0xec10e));
    if ((__s2 != (char *)0x0) && (iVar1 = strcmp((char *)&local_80,__s2), iVar1 == 0))
    goto LAB_000ec22c;
    if ((short)local_80 == 0x30) {
      iVar1 = 0;
LAB_000ec1b8:
      uVar5 = *(uint *)(*(int *)(DAT_000ec2f0 + 0xec1be) + iVar1 * 8 + 4);
    }
    else {
      if ((short)local_80 == 0x31) {
        iVar1 = 1;
        goto LAB_000ec1b8;
      }
      if ((short)local_80 == 0x32) {
        iVar1 = 2;
        goto LAB_000ec1b8;
      }
      uVar5 = 0xfffffffe;
    }
    iVar1 = *(int *)(DAT_000ec2f4 + 0xec1ca);
    if (*(int *)(iVar1 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000ec2fc + 0xec1e4,0x2381,DAT_000ec2f8 + 0xec1da,uVar5);
    }
    if (uVar5 != 0xfffffffe) {
      __s1 = &local_80;
LAB_000ec20c:
      updateParamEntry(this,pcVar4,(char *)__s1);
      if (uVar5 < 0xfffffffe) {
        this[0x7fd] = (QCameraParameters)(0 < (int)uVar5);
        setInstantAEC(this,(uchar)uVar5,false);
      }
      goto LAB_000ec22c;
    }
    if (*(int *)(iVar1 + 0x20) == 0) goto LAB_000ec2a6;
    uVar3 = 0x2385;
    iVar1 = DAT_000ec300 + 0xec1fc;
    iVar2 = DAT_000ec304 + 0xec206;
LAB_000ec2a2:
    mm_camera_debug_log(1,1,iVar2,uVar3,iVar1,__s1);
  }
  else {
    if ((__s2 != (char *)0x0) && (iVar1 = strcmp((char *)__s1,__s2), iVar1 == 0)) {
LAB_000ec22c:
      if (this[0x7fd] != (QCameraParameters)0x0) {
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
        property_get(DAT_000ec308 + 0xec26e,&local_80,DAT_000ec30c + 0xec270);
        __s1 = (undefined8 *)atoi((char *)&local_80);
        if ((int)__s1 < 0) {
          if (*(int *)(*(int *)(DAT_000ec310 + 0xec28a) + 0x20) != 0) {
            uVar3 = 0x23a4;
            iVar1 = DAT_000ec314 + 0xec298;
            iVar2 = DAT_000ec318 + 0xec2a4;
            goto LAB_000ec2a2;
          }
          goto LAB_000ec2a6;
        }
        this[0x7fe] = SUB41(__s1,0);
      }
      uVar3 = 0;
      goto LAB_000ec2aa;
    }
    iVar1 = strcmp(*(char **)(DAT_000ec2c8 + 0xec0a6),(char *)__s1);
    if (iVar1 == 0) {
      iVar1 = 0;
LAB_000ec15a:
      uVar5 = *(uint *)(*(int *)(DAT_000ec2d0 + 0xec160) + iVar1 * 8 + 4);
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000ec2cc + 0xec0b6),(char *)__s1);
      if (iVar1 == 0) {
        iVar1 = 1;
        goto LAB_000ec15a;
      }
      iVar1 = strcmp(*(char **)(DAT_000ec31c + 0xec0c6),(char *)__s1);
      if (iVar1 == 0) {
        iVar1 = 2;
        goto LAB_000ec15a;
      }
      uVar5 = 0xfffffffe;
    }
    iVar1 = *(int *)(DAT_000ec2d4 + 0xec16c);
    if (*(int *)(iVar1 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000ec2dc + 0xec186,0x2372,DAT_000ec2d8 + 0xec17c,uVar5);
    }
    if (uVar5 != 0xfffffffe) goto LAB_000ec20c;
    if (*(int *)(iVar1 + 0x20) != 0) {
      uVar3 = 0x2376;
      iVar1 = DAT_000ec2e0 + 0xec1a0;
      iVar2 = DAT_000ec2e4 + 0xec1aa;
      goto LAB_000ec2a2;
    }
  }
LAB_000ec2a6:
  uVar3 = 0xffffffea;
LAB_000ec2aa:
  if (*piVar6 != local_20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

