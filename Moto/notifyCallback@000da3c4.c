
/* qcamera::QCameraCbNotifier::notifyCallback(qcamera::qcamera_callback_argm_t&) */

undefined4 __thiscall
qcamera::QCameraCbNotifier::notifyCallback(QCameraCbNotifier *this,qcamera_callback_argm_t *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (this[0x84] == (QCameraCbNotifier)0x0) {
    if (*(int *)(*(int *)(DAT_000da480 + 0xda434) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000da488 + 0xda44c,0xf16,DAT_000da484 + 0xda444);
    }
  }
  else {
    puVar1 = (undefined8 *)operator_new(0x38);
    uVar4 = *(undefined8 *)param_1;
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = uVar6;
    puVar1[4] = uVar7;
    puVar1[5] = uVar8;
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[6] = uVar9;
    iVar2 = QCameraQueue::enqueue((QCameraQueue *)(this + 0x20),puVar1);
    if (iVar2 != 0) {
      uVar3 = QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x44),3,'\0','\0');
      return uVar3;
    }
    if (*(int *)(*(int *)(DAT_000da48c + 0xda456) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000da494 + 0xda46e,0xf25,DAT_000da490 + 0xda466);
    }
    operator_delete(puVar1);
  }
  return 0x80000000;
}

