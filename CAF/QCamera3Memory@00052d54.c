
/* qcamera::QCamera3Memory::QCamera3Memory() */

QCamera3Memory * __thiscall qcamera::QCamera3Memory::QCamera3Memory(QCamera3Memory *this)

{
  int iVar1;
  
  *(int *)this = *(int *)(DAT_00052d94 + 0x52d5e) + 8;
  android::Mutex::Mutex((Mutex *)(this + 0x608));
  *(undefined4 *)(this + 4) = 0;
  iVar1 = 0;
  do {
    *(undefined4 *)(this + iVar1 * 4 + 8) = 0xffffffff;
    *(undefined4 *)(this + iVar1 * 4 + 0xc) = 0xffffffff;
    *(undefined4 *)(this + iVar1 * 4 + 0x10) = 0;
    *(undefined4 *)(this + iVar1 * 4 + 0x14) = 0;
    *(undefined4 *)(this + iVar1 + 0x508) = 0xffffffff;
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x100);
  return this;
}

