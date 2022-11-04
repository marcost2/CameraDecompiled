
/* qcamera::BokehSyncNode::dropSuperFrame(qcamera::camera_stereo_buf_info*) */

void __thiscall
qcamera::BokehSyncNode::dropSuperFrame(BokehSyncNode *this,camera_stereo_buf_info *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar3 = *(int *)(DAT_001021c4 + 0x1020fa);
  if (*(int *)(iVar3 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_001021c8 + 0x10210e,0x4e,DAT_001021d0 + 0x10210c,
                        DAT_001021cc + 0x10210a,DAT_001021c8 + 0x10210e);
  }
  if (param_1 == (camera_stereo_buf_info *)0x0) {
    if (*(int *)(iVar3 + 0x20) == 0) {
      return;
    }
    uVar4 = 1;
    uVar5 = 0x4f;
    iVar3 = DAT_001021d4 + 0x102168;
    iVar1 = DAT_001021d8 + 0x102170;
  }
  else {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 == (int *)0x0) {
      if (*(int *)(iVar3 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_001021e8 + 0x102182,0x58,DAT_001021f0 + 0x102186,
                            DAT_001021ec + 0x102184,DAT_001021e8 + 0x102182,*(undefined4 *)param_1,
                            *(undefined4 *)(param_1 + 4));
      }
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 8);
      uVar4 = *(undefined4 *)(param_1 + 0xc);
      if (*(int *)(iVar3 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_001021dc + 0x102136,0x55,DAT_001021e4 + 0x10213a,
                            DAT_001021e0 + 0x102138,DAT_001021dc + 0x102136,*(undefined4 *)param_1,
                            *(undefined4 *)(param_1 + 4));
      }
      (**(code **)(*piVar2 + 8))(piVar2,uVar5,uVar4);
    }
    if (*(int *)(iVar3 + 0x2c) == 0) {
      return;
    }
    uVar5 = 0x5a;
    iVar1 = DAT_001021f4 + 0x1021a8;
    iVar3 = DAT_001021fc + 0x1021ac;
    uVar4 = 4;
  }
  mm_camera_debug_log(1,uVar4,iVar1,uVar5,iVar3);
  return;
}

