
/* qcamera::QCameraParameters::getPreviewHalPixelFormat() */

undefined4 __thiscall qcamera::QCameraParameters::getPreviewHalPixelFormat(QCameraParameters *this)

{
  undefined4 uVar1;
  int *piVar2;
  cam_format_t local_18;
  int local_14;
  
  piVar2 = *(int **)(DAT_000f44f4 + 0xf445e);
  local_14 = *piVar2;
  getStreamFormat(this,1,&local_18);
  if (local_18 - 1 < 7) {
    uVar1 = 0x109;
    switch(local_18) {
    case 1:
      break;
    default:
      goto switchD_000f4476_caseD_2;
    case 3:
      uVar1 = 0x7fa30c01;
      break;
    case 4:
      uVar1 = 0x32315659;
      break;
    case 7:
      uVar1 = 0x7fa30c04;
    }
  }
  else {
    if (local_18 == 0x66) {
      uVar1 = 0x7fa30c06;
      goto switchD_000f4476_caseD_1;
    }
    if (local_18 == 0x67) {
      uVar1 = 0x114;
      goto switchD_000f4476_caseD_1;
    }
switchD_000f4476_caseD_2:
    uVar1 = 0x11;
  }
switchD_000f4476_caseD_1:
  if (*(int *)(*(int *)(DAT_000f44f8 + 0xf44c4) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000f4500 + 0xf44de,0x2cf9,DAT_000f44fc + 0xf44d4,uVar1);
  }
  if (*piVar2 == local_14) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

