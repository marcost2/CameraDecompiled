
/* qcamera::QCamera2HardwareInterface::getCapabilities(unsigned int, camera_info*, cam_sync_type_t*)
    */

undefined4
qcamera::QCamera2HardwareInterface::getCapabilities
          (uint param_1,camera_info *param_2,cam_sync_type_t *param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  pthread_mutex_t *__mutex;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = *(uint **)(DAT_000b30cc + 0xb302c);
  if (1 < *puVar2) {
    if ((**(byte **)(DAT_000b30d0 + 0xb3038) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b30d4 + 0xb3046) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000b30d8 + 0xb30b8);
    }
  }
  __mutex = *(pthread_mutex_t **)(DAT_000b30dc + 0xb3052);
  pthread_mutex_lock(__mutex);
  puVar1 = (undefined8 *)get_cam_info(param_1,param_3);
  *(undefined4 *)(puVar1 + 1) = 0x100;
  *(undefined4 *)(undefined8 *)((int)puVar1 + 0xc) = 0;
  uVar3 = puVar1[1];
  uVar4 = *(undefined8 *)((int)puVar1 + 0xc);
  uVar5 = *(undefined8 *)((int)puVar1 + 0x14);
  *(undefined8 *)param_2 = *puVar1;
  *(undefined8 *)(param_2 + 8) = uVar3;
  *(undefined8 *)(param_2 + 0xc) = uVar4;
  *(undefined8 *)(param_2 + 0x14) = uVar5;
  pthread_mutex_unlock(__mutex);
  if (1 < *puVar2) {
    if ((**(byte **)(DAT_000b30e0 + 0xb3092) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b30e4 + 0xb30a0) + 1) << 0x1d) < 0) {
      atrace_end_body();
      return 0;
    }
  }
  return 0;
}

