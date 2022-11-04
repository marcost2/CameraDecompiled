
/* qcamera::QCamera3ReprocessChannel::doMetaReprocessOffline(qcamera::qcamera_fwk_input_pp_data_t*)
    */

undefined4 __thiscall
qcamera::QCamera3ReprocessChannel::doMetaReprocessOffline
          (QCamera3ReprocessChannel *this,qcamera_fwk_input_pp_data_t *param_1)

{
  int iVar1;
  uint uVar2;
  int **ppiVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *this_00;
  undefined4 local_7edc;
  int *local_7ed8;
  undefined4 local_7ed4;
  undefined auStack32464 [4];
  undefined local_7ecc;
  int *local_7ec4;
  
  piVar9 = *(int **)(DAT_000a5d38 + 0xa5a88);
  iVar1 = *piVar9;
  iVar10 = *(int *)(DAT_000a5d3c + 0xa5a94);
  if (*(int *)(iVar10 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a5d44 + 0xa5ab0,0x1489,DAT_000a5d40 + 0xa5aa8);
  }
  if (this[0xf51] == (QCamera3ReprocessChannel)0x0) {
    if (*(int *)(iVar10 + 0x20) != 0) {
      uVar4 = 0x148c;
      iVar10 = DAT_000a5d50 + 0xa5af0;
      iVar5 = DAT_000a5d54 + 0xa5af8;
      goto LAB_000a5cde;
    }
    goto LAB_000a5ce2;
  }
  uVar2 = *(uint *)(this + 0x44);
  if (uVar2 == 0) {
LAB_000a5cc6:
    if (*(int *)(iVar10 + 0x20) != 0) {
      uVar4 = 0x1498;
      iVar10 = DAT_000a5d58 + 0xa5cd8;
      iVar5 = DAT_000a5d5c + 0xa5ce0;
LAB_000a5cde:
      mm_camera_debug_log(1,1,iVar5,uVar4,iVar10);
    }
  }
  else {
    uVar7 = 0;
    do {
      if (*(int *)(*(int *)(*(int *)(this + uVar7 * 4 + 0x24) + 0x14) + 0x3e4) == 7) {
        if (*(int *)(iVar10 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000a5d4c + 0xa5b1a,0x1493,DAT_000a5d48 + 0xa5b0c,uVar7,
                              *(undefined4 *)(this + uVar7 * 4 + 0xd8));
          uVar2 = *(uint *)(this + 0x44);
        }
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
    if (uVar2 <= uVar7) goto LAB_000a5cc6;
    if (*(QCamera3StreamMem **)(this + 0x104) == (QCamera3StreamMem *)0x0) {
      if (*(int *)(iVar10 + 0x20) == 0) goto LAB_000a5ce2;
      uVar4 = 0x149e;
      iVar10 = DAT_000a5d60 + 0xa5d10;
      iVar5 = DAT_000a5d64 + 0xa5d18;
      goto LAB_000a5cde;
    }
    this_00 = *(int **)(this + uVar7 * 4 + 0x24);
    uVar2 = QCamera3StreamMem::allocateOne
                      (*(QCamera3StreamMem **)(this + 0x104),*(uint *)(this + 0xbc));
    if (-1 < (int)uVar2) {
      if (*(int *)(iVar10 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000a5d74 + 0xa5b6a,0x14ab,DAT_000a5d70 + 0xa5b5c,
                            *(undefined4 *)(this + 0xbc),uVar2);
      }
      QCamera3StreamMem::markFrameNumber
                (*(QCamera3StreamMem **)(this + 0x104),uVar2,*(uint *)(param_1 + 0x608));
      (**(code **)(*this_00 + 0xc))(this_00,uVar2);
      piVar11 = *(int **)(this + 0xb0);
      QCamera3StreamMem::cleanInvalidateCache(*(QCamera3StreamMem **)(this + 0x104),(uint)piVar11);
      uVar2 = QCamera3Stream::mapBuf
                        ((QCamera3Stream *)this_00,'\x05',(uint)piVar11,-1,*(int *)(param_1 + 0x218)
                         ,*(void **)(param_1 + 0x21c),*(uint *)(param_1 + 0x220));
      if (uVar2 == 0) {
        piVar8 = *(int **)(this + 0x9c);
        ppiVar3 = (int **)operator_new(0x14);
        ppiVar3[4] = piVar8;
        ppiVar3[2] = piVar11;
        *ppiVar3 = this_00;
        ppiVar3[1] = (int *)0x5;
        ppiVar3[3] = (int *)piVar8[3];
        *(int ***)(piVar8[3] + 0x10) = ppiVar3;
        piVar8[3] = (int)ppiVar3;
        if (*(int *)(iVar10 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000a5d7c + 0xa5bf0,0x14bf,DAT_000a5d78 + 0xa5be6,piVar11);
        }
      }
      local_7ec4 = *(int **)(this + 0xb4);
      piVar8 = *(int **)(param_1 + 0x220);
      uVar7 = QCamera3Stream::mapBuf
                        ((QCamera3Stream *)this_00,'\x06',(uint)local_7ec4,-1,
                         *(int *)(param_1 + 0x218),*(void **)(param_1 + 0x21c),(uint)piVar8);
      if ((uVar7 | uVar2) == 0) {
        piVar6 = *(int **)(this + 0xa4);
        ppiVar3 = (int **)operator_new(0x14);
        ppiVar3[4] = piVar6;
        ppiVar3[2] = local_7ec4;
        ppiVar3[1] = (int *)0x6;
        *ppiVar3 = this_00;
        ppiVar3[3] = (int *)piVar6[3];
        *(int ***)(piVar6[3] + 0x10) = ppiVar3;
        piVar6[3] = (int)ppiVar3;
        if (*(int *)(iVar10 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000a5d84 + 0xa5c54,0x14cd,DAT_000a5d80 + 0xa5c4a,local_7ec4);
        }
      }
      __aeabi_memclr8(auStack32464,0x7ea8);
      local_7edc = 0x60;
      local_7ed4 = *(undefined4 *)(param_1 + 0x248);
      local_7ecc = 1;
      local_7ed8 = piVar11;
      if (*(int *)(iVar10 + 0x34) != 0) {
        mm_camera_debug_log(1,6,DAT_000a5d8c + 0xa5c9a,0x14da,DAT_000a5d88 + 0xa5c8a,local_7ed4,
                            piVar11,local_7ec4);
        piVar8 = piVar11;
      }
      uVar4 = QCamera3Stream::setParameter
                        ((QCamera3Stream *)this_00,(cam_stream_parm_buffer_t *)&local_7edc);
      if (*(int *)(iVar10 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000a5d94 + 0xa5cc2,0x14dd,DAT_000a5d90 + 0xa5cb8,uVar4,piVar8);
      }
      goto LAB_000a5ce6;
    }
    if (*(int *)(iVar10 + 0x20) != 0) {
      uVar4 = 0x14a5;
      iVar10 = DAT_000a5d68 + 0xa5d2c;
      iVar5 = DAT_000a5d6c + 0xa5d34;
      goto LAB_000a5cde;
    }
  }
LAB_000a5ce2:
  uVar4 = 0xffffffea;
LAB_000a5ce6:
  if (*piVar9 != iVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}

