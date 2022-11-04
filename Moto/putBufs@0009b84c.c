
/* qcamera::QCamera3Stream::putBufs(mm_camera_map_unmap_ops_tbl_t*) */

uint __thiscall
qcamera::QCamera3Stream::putBufs(QCamera3Stream *this,mm_camera_map_unmap_ops_tbl_t *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x27c));
  if (this[0x34] == (QCamera3Stream)0x0) {
    uVar4 = 0;
  }
  else {
    uVar3 = 0;
    iVar5 = 0x210;
    uVar4 = 0;
    iVar6 = *(int *)(DAT_0009b944 + 0x9b874);
    iVar1 = DAT_0009b948 + 0x9b87c;
    do {
      iVar2 = QCamera3StreamMem::valid(*(QCamera3StreamMem **)(this + 0xcc),uVar3);
      if ((((iVar2 != 0) && (*(int *)(*(int *)(this + 0xd0) + iVar5) != 0)) &&
          (uVar4 = (**(code **)(param_1 + 8))(uVar3,0xffffffff,3,*(undefined4 *)(param_1 + 0xc)),
          0x7fffffff < uVar4)) && (*(int *)(iVar6 + 0x3c) != 0)) {
        mm_camera_debug_log(2,1,DAT_0009b94c + 0x9b8be,0x3d7,iVar1,uVar4);
      }
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + 0x218;
    } while (uVar3 < (byte)this[0x34]);
  }
  *(undefined4 *)(this + 0xd0) = 0;
  __aeabi_memclr8(this + 0xd4,0x188);
  if ((*(int *)(this + 0xcc) == 0) && (*(int *)(*(int *)(DAT_0009b938 + 0x9b8f0) + 0x3c) != 0)) {
    mm_camera_debug_log(2,1,DAT_0009b940 + 0x9b908,0x3e0,DAT_0009b93c + 0x9b900);
  }
  if (*(int *)(*(int *)(this + 0x14) + 0x3e4) == 7) {
    QCamera3ReprocessChannel::putMetaStreamBufs((QCamera3ReprocessChannel *)*(int **)(this + 0x278))
    ;
  }
  else {
    (**(code **)(**(int **)(this + 0x278) + 0x3c))();
  }
  *(undefined4 *)(this + 0xcc) = 0;
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x27c));
  return uVar4;
}

