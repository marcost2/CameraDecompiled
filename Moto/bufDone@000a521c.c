
/* qcamera::QCamera3ReprocessChannel::bufDone(mm_camera_super_buf_t*) */

undefined4 __thiscall
qcamera::QCamera3ReprocessChannel::bufDone
          (QCamera3ReprocessChannel *this,mm_camera_super_buf_t *param_1)

{
  undefined4 *puVar1;
  QCamera3StreamMem *this_00;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_1 != (mm_camera_super_buf_t *)0x0) && (*(int *)(param_1 + 8) == 1)) {
    pthread_mutex_lock((pthread_mutex_t *)(this + 0xc0));
    iVar3 = *(int *)(this + 200);
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc);
    puVar1 = (undefined4 *)operator_new(0xc);
    puVar1[2] = iVar3;
    *puVar1 = uVar2;
    puVar1[1] = *(undefined4 *)(iVar3 + 4);
    *(undefined4 **)(*(int *)(iVar3 + 4) + 8) = puVar1;
    *(undefined4 **)(iVar3 + 4) = puVar1;
    if ((this[0xf51] != (QCamera3ReprocessChannel)0x0) &&
       (this_00 = *(QCamera3StreamMem **)(this + 0x104), this_00 != (QCamera3StreamMem *)0x0)) {
      if (*(int *)(*(int *)(DAT_000a52bc + 0xa5264) + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000a52c4 + 0xa527c,0x1363,DAT_000a52c0 + 0xa5274);
        this_00 = *(QCamera3StreamMem **)(this + 0x104);
      }
      QCamera3StreamMem::deallocate(this_00);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0xc0));
    return 0;
  }
  if (*(int *)(*(int *)(DAT_000a52c8 + 0xa5298) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000a52d0 + 0xa52b0,0x1367,DAT_000a52cc + 0xa52a8);
  }
  return 0xffffffea;
}

