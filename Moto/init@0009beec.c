
/* qcamera::QCamera3Stream::init(cam_stream_type_t, cam_format_t, cam_dimension_t, cam_rotation_t,
   cam_stream_reproc_config_t*, unsigned char, unsigned long long, cam_is_type_t, unsigned int, void
   (*)(mm_camera_super_buf_t*, qcamera::QCamera3Stream*, void*), void*) */

int qcamera::QCamera3Stream::init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  int iVar2;
  QCamera3HeapMemory *pQVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  code *pcVar12;
  int iVar13;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  void *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  
  piVar10 = *(int **)(DAT_0009c26c + 0x9bf02);
  iVar1 = *piVar10;
  iVar13 = *(int *)(DAT_0009c270 + 0x9bf10);
  if (*(int *)(iVar13 + 0x48) != 0) {
    mm_camera_debug_log(2,4,DAT_0009c278 + 0x9bf2e,0x155,DAT_0009c274 + 0x9bf22);
  }
  iVar2 = (**(code **)(*(int *)(ctx + 0x10) + 0x40))
                    (*(undefined4 *)(ctx + 4),*(undefined4 *)(ctx + 8));
  *(int *)(ctx + 0xc) = iVar2;
  if (iVar2 == 0) {
    if (*(int *)(iVar13 + 0x3c) == 0) {
      iVar2 = -0x80000000;
    }
    else {
      mm_camera_debug_log(2,1,DAT_0009c280 + 0x9c032,0x159,DAT_0009c27c + 0x9c02a);
      iVar2 = -0x80000000;
    }
    goto LAB_0009c1f4;
  }
  pQVar3 = (QCamera3HeapMemory *)operator_new(0x610);
  pQVar3 = (QCamera3HeapMemory *)QCamera3HeapMemory::QCamera3HeapMemory(pQVar3,1);
  *(QCamera3HeapMemory **)(ctx + 200) = pQVar3;
  iVar2 = QCamera3HeapMemory::allocate(pQVar3,0x8350);
  if (iVar2 < 0) {
    if (*(int *)(iVar13 + 0x3c) == 0) {
      iVar2 = -0xc;
    }
    else {
      mm_camera_debug_log(2,1,DAT_0009c288 + 0x9c056,0x167,DAT_0009c284 + 0x9c04e);
      iVar2 = -0xc;
    }
  }
  else {
    pvVar4 = (void *)(**(code **)(**(int **)(ctx + 200) + 8))(*(int **)(ctx + 200),0);
    *(void **)(ctx + 0x14) = pvVar4;
    __aeabi_memclr8(pvVar4,0x8350);
    *(undefined4 *)(*(int *)(ctx + 0x14) + 4) = in_r1;
    *(undefined4 *)(*(int *)(ctx + 0x14) + 8) = in_r2;
    iVar5 = *(int *)(ctx + 0x14);
    *(undefined4 *)(iVar5 + 0xc) = in_r3;
    *(undefined4 *)(iVar5 + 0x10) = in_stack_00000000;
    *(undefined4 *)(*(int *)(ctx + 0x14) + 0x19c) = in_stack_0000000c;
    iVar5 = *(int *)(ctx + 0x14);
    *(undefined4 *)(iVar5 + 0x1b8) = in_stack_00000010;
    *(undefined4 *)(iVar5 + 0x1bc) = in_stack_00000014;
    *(undefined4 *)(*(int *)(ctx + 0x14) + 0x8330) = in_stack_00000018;
    *(undefined4 *)(*(int *)(ctx + 0x14) + 0x1f0) = in_stack_00000004;
    if (*(int *)(iVar13 + 0x48) != 0) {
      iVar5 = *(int *)(ctx + 0x14);
      mm_camera_debug_log(2,4,DAT_0009c290 + 0x9bfdc,0x177,DAT_0009c28c + 0x9bfc8,
                          *(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 0x1b8),
                          *(undefined4 *)(iVar5 + 0x1bc));
    }
    iVar5 = QCamera3Memory::getSize(*(QCamera3Memory **)(ctx + 200),0);
    if (iVar5 == -0x4b) {
      if (*(int *)(iVar13 + 0x3c) != 0) {
        mm_camera_debug_log(2,1,DAT_0009c2a0 + 0x9c010,0x184,DAT_0009c29c + 0x9c008);
      }
    }
    else {
      uVar11 = *(undefined4 *)(ctx + 4);
      uVar8 = *(undefined4 *)(ctx + 8);
      uVar9 = *(undefined4 *)(ctx + 0xc);
      pcVar12 = *(code **)(*(int *)(ctx + 0x10) + 0x50);
      uVar6 = QCamera3Memory::getFd(*(QCamera3Memory **)(ctx + 200),0);
      uVar7 = (**(code **)(**(int **)(ctx + 200) + 8))(*(int **)(ctx + 200),0);
      iVar2 = (*pcVar12)(uVar11,uVar8,uVar9,4,0,0xffffffff,uVar6,iVar5,uVar7);
      if (iVar2 < 0) {
        if (*(int *)(iVar13 + 0x3c) != 0) {
          mm_camera_debug_log(2,1,DAT_0009c298 + 0x9c164,0x180,DAT_0009c294 + 0x9c15c);
        }
      }
      else {
        ctx[0x34] = SUB41(in_stack_0000000c,0);
        if (in_stack_00000008 == (void *)0x0) {
          if (in_stack_0000001c == 0) {
            *(undefined4 *)(*(int *)(ctx + 0x14) + 0x1a0) = 0;
            goto LAB_0009c0d0;
          }
          if (in_stack_0000001c < 0x21) {
            ctx[0x284] = SUB41(0x30 / (in_stack_0000001c & 0xff),0);
            *(undefined4 *)(*(int *)(ctx + 0x14) + 0x1a0) = 2;
            *(char *)(*(int *)(ctx + 0x14) + 0x1a8) = (char)in_stack_0000001c;
            *(undefined4 *)(*(int *)(ctx + 0x14) + 0x1ac) = 0x44;
            *(uint *)(*(int *)(ctx + 0x14) + 0x19c) = (uint)(byte)ctx[0x284];
            *(undefined4 *)(*(int *)(ctx + 0x14) + 0x1b0) = 0;
            if (*(int *)(iVar13 + 0x48) != 0) {
              mm_camera_debug_log(2,4,DAT_0009c2b0 + 0x9c264,0x19e,DAT_0009c2ac + 0x9c25a,
                                  in_stack_0000001c);
            }
            goto LAB_0009c0d0;
          }
          if (*(int *)(iVar13 + 0x3c) != 0) {
            mm_camera_debug_log(2,1,DAT_0009c2a8 + 0x9c18e,400,DAT_0009c2a4 + 0x9c184,
                                in_stack_0000001c);
          }
          iVar2 = -0x16;
        }
        else {
          __aeabi_memcpy8((void *)(*(int *)(ctx + 0x14) + 0x248),in_stack_00000008,0x230);
          *(undefined4 *)(*(int *)(ctx + 0x14) + 0x1a0) = 1;
          *(undefined *)(*(int *)(ctx + 0x14) + 0x1a4) = 1;
LAB_0009c0d0:
          iVar2 = (**(code **)(*(int *)(ctx + 0x10) + 0x4c))
                            (*(undefined4 *)(ctx + 4),*(undefined4 *)(ctx + 8),
                             *(undefined4 *)(ctx + 0xc));
          if (-1 < iVar2) {
            iVar2 = 0;
            *(uint *)(ctx + 0x280) = in_stack_0000001c;
            *(undefined4 *)(ctx + 0x38) = in_stack_00000020;
            *(undefined4 *)(ctx + 0x3c) = in_stack_00000024;
            goto LAB_0009c1f4;
          }
          if (*(int *)(iVar13 + 0x3c) != 0) {
            mm_camera_debug_log(2,1,DAT_0009c2bc + 0x9c1b4,0x1af,DAT_0009c2b8 + 0x9c1aa,iVar2);
          }
        }
        (**(code **)(*(int *)(ctx + 0x10) + 0x58))
                  (*(undefined4 *)(ctx + 4),*(undefined4 *)(ctx + 8),*(undefined4 *)(ctx + 0xc),4,0,
                   0xffffffff);
      }
    }
    QCamera3HeapMemory::deallocate(*(QCamera3HeapMemory **)(ctx + 200));
  }
  if (*(int **)(ctx + 200) != (int *)0x0) {
    (**(code **)(**(int **)(ctx + 200) + 0x20))();
  }
  *(undefined4 *)(ctx + 0x14) = 0;
  *(undefined4 *)(ctx + 200) = 0;
  (**(code **)(*(int *)(ctx + 0x10) + 0x44))
            (*(undefined4 *)(ctx + 4),*(undefined4 *)(ctx + 8),*(undefined4 *)(ctx + 0xc));
  ctx[0x34] = (EVP_PKEY_CTX)0x0;
  *(undefined4 *)(ctx + 0xc) = 0;
LAB_0009c1f4:
  if (*piVar10 == iVar1) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

