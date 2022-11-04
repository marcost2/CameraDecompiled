
/* qcamera::QCameraQueue::dequeue(bool) */

undefined4 __thiscall qcamera::QCameraQueue::dequeue(QCameraQueue *this,bool param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined4 uVar2;
  cam_list *__ptr;
  
  __mutex = (pthread_mutex_t *)(this + 0x18);
  pthread_mutex_lock(__mutex);
  if (this[0x14] != (QCameraQueue)0x0) {
    iVar1 = 8;
    if (param_1 != false) {
      iVar1 = 4;
    }
    __ptr = *(cam_list **)(this + iVar1);
    if (__ptr != (cam_list *)(this + 4)) {
      cam_list_del_node(__ptr);
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
      pthread_mutex_unlock(__mutex);
      if (__ptr == (cam_list *)0x0) {
        return 0;
      }
      uVar2 = *(undefined4 *)(__ptr + 8);
      free(__ptr);
      return uVar2;
    }
  }
  pthread_mutex_unlock(__mutex);
  return 0;
}

