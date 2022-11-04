
/* qcamera::QCamera3Exif::~QCamera3Exif() */

QCamera3Exif * __thiscall qcamera::QCamera3Exif::_QCamera3Exif(QCamera3Exif *this)

{
  uint uVar1;
  void **ppvVar2;
  int iVar3;
  
  *(int *)this = *(int *)(DAT_00062ad8 + 0x62a52) + 8;
  if (*(int *)(this + 0x22c) != 0) {
    ppvVar2 = (void **)(this + 0x10);
    iVar3 = *(int *)(DAT_00062adc + 0x62a6a);
    uVar1 = 0;
    do {
      switch(ppvVar2[-3]) {
      case (void *)0x1:
      case (void *)0x3:
      case (void *)0x4:
      case (void *)0x5:
      case (void *)0x9:
      case (void *)0xa:
        if ((void *)0x1 < ppvVar2[-1]) goto switchD_00062aa0_caseD_2;
        break;
      case (void *)0x2:
      case (void *)0x7:
switchD_00062aa0_caseD_2:
        if (*ppvVar2 != (void *)0x0) {
          free(*ppvVar2);
          *ppvVar2 = (void *)0x0;
        }
        break;
      case (void *)0x6:
      case (void *)0x8:
      default:
        if (*(int *)(iVar3 + 0x24) != 0) {
          mm_camera_debug_log();
        }
      }
      ppvVar2 = ppvVar2 + 6;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(this + 0x22c));
  }
  return this;
}

