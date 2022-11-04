
/* qcamera::QCameraStream::clean_invalidate_buf(unsigned int, void*) */

undefined4 qcamera::QCameraStream::clean_invalidate_buf(uint param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (param_2 == (void *)0x0) {
    if (*(int *)(*(int *)(DAT_000cf7f4 + 0xcf78c) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000cf7fc + 0xcf7a2,0xfc,DAT_000cf7f8 + 0xcf79a);
    }
    return 0xfffffff4;
  }
  if (*(int *)(*(int *)((int)param_2 + 0x70) + 0x8334) != 1) {
    if (*(int *)(*(int *)((int)param_2 + 0x70) + 0x1a0) != 2) {
      piVar3 = *(int **)((int)param_2 + 0x10c);
      if (piVar3 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000cf7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*piVar3 + 0x14))(piVar3,param_1,0xc0144d02);
        return uVar4;
      }
      if (*(int *)(*(int *)(DAT_000cf80c + 0xcf7d0) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000cf814 + 0xcf7e8,0x954,DAT_000cf810 + 0xcf7e0);
      }
      return 0xffffffda;
    }
    iVar5 = *(int *)((int)param_2 + 0x118);
    if (*(char *)(param_1 * 0x218 + iVar5 + 0x21) != '\0') {
      uVar6 = 0;
      iVar7 = *(int *)(DAT_000cf800 + 0xcf730);
      iVar1 = DAT_000cf804 + 0xcf738;
      iVar2 = DAT_000cf808 + 0xcf73e;
      do {
        piVar3 = *(int **)((int)param_2 + 0x10c);
        if (piVar3 == (int *)0x0) {
          if (*(int *)(iVar7 + 0x20) != 0) {
            mm_camera_debug_log(1,1,iVar2,0x954,iVar1);
          }
        }
        else {
          (**(code **)(*piVar3 + 0x14))
                    (piVar3,*(undefined4 *)(iVar5 + param_1 * 0x218 + 0x24 + uVar6 * 4),0xc0144d02);
        }
        iVar5 = *(int *)((int)param_2 + 0x118);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(byte *)(param_1 * 0x218 + iVar5 + 0x21));
    }
  }
  return 0;
}

