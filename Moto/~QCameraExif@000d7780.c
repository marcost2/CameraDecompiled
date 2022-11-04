
/* qcamera::QCameraExif::~QCameraExif() */

QCameraExif * __thiscall qcamera::QCameraExif::_QCameraExif(QCameraExif *this)

{
  void **ppvVar1;
  uint uVar2;
  
  *(int *)this = *(int *)(DAT_000d77dc + 0xd778c) + 8;
  if (*(int *)(this + 0x4b4) != 0) {
    ppvVar1 = (void **)(this + 0x10);
    uVar2 = 0;
    do {
      switch(ppvVar1[-3]) {
      case (void *)0x1:
      case (void *)0x3:
      case (void *)0x4:
      case (void *)0x5:
      case (void *)0x9:
      case (void *)0xa:
        if ((void *)0x1 < ppvVar1[-1]) goto switchD_000d77a8_caseD_2;
        break;
      case (void *)0x2:
      case (void *)0x7:
switchD_000d77a8_caseD_2:
        if (*ppvVar1 != (void *)0x0) {
          free(*ppvVar1);
          *ppvVar1 = (void *)0x0;
        }
      }
      ppvVar1 = ppvVar1 + 6;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(this + 0x4b4));
  }
  return this;
}

