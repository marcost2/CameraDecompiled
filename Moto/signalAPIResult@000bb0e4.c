
/* qcamera::QCamera2HardwareInterface::signalAPIResult(qcamera::qcamera_api_result_t*) */

void __thiscall
qcamera::QCamera2HardwareInterface::signalAPIResult
          (QCamera2HardwareInterface *this,qcamera_api_result_t *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
  puVar1 = (undefined8 *)malloc(0x14);
  if (puVar1 == (undefined8 *)0x0) {
    if (*(int *)(*(int *)(DAT_000bb158 + 0xbb124) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000bb160 + 0xbb13c,0x211d,DAT_000bb15c + 0xbb134);
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    *puVar1 = *(undefined8 *)param_1;
    puVar1[1] = uVar4;
    *(undefined4 *)(puVar1 + 2) = 0;
    iVar3 = *(int *)(this + 0x930);
    if (*(int *)(this + 0x930) == 0) {
      *(undefined8 **)(this + 0x930) = puVar1;
    }
    else {
      do {
        iVar2 = iVar3;
        iVar3 = *(int *)(iVar2 + 0x10);
      } while (iVar3 != 0);
      *(undefined8 **)(iVar2 + 0x10) = puVar1;
    }
  }
  pthread_cond_broadcast((pthread_cond_t *)(this + 0x92c));
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
  return;
}

