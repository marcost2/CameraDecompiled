
/* qcamera::QCamera3Exif::addEntry(unsigned int, exif_tag_type_t, unsigned int, void*) */

undefined4 __thiscall
qcamera::QCamera3Exif::addEntry
          (QCamera3Exif *this,uint param_1,exif_tag_type_t param_2,uint param_3,void *param_4)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  size_t __size;
  
  uVar1 = *(uint *)(this + 0x4b4);
  if (0x31 < uVar1) {
    if (*(int *)(*(int *)(DAT_000ac698 + 0xac3f6) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000ac6a0 + 0xac40e,0xced,DAT_000ac69c + 0xac406);
    }
    return 0xfffffff4;
  }
  *(exif_tag_type_t *)(this + uVar1 * 0x18 + 4) = param_2;
  *(uint *)(this + uVar1 * 0x18 + 0x18) = param_1;
  *(uint *)(this + *(int *)(this + 0x4b4) * 0x18 + 0xc) = param_3;
  iVar2 = *(int *)(this + 0x4b4);
  this[iVar2 * 0x18 + 8] = (QCamera3Exif)0x1;
  switch(param_2) {
  case 1:
    if (param_3 < 2) {
                    /* WARNING: Load size is inaccurate */
      this[iVar2 * 0x18 + 0x10] = *param_4;
      goto LAB_000ac622;
    }
    pvVar3 = malloc(param_3);
    if (pvVar3 != (void *)0x0) goto LAB_000ac57c;
    if (*(int *)(*(int *)(DAT_000ac6a4 + 0xac47c) + 0x20) != 0) {
      uVar4 = 0xcfb;
      iVar2 = DAT_000ac6a8 + 0xac490;
      iVar5 = DAT_000ac6ac + 0xac498;
      goto LAB_000ac67e;
    }
    break;
  case 2:
    pvVar3 = malloc(param_3 + 1);
    if (pvVar3 != (void *)0x0) {
      __aeabi_memclr8(pvVar3,param_3 + 1);
LAB_000ac57c:
      __aeabi_memcpy8(pvVar3,param_4,param_3);
      *(void **)(this + *(int *)(this + 0x4b4) * 0x18 + 0x10) = pvVar3;
      goto LAB_000ac622;
    }
    if (*(int *)(*(int *)(DAT_000ac6b0 + 0xac62c) + 0x20) != 0) {
      uVar4 = 0xd0c;
      iVar2 = DAT_000ac6b4 + 0xac63c;
      iVar5 = DAT_000ac6b8 + 0xac644;
LAB_000ac67e:
      mm_camera_debug_log(1,1,iVar5,uVar4,iVar2);
    }
    break;
  case 3:
    if (param_3 < 2) {
                    /* WARNING: Load size is inaccurate */
      *(undefined2 *)(this + iVar2 * 0x18 + 0x10) = *param_4;
    }
    else {
      __size = param_3 << 1;
      pvVar3 = malloc(__size);
      if (pvVar3 == (void *)0x0) {
        if (*(int *)(*(int *)(DAT_000ac6bc + 0xac4ca) + 0x20) != 0) {
          uVar4 = 0xd1c;
          iVar2 = DAT_000ac6c0 + 0xac4de;
          iVar5 = DAT_000ac6c4 + 0xac4e6;
          goto LAB_000ac67e;
        }
        break;
      }
LAB_000ac5d4:
      __aeabi_memcpy8(pvVar3,param_4,__size);
      *(void **)(this + *(int *)(this + 0x4b4) * 0x18 + 0x10) = pvVar3;
    }
    goto LAB_000ac622;
  case 4:
    if (param_3 < 2) {
LAB_000ac5ee:
                    /* WARNING: Load size is inaccurate */
      *(undefined4 *)(this + iVar2 * 0x18 + 0x10) = *param_4;
      goto LAB_000ac622;
    }
    __size = param_3 << 2;
    pvVar3 = malloc(__size);
    if (pvVar3 != (void *)0x0) goto LAB_000ac5d4;
    if (*(int *)(*(int *)(DAT_000ac6c8 + 0xac4fe) + 0x20) != 0) {
      uVar4 = 0xd2f;
      iVar2 = DAT_000ac6cc + 0xac512;
      iVar5 = DAT_000ac6d0 + 0xac51a;
      goto LAB_000ac67e;
    }
    break;
  case 5:
    if (param_3 < 2) {
LAB_000ac5fa:
                    /* WARNING: Load size is inaccurate */
      uVar4 = *(undefined4 *)((int)param_4 + 4);
      *(undefined4 *)(this + iVar2 * 0x18 + 0x10) = *param_4;
      *(undefined4 *)(this + iVar2 * 0x18 + 0x14) = uVar4;
      goto LAB_000ac622;
    }
    __size = param_3 << 3;
    pvVar3 = malloc(__size);
    if (pvVar3 != (void *)0x0) goto LAB_000ac5d4;
    if (*(int *)(*(int *)(DAT_000ac6d4 + 0xac530) + 0x20) != 0) {
      uVar4 = 0xd41;
      iVar2 = DAT_000ac6d8 + 0xac544;
      iVar5 = DAT_000ac6dc + 0xac54c;
      goto LAB_000ac67e;
    }
    break;
  default:
    if (*(int *)(*(int *)(DAT_000ac704 + 0xac552) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000ac70c + 0xac56c,0xd7f,DAT_000ac708 + 0xac564);
    }
LAB_000ac622:
    uVar4 = 0;
    goto LAB_000ac686;
  case 7:
    pvVar3 = malloc(param_3);
    if (pvVar3 != (void *)0x0) goto LAB_000ac57c;
    if (*(int *)(*(int *)(DAT_000ac6e0 + 0xac64a) + 0x20) != 0) {
      uVar4 = 0xd51;
      iVar2 = DAT_000ac6e4 + 0xac65a;
      iVar5 = DAT_000ac6e8 + 0xac662;
      goto LAB_000ac67e;
    }
    break;
  case 9:
    if (param_3 < 2) goto LAB_000ac5ee;
    __size = param_3 << 2;
    pvVar3 = malloc(__size);
    if (pvVar3 != (void *)0x0) goto LAB_000ac5d4;
    if (*(int *)(*(int *)(DAT_000ac6ec + 0xac5aa) + 0x20) != 0) {
      uVar4 = 0xd60;
      iVar2 = DAT_000ac6f0 + 0xac5bc;
      iVar5 = DAT_000ac6f4 + 0xac5c4;
      goto LAB_000ac67e;
    }
    break;
  case 10:
    if (param_3 < 2) goto LAB_000ac5fa;
    __size = param_3 << 3;
    pvVar3 = malloc(__size);
    if (pvVar3 != (void *)0x0) goto LAB_000ac5d4;
    if (*(int *)(*(int *)(DAT_000ac6f8 + 0xac668) + 0x20) != 0) {
      uVar4 = 0xd72;
      iVar2 = DAT_000ac6fc + 0xac678;
      iVar5 = DAT_000ac700 + 0xac680;
      goto LAB_000ac67e;
    }
  }
  uVar4 = 0xfffffff4;
LAB_000ac686:
  *(int *)(this + 0x4b4) = *(int *)(this + 0x4b4) + 1;
  return uVar4;
}

