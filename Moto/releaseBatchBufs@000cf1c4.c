
/* qcamera::QCameraStream::releaseBatchBufs(mm_camera_map_unmap_ops_tbl_t*) */

uint __thiscall
qcamera::QCameraStream::releaseBatchBufs(QCameraStream *this,mm_camera_map_unmap_ops_tbl_t *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  
  if (*(int *)(this + 0x11c) == 0) {
    uVar3 = 0;
  }
  else {
    if (this[0x8d] == (QCameraStream)0x0) {
      uVar3 = 0;
    }
    else {
      uVar9 = 0;
      iVar10 = *(int *)(DAT_000cf2e4 + 0xcf1e2);
      iVar1 = DAT_000cf2e8 + 0xcf1ea;
      iVar2 = DAT_000cf2ec + 0xcf1f0;
      do {
        if (param_1 == (mm_camera_map_unmap_ops_tbl_t *)0x0) {
          uVar3 = *(uint *)(this + 0x60);
          uVar5 = *(undefined4 *)(this + 100);
          uVar6 = *(undefined4 *)(this + 0x68);
          pcVar8 = *(code **)(*(int *)(this + 0x6c) + 0x58);
          uVar7 = 3;
        }
        else {
          pcVar8 = *(code **)(param_1 + 8);
          uVar7 = *(undefined4 *)(param_1 + 0xc);
          uVar5 = 0xffffffff;
          uVar6 = 3;
          uVar3 = uVar9;
        }
        uVar3 = (*pcVar8)(uVar3,uVar5,uVar6,uVar7);
        if ((0x7fffffff < uVar3) && (*(int *)(iVar10 + 0x20) != 0)) {
          mm_camera_debug_log(1,1,iVar2,0x7d7,iVar1,uVar3);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (byte)this[0x8d]);
    }
    *(undefined4 *)(this + 0x11c) = 0;
    __aeabi_memclr8(this + 0x120,0x188);
    this[0x8d] = (QCameraStream)0x0;
  }
  if (*(int **)(this + 0x10c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x10c) + 0xc))();
    if (*(int **)(this + 0x10c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x10c) + 0x2c))();
    }
  }
  *(undefined4 *)(this + 0x118) = 0;
  if (*(QCameraMemory **)(this + 0x110) != (QCameraMemory *)0x0) {
    iVar1 = QCameraMemory::getCnt(*(QCameraMemory **)(this + 0x110));
    if (iVar1 != 0) {
      uVar9 = 0;
      do {
        if (param_1 == (mm_camera_map_unmap_ops_tbl_t *)0x0) {
          uVar4 = *(uint *)(this + 0x60);
          uVar5 = *(undefined4 *)(this + 100);
          uVar6 = *(undefined4 *)(this + 0x68);
          pcVar8 = *(code **)(*(int *)(this + 0x6c) + 0x58);
          uVar7 = 8;
        }
        else {
          pcVar8 = *(code **)(param_1 + 8);
          uVar7 = *(undefined4 *)(param_1 + 0xc);
          uVar5 = 0xffffffff;
          uVar6 = 8;
          uVar4 = uVar9;
        }
        (*pcVar8)(uVar4,uVar5,uVar6,uVar7);
        uVar9 = uVar9 + 1;
        uVar4 = QCameraMemory::getCnt(*(QCameraMemory **)(this + 0x110));
      } while (uVar9 < uVar4);
    }
    (**(code **)(**(int **)(this + 0x110) + 0xc))();
    if (*(int **)(this + 0x110) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x110) + 0x2c))();
    }
    *(undefined4 *)(this + 0x110) = 0;
  }
  return uVar3;
}

