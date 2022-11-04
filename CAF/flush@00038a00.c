
/* qcamera::QCameraQueue::flush() */

void __thiscall qcamera::QCameraQueue::flush(QCameraQueue *this)

{
  cam_list **__ptr;
  cam_list **ppcVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x18));
  if (this[0x14] != (QCameraQueue)0x0) {
    __ptr = (cam_list **)*(cam_list **)(this + 4);
    while (__ptr != (cam_list **)(this + 4)) {
      ppcVar1 = (cam_list **)*__ptr;
      cam_list_del_node((cam_list *)__ptr);
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
      if (__ptr[2] != (cam_list *)0x0) {
        if (*(code **)(this + 0x1c) != (code *)0x0) {
          (**(code **)(this + 0x1c))(__ptr[2],*(undefined4 *)(this + 0x20));
        }
        free(__ptr[2]);
      }
      free(__ptr);
      __ptr = ppcVar1;
    }
    this[0x14] = (QCameraQueue)0x0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  __ThumbV7PILongThunk_pthread_mutex_unlock((pthread_mutex_t *)(this + 0x18));
  return;
}

