
/* qcamera::QCamera3HardwareInterface::erasePendingRequest(android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::_ListIterator<qcamera::QCamera3HardwareInterface::PendingRequestInfo,
   android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::NON_CONST_ITERATOR>) */

void qcamera::QCamera3HardwareInterface::erasePendingRequest(_ListIterator param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *in_r2;
  int iVar4;
  
  iVar1 = *in_r2;
  if (*(void **)(iVar1 + 0x30) != (void *)0x0) {
    free(*(void **)(iVar1 + 0x30));
    *(undefined4 *)(*in_r2 + 0x30) = 0;
    iVar1 = *in_r2;
  }
  if (*(int *)(iVar1 + 0x34) != 0) {
    free_camera_metadata(*(int *)(iVar1 + 0x34));
    iVar1 = *in_r2;
  }
  iVar3 = *(int *)(iVar1 + 0x50);
  iVar4 = *(int *)(iVar1 + 0x54);
  *(int *)(iVar3 + 0x54) = iVar4;
  *(int *)(iVar4 + 0x50) = iVar3;
  if (iVar1 != 0) {
    pvVar2 = (void *)FUN_00098ffc(iVar1);
    operator_delete(pvVar2);
  }
  *(int *)param_1 = iVar4;
  return;
}

