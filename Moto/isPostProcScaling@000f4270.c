
/* qcamera::QCameraParameters::isPostProcScaling() */

bool __thiscall qcamera::QCameraParameters::isPostProcScaling(QCameraParameters *this)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  char acStack112 [92];
  int local_14;
  
  bVar2 = false;
  piVar3 = *(int **)(DAT_000f42e0 + 0xf427c);
  local_14 = *piVar3;
  if (this[0x213] == (QCameraParameters)0x0) {
    property_get(DAT_000f42e8 + 0xf4296,acStack112,*(undefined4 *)(DAT_000f42e4 + 0xf428c));
    iVar1 = atoi(acStack112);
    bVar2 = 0 < iVar1;
    if (*(int *)(*(int *)(DAT_000f42ec + 0xf42aa) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000f42f4 + 0xf42cc,0x3bda,DAT_000f42f0 + 0xf42c0,0 < iVar1);
    }
  }
  if (*piVar3 == local_14) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

