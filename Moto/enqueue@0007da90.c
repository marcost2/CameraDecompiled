
/* qcamera::QCameraQueue::enqueue(void*) */

bool __thiscall qcamera::QCameraQueue::enqueue(QCameraQueue *this,void *param_1)

{
  QCameraQueue QVar1;
  QCameraQueue **__ptr;
  undefined4 *puVar2;
  bool bVar3;
  
  __ptr = (QCameraQueue **)malloc(0xc);
  if (__ptr == (QCameraQueue **)0x0) {
    if (*(int *)(*(int *)(DAT_0007db08 + 0x7dad4) + 0x3c) == 0) {
      bVar3 = false;
    }
    else {
      mm_camera_debug_log(2,1,DAT_0007db10 + 0x7daea,0x96,DAT_0007db0c + 0x7dae2);
      bVar3 = false;
    }
  }
  else {
    __ptr[1] = (QCameraQueue *)0x0;
    *__ptr = (QCameraQueue *)0x0;
    __ptr[2] = (QCameraQueue *)param_1;
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x18));
    QVar1 = this[0x14];
    if (QVar1 == (QCameraQueue)0x0) {
      free(__ptr);
    }
    else {
      puVar2 = *(undefined4 **)(this + 8);
      *(QCameraQueue ***)(this + 8) = __ptr;
      *__ptr = this + 4;
      __ptr[1] = (QCameraQueue *)puVar2;
      *puVar2 = __ptr;
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
    }
    bVar3 = QVar1 != (QCameraQueue)0x0;
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x18));
  }
  return bVar3;
}

