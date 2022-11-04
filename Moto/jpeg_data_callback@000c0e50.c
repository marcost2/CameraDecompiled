
/* qcamera::QCameraMuxer::jpeg_data_callback(int, camera_memory const*, unsigned int,
   camera_frame_metadata*, void*, unsigned int, void (*)(void*, void*, int), void*, void*) */

void qcamera::QCameraMuxer::jpeg_data_callback
               (int param_1,camera_memory *param_2,uint param_3,camera_frame_metadata *param_4,
               void *param_5,uint param_6,FuncDef96 *param_7,void *param_8,void *param_9)

{
  QCameraMuxer *this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  QCameraMuxer **ppQVar5;
  
  iVar4 = *(int *)(DAT_000c0f2c + 0xc0e64);
  if (*(int *)(iVar4 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c0f34 + 0xc0e7c,0xa8c,DAT_000c0f30 + 0xc0e74);
  }
  ppQVar5 = *(QCameraMuxer ***)(DAT_000c0f38 + 0xc0e84);
  this = *ppQVar5;
  if (this == (QCameraMuxer *)0x0) {
    if (*(int *)(iVar4 + 0x20) == 0) {
      return;
    }
    uVar2 = 1;
    uVar3 = 0xa8d;
    iVar4 = DAT_000c0f3c + 0xc0f16;
    iVar1 = DAT_000c0f40 + 0xc0f1e;
    goto LAB_000c0f1c;
  }
  if (param_2 == (camera_memory *)0x0) {
LAB_000c0ee2:
    sendEvtNotify(1,-0x80000000,0);
  }
  else {
    if (*(int *)(iVar4 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000c0f48 + 0xc0eba,0xa91,DAT_000c0f44 + 0xc0ea6,param_2,
                          *(undefined4 *)(param_2 + 4),*(undefined4 *)param_2,param_6);
      this = *ppQVar5;
    }
    iVar1 = storeJpeg(this,SUB41(*(undefined4 *)((int)param_5 + 0xc),0),param_1,param_2,param_3,
                      param_4,param_5,param_6,(FuncDef99 *)param_7,param_8,param_9);
    if (iVar1 != 0) goto LAB_000c0ee2;
  }
  if (*(int *)(iVar4 + 0x28) == 0) {
    return;
  }
  uVar2 = 3;
  uVar3 = 0xa9b;
  iVar4 = DAT_000c0f4c + 0xc0efe;
  iVar1 = DAT_000c0f50 + 0xc0f06;
LAB_000c0f1c:
  mm_camera_debug_log(1,uVar2,iVar1,uVar3,iVar4);
  return;
}

