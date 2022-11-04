
/* qcamera::QCamera3Stream::getBatchBufDef(mm_camera_buf_def&, int) */

undefined4 __thiscall
qcamera::QCamera3Stream::getBatchBufDef(QCamera3Stream *this,mm_camera_buf_def *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  __aeabi_memclr8(param_1,0x218);
  if (*(QCamera3Memory **)(this + 0x288) != (QCamera3Memory *)0x0) {
    uVar1 = QCamera3Memory::getFd(*(QCamera3Memory **)(this + 0x288),0);
    *(undefined4 *)(param_1 + 0x204) = uVar1;
    *(undefined4 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(*(int *)(this + 0x14) + 0x1ac);
    *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(this + 0x288);
    iVar2 = (**(code **)(**(int **)(this + 0x288) + 8))(*(int **)(this + 0x288),0);
    iVar3 = *(int *)(*(int *)(this + 0x14) + 0x1ac);
    *(int *)(param_1 + 0xc) = param_2;
    *(int *)(param_1 + 0x208) = iVar3 * param_2 + iVar2;
    uVar1 = *(undefined4 *)(this + 0x280);
    param_1[0x21] = (mm_camera_buf_def)0x0;
    param_1[0x20] = SUB41(uVar1,0);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(this + 0xd0);
  }
  return 0;
}

