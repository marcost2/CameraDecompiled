
/* qcamera::QCameraQueue::enqueue(void*) */

bool __thiscall
qcamera::QCameraQueue::enqueue
          (QCameraQueue *this,cam_mapping_buf_type param_1,uint param_2,uint param_3,int param_4,
          uint param_5,int param_6,uint param_7,void *param_8)

{
  QCameraQueue QVar1;
  undefined4 *__ptr;
  bool bVar2;
  
  __ptr = (undefined4 *)malloc(0xc);
  if (__ptr == (undefined4 *)0x0) {
    if (*(int *)(*(int *)(DAT_00038b1c + 0x38ae8) + 0x3c) == 0) {
      bVar2 = false;
    }
    else {
      mm_camera_debug_log();
      bVar2 = false;
    }
  }
  else {
    __ptr[1] = 0;
    *__ptr = 0;
    __ptr[2] = param_1;
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x18));
    QVar1 = this[0x14];
    if (QVar1 == (QCameraQueue)0x0) {
      free(__ptr);
    }
    else {
      cam_list_add_tail_node((cam_list *)__ptr,(cam_list *)(this + 4));
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
    }
    bVar2 = QVar1 != (QCameraQueue)0x0;
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x18));
  }
  return bVar2;
}

