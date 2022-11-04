
/* qcamera::QCameraStream::invalidate_buf(unsigned int, void*) */

undefined4 qcamera::QCameraStream::invalidate_buf(uint param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (param_2 == (void *)0x0) {
    if (*(int *)(*(int *)(DAT_000cf670 + 0xcf608) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000cf678 + 0xcf61e,0xd7,DAT_000cf674 + 0xcf616);
    }
    return 0xfffffff4;
  }
  if (*(int *)(*(int *)((int)param_2 + 0x70) + 0x8334) != 1) {
    if (*(int *)(*(int *)((int)param_2 + 0x70) + 0x1a0) != 2) {
      piVar3 = *(int **)((int)param_2 + 0x10c);
      if (piVar3 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000cf644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*piVar3 + 0x14))(piVar3,param_1,0xc0144d01);
        return uVar4;
      }
      if (*(int *)(*(int *)(DAT_000cf688 + 0xcf64c) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000cf690 + 0xcf664,0x93f,DAT_000cf68c + 0xcf65c);
      }
      return 0xffffffda;
    }
    iVar5 = *(int *)((int)param_2 + 0x118);
    if (*(char *)(param_1 * 0x218 + iVar5 + 0x21) != '\0') {
      uVar6 = 0;
      iVar7 = *(int *)(DAT_000cf67c + 0xcf5ac);
      iVar1 = DAT_000cf680 + 0xcf5b4;
      iVar2 = DAT_000cf684 + 0xcf5ba;
      do {
        piVar3 = *(int **)((int)param_2 + 0x10c);
        if (piVar3 == (int *)0x0) {
          if (*(int *)(iVar7 + 0x20) != 0) {
            mm_camera_debug_log(1,1,iVar2,0x93f,iVar1);
          }
        }
        else {
          (**(code **)(*piVar3 + 0x14))
                    (piVar3,*(undefined4 *)(iVar5 + param_1 * 0x218 + 0x24 + uVar6 * 4),0xc0144d01);
        }
        iVar5 = *(int *)((int)param_2 + 0x118);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(byte *)(param_1 * 0x218 + iVar5 + 0x21));
    }
  }
  return 0;
}

