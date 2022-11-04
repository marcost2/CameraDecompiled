
/* qcamera::QCameraExif::addEntry(unsigned int, exif_tag_type_t, unsigned int, void*) */

undefined4 __thiscall
qcamera::QCameraExif::addEntry
          (QCameraExif *this,uint param_1,exif_tag_type_t param_2,uint param_3,void *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  size_t __size;
  
  uVar1 = *(uint *)(this + 0x4b4);
  if (0x31 < uVar1) {
    if (*(int *)(*(int *)(DAT_000d7a88 + 0xd7806) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000d7a90 + 0xd781e,0xfbb,DAT_000d7a8c + 0xd7816);
    }
    return 0xfffffff4;
  }
  *(exif_tag_type_t *)(this + uVar1 * 0x18 + 4) = param_2;
  *(uint *)(this + uVar1 * 0x18 + 0x18) = param_1;
  *(uint *)(this + *(int *)(this + 0x4b4) * 0x18 + 0xc) = param_3;
  iVar2 = *(int *)(this + 0x4b4);
  this[iVar2 * 0x18 + 8] = (QCameraExif)0x1;
  uVar3 = 0;
  switch(param_2) {
  case 1:
    if (param_3 < 2) {
                    /* WARNING: Load size is inaccurate */
      this[iVar2 * 0x18 + 0x10] = *param_4;
      goto LAB_000d7a14;
    }
    pvVar4 = malloc(param_3);
    if (pvVar4 != (void *)0x0) goto LAB_000d796e;
    if (*(int *)(*(int *)(DAT_000d7a94 + 0xd7896) + 0x20) != 0) {
      uVar3 = 0xfc9;
      iVar2 = DAT_000d7a98 + 0xd78aa;
      iVar5 = DAT_000d7a9c + 0xd78b2;
      goto LAB_000d7a70;
    }
    break;
  case 2:
    pvVar4 = malloc(param_3 + 1);
    if (pvVar4 != (void *)0x0) {
      __aeabi_memclr8(pvVar4,param_3 + 1);
LAB_000d796e:
      __aeabi_memcpy8(pvVar4,param_4,param_3);
      *(void **)(this + *(int *)(this + 0x4b4) * 0x18 + 0x10) = pvVar4;
      goto LAB_000d7a14;
    }
    if (*(int *)(*(int *)(DAT_000d7aa0 + 0xd7a1e) + 0x20) != 0) {
      uVar3 = 0xfd9;
      iVar2 = DAT_000d7aa4 + 0xd7a2e;
      iVar5 = DAT_000d7aa8 + 0xd7a36;
LAB_000d7a70:
      mm_camera_debug_log(1,1,iVar5,uVar3,iVar2);
    }
    break;
  case 3:
    if (param_3 < 2) {
                    /* WARNING: Load size is inaccurate */
      *(undefined2 *)(this + iVar2 * 0x18 + 0x10) = *param_4;
    }
    else {
      __size = param_3 << 1;
      pvVar4 = malloc(__size);
      if (pvVar4 == (void *)0x0) {
        if (*(int *)(*(int *)(DAT_000d7aac + 0xd78e2) + 0x20) != 0) {
          uVar3 = 0xfe8;
          iVar2 = DAT_000d7ab0 + 0xd78f6;
          iVar5 = DAT_000d7ab4 + 0xd78fe;
          goto LAB_000d7a70;
        }
        break;
      }
LAB_000d79c6:
      __aeabi_memcpy8(pvVar4,param_4,__size);
      *(void **)(this + *(int *)(this + 0x4b4) * 0x18 + 0x10) = pvVar4;
    }
LAB_000d7a14:
    uVar3 = 0;
    goto switchD_000d7868_caseD_6;
  case 4:
    if (param_3 < 2) {
LAB_000d79e0:
                    /* WARNING: Load size is inaccurate */
      *(undefined4 *)(this + iVar2 * 0x18 + 0x10) = *param_4;
      goto LAB_000d7a14;
    }
    __size = param_3 << 2;
    pvVar4 = malloc(__size);
    if (pvVar4 != (void *)0x0) goto LAB_000d79c6;
    if (*(int *)(*(int *)(DAT_000d7ab8 + 0xd7914) + 0x20) != 0) {
      uVar3 = 0xff9;
      iVar2 = DAT_000d7abc + 0xd7928;
      iVar5 = DAT_000d7ac0 + 0xd7930;
      goto LAB_000d7a70;
    }
    break;
  case 5:
    if (param_3 < 2) {
LAB_000d79ec:
                    /* WARNING: Load size is inaccurate */
      uVar3 = *(undefined4 *)((int)param_4 + 4);
      *(undefined4 *)(this + iVar2 * 0x18 + 0x10) = *param_4;
      *(undefined4 *)(this + iVar2 * 0x18 + 0x14) = uVar3;
      goto LAB_000d7a14;
    }
    __size = param_3 << 3;
    pvVar4 = malloc(__size);
    if (pvVar4 != (void *)0x0) goto LAB_000d79c6;
    if (*(int *)(*(int *)(DAT_000d7ac4 + 0xd7946) + 0x20) != 0) {
      uVar3 = 0x100a;
      iVar2 = DAT_000d7ac8 + 0xd795a;
      iVar5 = DAT_000d7acc + 0xd7962;
      goto LAB_000d7a70;
    }
    break;
  default:
    goto switchD_000d7868_caseD_6;
  case 7:
    pvVar4 = malloc(param_3);
    if (pvVar4 != (void *)0x0) goto LAB_000d796e;
    if (*(int *)(*(int *)(DAT_000d7ad0 + 0xd7a3c) + 0x20) != 0) {
      uVar3 = 0x1019;
      iVar2 = DAT_000d7ad4 + 0xd7a4c;
      iVar5 = DAT_000d7ad8 + 0xd7a54;
      goto LAB_000d7a70;
    }
    break;
  case 9:
    if (param_3 < 2) goto LAB_000d79e0;
    __size = param_3 << 2;
    pvVar4 = malloc(__size);
    if (pvVar4 != (void *)0x0) goto LAB_000d79c6;
    if (*(int *)(*(int *)(DAT_000d7adc + 0xd799c) + 0x20) != 0) {
      uVar3 = 0x1027;
      iVar2 = DAT_000d7ae0 + 0xd79ae;
      iVar5 = DAT_000d7ae4 + 0xd79b6;
      goto LAB_000d7a70;
    }
    break;
  case 10:
    if (param_3 < 2) goto LAB_000d79ec;
    __size = param_3 << 3;
    pvVar4 = malloc(__size);
    if (pvVar4 != (void *)0x0) goto LAB_000d79c6;
    if (*(int *)(*(int *)(DAT_000d7ae8 + 0xd7a5a) + 0x20) != 0) {
      uVar3 = 0x1038;
      iVar2 = DAT_000d7aec + 0xd7a6a;
      iVar5 = DAT_000d7af0 + 0xd7a72;
      goto LAB_000d7a70;
    }
  }
  uVar3 = 0xfffffff4;
switchD_000d7868_caseD_6:
  *(int *)(this + 0x4b4) = *(int *)(this + 0x4b4) + 1;
  return uVar3;
}

