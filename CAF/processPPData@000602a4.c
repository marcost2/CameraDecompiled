
/* qcamera::QCamera3PostProcessor::processPPData(mm_camera_super_buf_t*) */

undefined4 __thiscall
qcamera::QCamera3PostProcessor::processPPData
          (QCamera3PostProcessor *this,mm_camera_super_buf_t *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint in_r3;
  uint unaff_r4;
  int unaff_r5;
  uint unaff_r6;
  void *unaff_r7;
  undefined8 uVar5;
  int in_stack_ffffffe8;
  
  uVar5 = QCameraQueue::dequeue((QCameraQueue *)(this + 0x248),true);
  __ptr = (void *)uVar5;
  if (1 < **(uint **)(DAT_000603bc + 0x602be)) {
    atrace_int(CONCAT44(unaff_r4,in_stack_ffffffe8),(char *)0x0,(int)((ulonglong)uVar5 >> 0x20));
  }
  if ((__ptr == (void *)0x0) || ((*(int *)((int)__ptr + 4) == 0 && (*(int *)((int)__ptr + 8) == 0)))
     ) {
    iVar3 = *(int *)(*(int *)(DAT_000603c0 + 0x6031e) + 0x20);
  }
  else {
    if (*(int *)((int)__ptr + 0x10) != 0) {
      puVar1 = (undefined8 *)malloc(0x28);
      if (puVar1 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar1 + 4) = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar4 = (undefined4 *)((int)puVar1 + 0x24);
        *puVar4 = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        *(mm_camera_super_buf_t **)(puVar1 + 1) = param_1;
        if (*(mm_camera_super_buf_t **)((int)__ptr + 4) != param_1) {
          *(mm_camera_super_buf_t **)((int)puVar1 + 0xc) =
               *(mm_camera_super_buf_t **)((int)__ptr + 4);
        }
        piVar2 = (int *)((int)__ptr + 8);
        if (*piVar2 == 0) {
          piVar2 = (int *)((int)__ptr + 0xc);
          iVar3 = 0x1c;
        }
        else {
          *(undefined4 *)((int)puVar1 + 0x1c) = *(undefined4 *)(*piVar2 + 0x21c);
          iVar3 = 0x14;
        }
        *(int *)((int)puVar1 + iVar3) = *piVar2;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)__ptr + 0x14);
        *(undefined4 *)((int)puVar1 + 0x24) = *(undefined4 *)((int)__ptr + 0x10);
        free(__ptr);
        QCameraQueue::enqueue
                  ((QCameraQueue *)(this + 0x26c),(cam_mapping_buf_type)puVar1,(uint)puVar4,in_r3,
                   in_stack_ffffffe8,unaff_r4,unaff_r5,unaff_r6,unaff_r7);
        QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 800),3,'\0','\0');
        return 0;
      }
      if (*(int *)(*(int *)(DAT_000603d8 + 0x60362) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      return 0xfffffff4;
    }
    iVar3 = *(int *)(*(int *)(DAT_000603cc + 0x6033c) + 0x20);
  }
  if (iVar3 != 0) {
    mm_camera_debug_log();
  }
  return 0xffffffea;
}

