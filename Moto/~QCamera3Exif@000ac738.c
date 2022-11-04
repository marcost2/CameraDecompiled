
/* qcamera::QCamera3Exif::~QCamera3Exif() */

QCamera3Exif * __thiscall qcamera::QCamera3Exif::_QCamera3Exif(QCamera3Exif *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void **ppvVar4;
  int iVar5;
  
  *(int *)this = *(int *)(DAT_000ac7cc + 0xac746) + 8;
  if (*(int *)(this + 0x4b4) != 0) {
    ppvVar4 = (void **)(this + 0x10);
    uVar3 = 0;
    iVar5 = *(int *)(DAT_000ac7d0 + 0xac760);
    iVar1 = DAT_000ac7d4 + 0xac768;
    iVar2 = DAT_000ac7d8 + 0xac76e;
    do {
      switch(ppvVar4[-3]) {
      case (void *)0x1:
      case (void *)0x3:
      case (void *)0x4:
      case (void *)0x5:
      case (void *)0x9:
      case (void *)0xa:
        if ((void *)0x1 < ppvVar4[-1]) goto switchD_000ac794_caseD_2;
        break;
      case (void *)0x2:
      case (void *)0x7:
switchD_000ac794_caseD_2:
        if (*ppvVar4 != (void *)0x0) {
          free(*ppvVar4);
          *ppvVar4 = (void *)0x0;
        }
        break;
      case (void *)0x6:
      case (void *)0x8:
      default:
        if (*(int *)(iVar5 + 0x24) != 0) {
          mm_camera_debug_log(1,2,iVar2,0xcd1,iVar1);
        }
      }
      ppvVar4 = ppvVar4 + 6;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(this + 0x4b4));
  }
  return this;
}

