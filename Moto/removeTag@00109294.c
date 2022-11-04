
/* qcamera::MotMakernote::removeTag(unsigned short) */

void __thiscall qcamera::MotMakernote::removeTag(MotMakernote *this,ushort param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *__ptr;
  
  pthread_mutex_lock((pthread_mutex_t *)this);
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
        break;
      }
      puVar1 = __ptr;
      __ptr = puVar2;
    } while (puVar2 != (ushort *)0x0);
  }
  pthread_mutex_unlock((pthread_mutex_t *)this);
  return;
}

