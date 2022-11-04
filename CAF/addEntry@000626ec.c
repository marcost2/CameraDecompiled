
/* WARNING: Type propagation algorithm not settling */
/* qcamera::QCamera3Exif::addEntry(unsigned int, exif_tag_type_t, unsigned int, void*) */

undefined4 __thiscall
qcamera::QCamera3Exif::addEntry
          (QCamera3Exif *this,uint param_1,exif_tag_type_t param_2,uint param_3,void *param_4)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  size_t __size;
  
  uVar1 = *(uint *)(this + 0x22c);
  if (0x16 < uVar1) {
    if (*(int *)(*(int *)(DAT_000629a4 + 0x62702) + 0x20) != 0) {
      mm_camera_debug_log();
    }
    return 0xfffffff4;
  }
  *(exif_tag_type_t *)(this + uVar1 * 0x18 + 4) = param_2;
  *(uint *)(this + uVar1 * 0x18 + 0x18) = param_1;
  *(uint *)(this + *(int *)(this + 0x22c) * 0x18 + 0xc) = param_3;
  iVar2 = *(int *)(this + 0x22c);
  this[iVar2 * 0x18 + 8] = (QCamera3Exif)0x1;
  switch(param_2) {
  case 1:
    if (param_3 < 2) {
                    /* WARNING: Load size is inaccurate */
      this[iVar2 * 0x18 + 0x10] = *param_4;
      goto LAB_0006292e;
    }
    pvVar3 = malloc(param_3);
    if (pvVar3 != (void *)0x0) goto LAB_00062888;
    iVar2 = *(int *)(*(int *)(DAT_000629b0 + 0x62788) + 0x20);
    break;
  case 2:
    pvVar3 = malloc(param_3 + 1);
    if (pvVar3 != (void *)0x0) {
      __aeabi_memclr4(pvVar3,param_3 + 1);
LAB_00062888:
      __aeabi_memcpy8(pvVar3,param_4,param_3);
      *(void **)(this + *(int *)(this + 0x22c) * 0x18 + 0x10) = pvVar3;
      goto LAB_0006292e;
    }
    iVar2 = *(int *)(*(int *)(DAT_000629bc + 0x62938) + 0x20);
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
        iVar2 = *(int *)(*(int *)(DAT_000629c8 + 0x627d6) + 0x20);
        break;
      }
LAB_000628e0:
      __aeabi_memcpy8(pvVar3,param_4,__size);
      *(void **)(this + *(int *)(this + 0x22c) * 0x18 + 0x10) = pvVar3;
    }
    goto LAB_0006292e;
  case 4:
    if (param_3 < 2) {
LAB_000628fa:
                    /* WARNING: Load size is inaccurate */
      *(undefined4 *)(this + iVar2 * 0x18 + 0x10) = *param_4;
      goto LAB_0006292e;
    }
    __size = param_3 << 2;
    pvVar3 = malloc(__size);
    if (pvVar3 != (void *)0x0) goto LAB_000628e0;
    iVar2 = *(int *)(*(int *)(DAT_000629d4 + 0x6280a) + 0x20);
    break;
  case 5:
    if (param_3 < 2) {
LAB_00062906:
                    /* WARNING: Load size is inaccurate */
      uVar4 = *(undefined4 *)((int)param_4 + 4);
      *(undefined4 *)(this + iVar2 * 0x18 + 0x10) = *param_4;
      *(undefined4 *)(this + iVar2 * 0x18 + 0x14) = uVar4;
      goto LAB_0006292e;
    }
    __size = param_3 << 3;
    pvVar3 = malloc(__size);
    if (pvVar3 != (void *)0x0) goto LAB_000628e0;
    iVar2 = *(int *)(*(int *)(DAT_000629e0 + 0x6283c) + 0x20);
    break;
  default:
    if (*(int *)(*(int *)(DAT_00062a10 + 0x6285e) + 0x20) != 0) {
      mm_camera_debug_log();
    }
LAB_0006292e:
    uVar4 = 0;
    goto LAB_00062992;
  case 7:
    pvVar3 = malloc(param_3);
    if (pvVar3 != (void *)0x0) goto LAB_00062888;
    iVar2 = *(int *)(*(int *)(DAT_000629ec + 0x62956) + 0x20);
    break;
  case 9:
    if (param_3 < 2) goto LAB_000628fa;
    __size = param_3 << 2;
    pvVar3 = malloc(__size);
    if (pvVar3 != (void *)0x0) goto LAB_000628e0;
    iVar2 = *(int *)(*(int *)(DAT_000629f8 + 0x628b6) + 0x20);
    break;
  case 10:
    if (param_3 < 2) goto LAB_00062906;
    __size = param_3 << 3;
    pvVar3 = malloc(__size);
    if (pvVar3 != (void *)0x0) goto LAB_000628e0;
    iVar2 = *(int *)(*(int *)(DAT_00062a04 + 0x62974) + 0x20);
  }
  if (iVar2 != 0) {
    mm_camera_debug_log();
  }
  uVar4 = 0xfffffff4;
LAB_00062992:
  *(int *)(this + 0x22c) = *(int *)(this + 0x22c) + 1;
  return uVar4;
}

