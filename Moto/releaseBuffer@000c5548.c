
/* qcamera::QCameraMemoryPool::releaseBuffer(qcamera::QCameraMemory::QCameraMemInfo&,
   cam_stream_type_t) */

void __thiscall
qcamera::QCameraMemoryPool::releaseBuffer
          (QCameraMemoryPool *this,QCameraMemInfo *param_1,cam_stream_type_t param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 100));
  iVar2 = *(int *)(this + param_2 * 8 + 8);
  puVar1 = (undefined8 *)operator_new(0x20);
  uVar3 = *(undefined8 *)param_1;
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(int *)((int)puVar1 + 0x1c) = iVar2;
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(iVar2 + 0x18);
  *(undefined8 **)(*(int *)(iVar2 + 0x18) + 0x1c) = puVar1;
  *(undefined8 **)(iVar2 + 0x18) = puVar1;
  pthread_mutex_unlock((pthread_mutex_t *)(this + 100));
  return;
}

