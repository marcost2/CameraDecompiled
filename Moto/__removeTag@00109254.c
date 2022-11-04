
/* qcamera::MotMakernote::__removeTag(unsigned short) */

void __thiscall qcamera::MotMakernote::__removeTag(MotMakernote *this,ushort param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *__ptr;
  
  if (*(ushort **)(this + 6) != (ushort *)0x0) {
    puVar1 = (ushort *)0x0;
    __ptr = *(ushort **)(this + 6);
    do {
      puVar2 = *(ushort **)(__ptr + 6);
      if ((*__ptr == param_1) && (*(short *)(this + 4) != 0)) {
        if (puVar1 == (ushort *)0x0) {
          *(ushort **)(this + 6) = puVar2;
        }
        else {
          *(ushort **)(puVar1 + 6) = puVar2;
        }
        free(*(void **)(__ptr + 4));
        free(__ptr);
        *(short *)(this + 4) = *(short *)(this + 4) + -1;
        return;
      }
      puVar1 = __ptr;
      __ptr = puVar2;
    } while (puVar2 != (ushort *)0x0);
  }
  return;
}

