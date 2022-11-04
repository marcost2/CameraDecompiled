
/* qcamera::QCameraMuxer::storeJpeg(cam_sync_type_t, int, camera_memory const*, unsigned int,
   camera_frame_metadata*, void*, unsigned int, void (*)(void*, void*, int), void*, void*) */

undefined4 __thiscall
qcamera::QCameraMuxer::storeJpeg
          (QCameraMuxer *this,cam_sync_type_t param_1,int param_2,camera_memory *param_3,
          uint param_4,camera_frame_metadata *param_5,void *param_6,uint param_7,FuncDef99 *param_8,
          void *param_9,void *param_10)

{
  int *__ptr;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_000c4acc + 0xc4894);
  if (*(int *)(iVar4 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c4ad4 + 0xc48be,0xabb,DAT_000c4ad0 + 0xc48aa,param_3,
                        *(undefined4 *)(param_3 + 4),*(undefined4 *)param_3,param_7);
  }
  if (**(int **)(DAT_000c4ad8 + 0xc48c6) == 0) {
    if (*(int *)(iVar4 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c4ae0 + 0xc4986,0xabd,DAT_000c4adc + 0xc497e);
    }
    return 0xffffffed;
  }
  if (this[0xd5] == (QCameraMuxer)0x0) {
    if (param_1 == (cam_sync_type_t)0x1) {
      (**(code **)(this + 0x24))(param_2,param_3,param_4,param_5,*(undefined4 *)(this + 0xcc));
    }
    if (param_8 != (FuncDef99 *)0x0) {
      (*param_8)(param_10,param_9,0);
    }
    if (*(int *)(iVar4 + 0x28) == 0) {
      return 0;
    }
    uVar3 = 0xacc;
    iVar4 = DAT_000c4ae4 + 0xc49cc;
    iVar1 = DAT_000c4ae8 + 0xc49d4;
    goto LAB_000c4a6c;
  }
  __ptr = (int *)malloc(0x28);
  if (__ptr == (int *)0x0) {
    if (*(int *)(iVar4 + 0x20) == 0) {
      return 0xfffffff4;
    }
    mm_camera_debug_log(1,1,DAT_000c4af0 + 0xc49f0,0xad3,DAT_000c4aec + 0xc49e8);
    return 0xfffffff4;
  }
  *(undefined *)((int)__ptr + 0x17) = 0;
  *(undefined2 *)((int)__ptr + 0x15) = 0;
  __ptr[6] = param_7;
  __ptr[7] = (int)param_8;
  __ptr[8] = (int)param_9;
  __ptr[9] = (int)param_10;
  *(undefined *)(__ptr + 5) = 1;
  *__ptr = param_2;
  __ptr[1] = (int)param_3;
  __ptr[2] = param_4;
  __ptr[3] = (int)param_5;
  __ptr[4] = (int)param_6;
  if (param_1 == (cam_sync_type_t)0x1) {
    iVar1 = QCameraQueue::enqueue((QCameraQueue *)(this + 0x3c),__ptr);
    if (iVar1 == 0) {
      if (*(int *)(iVar4 + 0x20) == 0) goto LAB_000c4aae;
      uVar3 = 0xaea;
      iVar4 = DAT_000c4b0c + 0xc4a8a;
      iVar1 = DAT_000c4b10 + 0xc4a92;
LAB_000c4aaa:
      mm_camera_debug_log(1,1,iVar1,uVar3,iVar4);
LAB_000c4aae:
      if ((code *)__ptr[7] != (code *)0x0) {
        (*(code *)__ptr[7])(__ptr[9],__ptr[8],0);
      }
      free(__ptr);
      return 0xfffffff4;
    }
    if (*(int *)(iVar4 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000c4af8 + 0xc4944,0xae4,DAT_000c4af4 + 0xc4938,__ptr[6]);
    }
    if (0 < *(int *)(this + 0x4c)) {
      if (*(int *)(iVar4 + 0x2c) != 0) {
        uVar3 = 0xae6;
        iVar1 = DAT_000c4afc + 0xc4964;
        iVar2 = DAT_000c4b00 + 0xc496c;
LAB_000c4a42:
        mm_camera_debug_log(1,4,iVar2,uVar3,iVar1);
      }
LAB_000c4a46:
      QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x84),3,'\0','\0');
    }
  }
  else {
    iVar1 = QCameraQueue::enqueue((QCameraQueue *)(this + 0x60),__ptr);
    if (iVar1 == 0) {
      if (*(int *)(iVar4 + 0x20) == 0) goto LAB_000c4aae;
      uVar3 = 0xaff;
      iVar4 = DAT_000c4b24 + 0xc4aa4;
      iVar1 = DAT_000c4b28 + 0xc4aac;
      goto LAB_000c4aaa;
    }
    if (*(int *)(iVar4 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000c4b18 + 0xc4a20,0xaf9,DAT_000c4b14 + 0xc4a14,__ptr[6]);
    }
    if (0 < *(int *)(this + 0x70)) {
      if (*(int *)(iVar4 + 0x2c) != 0) {
        uVar3 = 0xafb;
        iVar1 = DAT_000c4b1c + 0xc4a3c;
        iVar2 = DAT_000c4b20 + 0xc4a44;
        goto LAB_000c4a42;
      }
      goto LAB_000c4a46;
    }
  }
  if (*(int *)(iVar4 + 0x28) == 0) {
    return 0;
  }
  uVar3 = 0xb0c;
  iVar4 = DAT_000c4b04 + 0xc4a66;
  iVar1 = DAT_000c4b08 + 0xc4a6e;
LAB_000c4a6c:
  mm_camera_debug_log(1,3,iVar1,uVar3,iVar4);
  return 0;
}

