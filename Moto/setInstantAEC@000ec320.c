
/* WARNING: Removing unreachable block (ram,0x000ec4a4) */
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCameraParameters::setInstantAEC(qcamera::QCameraParameters const&) */

void __thiscall
qcamera::QCameraParameters::setInstantAEC(QCameraParameters *this,QCameraParameters *param_1)

{
  undefined8 *__s1;
  undefined4 uVar1;
  char *__s2;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
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
  
  piVar5 = *(int **)(DAT_000ec588 + 0xec32e);
  local_20 = *piVar5;
  if (this[0x7fd] == (QCameraParameters)0x0) {
    pcVar6 = *(char **)(DAT_000ec58c + 0xec39c);
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
      property_get(DAT_000ec5b4 + 0xec460,__s1,*(undefined4 *)(DAT_000ec5b0 + 0xec45a));
      if ((__s2 != (char *)0x0) && (iVar2 = strcmp((char *)&local_80,__s2), iVar2 == 0))
      goto LAB_000ec33c;
      if ((short)local_80 == 0x30) {
        iVar2 = 0;
LAB_000ec502:
        uVar4 = *(uint *)(*(int *)(DAT_000ec5b8 + 0xec508) + iVar2 * 8 + 4);
      }
      else {
        if ((short)local_80 == 0x31) {
          iVar2 = 1;
          goto LAB_000ec502;
        }
        if ((short)local_80 == 0x32) {
          iVar2 = 2;
          goto LAB_000ec502;
        }
        uVar4 = 0xfffffffe;
      }
      iVar2 = *(int *)(DAT_000ec5bc + 0xec514);
      if (*(int *)(iVar2 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000ec5c4 + 0xec52e,0x23d9,DAT_000ec5c0 + 0xec524,uVar4);
      }
      if (uVar4 != 0xfffffffe) {
        __s1 = &local_80;
        goto LAB_000ec56a;
      }
      if (*(int *)(iVar2 + 0x20) != 0) {
        uVar1 = 0x23dd;
        iVar2 = DAT_000ec5c8 + 0xec544;
        iVar3 = DAT_000ec5cc + 0xec54e;
        goto LAB_000ec54c;
      }
    }
    else {
      if ((__s2 != (char *)0x0) && (iVar2 = strcmp((char *)__s1,__s2), iVar2 == 0))
      goto LAB_000ec33c;
      iVar2 = strcmp(*(char **)(DAT_000ec590 + 0xec3ca),(char *)__s1);
      if (iVar2 == 0) {
        iVar2 = 0;
LAB_000ec4a8:
        uVar4 = *(uint *)(*(int *)(DAT_000ec598 + 0xec4ae) + iVar2 * 8 + 4);
      }
      else {
        iVar2 = strcmp(*(char **)(DAT_000ec594 + 0xec3da),(char *)__s1);
        if (iVar2 == 0) {
          iVar2 = 1;
          goto LAB_000ec4a8;
        }
        iVar2 = strcmp(*(char **)(DAT_000ec5e4 + 0xec3ea),(char *)__s1);
        if (iVar2 == 0) {
          iVar2 = 2;
          goto LAB_000ec4a8;
        }
        uVar4 = 0xfffffffe;
      }
      iVar2 = *(int *)(DAT_000ec59c + 0xec4ba);
      if (*(int *)(iVar2 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000ec5a4 + 0xec4d4,0x23ca,DAT_000ec5a0 + 0xec4ca,uVar4);
      }
      if (uVar4 != 0xfffffffe) {
LAB_000ec56a:
        updateParamEntry(this,pcVar6,(char *)__s1);
        if (uVar4 < 0xfffffffe) {
          setInstantAEC(this,(uchar)uVar4,false);
        }
        goto LAB_000ec33c;
      }
      if (*(int *)(iVar2 + 0x20) == 0) goto LAB_000ec550;
      uVar1 = 0x23ce;
      iVar2 = DAT_000ec5a8 + 0xec4ea;
      iVar3 = DAT_000ec5ac + 0xec4f4;
LAB_000ec54c:
      mm_camera_debug_log(1,1,iVar3,uVar1,iVar2,__s1);
    }
  }
  else {
LAB_000ec33c:
    if (this[0x7fc] == (QCameraParameters)0x0) {
      uVar1 = 0;
      goto LAB_000ec554;
    }
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
    property_get(DAT_000ec5d0 + 0xec380,&local_80,DAT_000ec5d4 + 0xec382);
    __s1 = (undefined8 *)atoi((char *)&local_80);
    if (-1 < (int)__s1) {
      this[0x7ff] = SUB41(__s1,0);
      uVar1 = 0;
      goto LAB_000ec554;
    }
    if (*(int *)(*(int *)(DAT_000ec5d8 + 0xec402) + 0x20) != 0) {
      uVar1 = 0x23fa;
      iVar2 = DAT_000ec5dc + 0xec414;
      iVar3 = DAT_000ec5e0 + 0xec420;
      goto LAB_000ec54c;
    }
  }
LAB_000ec550:
  uVar1 = 0xffffffea;
LAB_000ec554:
  if (*piVar5 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

