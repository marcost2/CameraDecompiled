
/* qcamera::MotMakernote::~MotMakernote() */

MotMakernote * __thiscall qcamera::MotMakernote::_MotMakernote(MotMakernote *this)

{
  void *__ptr;
  void *pvVar1;
  
  __ptr = *(void **)(this + 6);
  while (__ptr != (void *)0x0) {
    pvVar1 = *(void **)((int)__ptr + 0xc);
    free(*(void **)((int)__ptr + 8));
    free(__ptr);
    __ptr = pvVar1;
  }
  pthread_mutex_destroy((pthread_mutex_t *)this);
  return this;
}

