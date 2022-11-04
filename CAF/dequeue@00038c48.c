
/* qcamera::QCameraQueue::dequeue(bool (*)(void*, void*, void*), void*) */

undefined4 __thiscall qcamera::QCameraQueue::dequeue(QCameraQueue *this,bool param_1)

{
  cam_list **__ptr;
  int iVar1;
  code *pcVar2;
  int in_r2;
  cam_list **ppcVar3;
  pthread_mutex_t *__mutex;
  undefined4 uVar4;
  int unaff_r10;
  
  pcVar2 = (code *)(uint)param_1;
  uVar4 = 0;
  if (pcVar2 != (code *)0x0) {
    unaff_r10 = in_r2;
  }
  if (pcVar2 != (code *)0x0 && in_r2 != 0) {
    __mutex = (pthread_mutex_t *)(this + 0x18);
    pthread_mutex_lock(__mutex);
    if (this[0x14] == (QCameraQueue)0x0) {
LAB_00038c8e:
      pthread_mutex_unlock(__mutex);
      uVar4 = 0;
    }
    else {
      ppcVar3 = (cam_list **)*(cam_list **)(this + 4);
      do {
        __ptr = ppcVar3;
        if (__ptr == (cam_list **)(this + 4)) goto LAB_00038c8e;
        ppcVar3 = (cam_list **)*__ptr;
      } while ((__ptr == (cam_list **)0x0) ||
              (iVar1 = (*pcVar2)(__ptr[2],*(undefined4 *)(this + 0x20),unaff_r10), iVar1 == 0));
      cam_list_del_node((cam_list *)__ptr);
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
      uVar4 = __ptr[2];
      free(__ptr);
      pthread_mutex_unlock(__mutex);
    }
  }
  return uVar4;
}

