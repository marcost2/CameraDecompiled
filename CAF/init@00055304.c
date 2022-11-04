
/* qcamera::QCamera3Stream::init(cam_stream_type_t, cam_format_t, cam_dimension_t, cam_rotation_t,
   cam_stream_reproc_config_t*, unsigned char, unsigned long long, cam_is_type_t, unsigned int, void
   (*)(mm_camera_super_buf_t*, qcamera::QCamera3Stream*, void*), void*) */

undefined4 __thiscall qcamera::QCamera3Stream::init(QCamera3Stream *this)

{
  int iVar1;
  QCamera3HeapMemory *this_00;
  allocator *paVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_r1;
  undefined4 extraout_r1;
  uint extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  code *pcVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  void *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 uStack100;
  undefined4 local_60;
  undefined4 uStack92;
  undefined8 uStack88;
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  QCamera3Stream *local_30;
  int local_28;
  
  piVar8 = *(int **)(DAT_00055688 + 0x55318);
  local_28 = *piVar8;
  iVar11 = *(int *)(DAT_0005568c + 0x55326);
  if (*(int *)(iVar11 + 0x48) != 0) {
    mm_camera_debug_log();
  }
  iVar1 = (**(code **)(*(int *)(this + 0x10) + 0x40))
                    (*(undefined4 *)(this + 4),*(undefined4 *)(this + 8));
  *(int *)(this + 0xc) = iVar1;
  if (iVar1 == 0) {
    if (*(int *)(iVar11 + 0x3c) == 0) {
      uVar5 = 0x80000000;
    }
    else {
      mm_camera_debug_log();
      uVar5 = 0x80000000;
    }
    goto LAB_0005560e;
  }
  this_00 = (QCamera3HeapMemory *)operator_new(0x610);
  paVar2 = (allocator *)QCamera3HeapMemory::QCamera3HeapMemory(this_00,1);
  *(allocator **)(this + 200) = paVar2;
  uVar3 = QCamera3HeapMemory::allocate(paVar2,0x82e0);
  if ((int)uVar3 < 0) {
    if (*(int *)(iVar11 + 0x3c) == 0) {
      uVar5 = 0xfffffff4;
    }
    else {
      mm_camera_debug_log();
      uVar5 = 0xfffffff4;
    }
  }
  else {
    pvVar4 = (void *)(**(code **)(**(int **)(this + 200) + 8))(*(int **)(this + 200),0);
    *(void **)(this + 0x14) = pvVar4;
    __aeabi_memclr4(pvVar4,0x82e0);
    *(undefined4 *)(*(int *)(this + 0x14) + 4) = in_r1;
    *(undefined4 *)(*(int *)(this + 0x14) + 8) = in_r2;
    iVar1 = *(int *)(this + 0x14);
    *(undefined4 *)(iVar1 + 0xc) = in_r3;
    *(undefined4 *)(iVar1 + 0x10) = in_stack_00000000;
    *(undefined4 *)(*(int *)(this + 0x14) + 0x19c) = in_stack_0000000c;
    iVar1 = *(int *)(this + 0x14);
    *(undefined4 *)(iVar1 + 0x1b8) = in_stack_00000010;
    *(undefined4 *)(iVar1 + 0x1bc) = in_stack_00000014;
    *(uint *)(*(int *)(this + 0x14) + 0x82c0) = in_stack_00000018;
    *(undefined4 *)(*(int *)(this + 0x14) + 0x1d8) = in_stack_00000004;
    if (*(int *)(iVar11 + 0x48) != 0) {
      in_stack_00000018 = DAT_000556ac + 0x553ec;
      mm_camera_debug_log();
    }
    uVar12 = QCamera3Memory::getSize(*(QCamera3Memory **)(this + 200),0);
    uVar13 = uVar12 & 0xffffffff00000000 | (ulonglong)uVar3;
    if ((int)uVar12 == -0x4b) {
      if (*(int *)(iVar11 + 0x3c) != 0) {
        in_stack_00000018 = DAT_000556bc + 0x55420;
        mm_camera_debug_log();
        uVar13 = CONCAT44(extraout_r1,uVar3);
      }
    }
    else {
      uVar9 = *(undefined4 *)(this + 4);
      uVar7 = *(undefined4 *)(this + 8);
      in_stack_00000018 = *(uint *)(this + 0xc);
      pcVar10 = *(code **)(*(int *)(this + 0x10) + 0x50);
      uVar5 = QCamera3Memory::getFd(*(QCamera3Memory **)(this + 200),0);
      uVar6 = (**(code **)(**(int **)(this + 200) + 8))(*(int **)(this + 200),0);
      iVar1 = 0;
      uVar3 = 0xffffffff;
      uVar13 = (*pcVar10)(uVar9,uVar7,in_stack_00000018,4,0,0xffffffff,uVar5,(int)uVar12,uVar6);
      if ((int)uVar13 < 0) {
        if (*(int *)(iVar11 + 0x3c) != 0) {
          in_stack_00000018 = DAT_000556b4 + 0x55576;
          mm_camera_debug_log();
          uVar13 = uVar13 & 0xffffffff | (ulonglong)extraout_r1_00 << 0x20;
        }
      }
      else {
        this[0x34] = SUB41(in_stack_0000000c,0);
        if (in_stack_00000008 == (void *)0x0) {
          if (in_stack_0000001c == 0) {
            *(undefined4 *)(*(int *)(this + 0x14) + 0x1a0) = 0;
            goto LAB_000554e8;
          }
          if (in_stack_0000001c < 0x21) {
            this[0x288] = SUB41(0x30 / (in_stack_0000001c & 0xff),0);
            *(undefined4 *)(*(int *)(this + 0x14) + 0x1a0) = 2;
            *(char *)(*(int *)(this + 0x14) + 0x1a8) = (char)in_stack_0000001c;
            *(undefined4 *)(*(int *)(this + 0x14) + 0x1ac) = 0x44;
            *(uint *)(*(int *)(this + 0x14) + 0x19c) = (uint)(byte)this[0x288];
            *(undefined4 *)(*(int *)(this + 0x14) + 0x1b0) = 0;
            if (*(int *)(iVar11 + 0x48) != 0) {
              iVar1 = DAT_000556c8 + 0x5566e;
              uVar3 = in_stack_0000001c;
              mm_camera_debug_log();
            }
            goto LAB_000554e8;
          }
          if (*(int *)(iVar11 + 0x3c) != 0) {
            mm_camera_debug_log();
          }
          iVar1 = -0x16;
        }
        else {
          __aeabi_memcpy8((void *)(*(int *)(this + 0x14) + 0x210),in_stack_00000008,0x1f8);
          *(undefined4 *)(*(int *)(this + 0x14) + 0x1a0) = 1;
          *(undefined *)(*(int *)(this + 0x14) + 0x1a4) = 1;
LAB_000554e8:
          local_70 = *(undefined4 *)(this + 0x14);
          local_50 = *(undefined8 *)(this + 0x18);
          uStack72 = *(undefined8 *)(this + 0x20);
          local_40 = *(undefined8 *)(this + 0x28);
          uStack88 = *(undefined8 *)(this + 0x270);
          local_6c = *(undefined8 *)(this + 0x25c);
          uStack92 = (undefined4)((ulonglong)*(undefined8 *)(this + 0x268) >> 0x20);
          uStack100 = (undefined4)*(undefined8 *)(this + 0x264);
          local_60 = (undefined4)((ulonglong)*(undefined8 *)(this + 0x264) >> 0x20);
          local_34 = *(undefined4 *)(DAT_000556d0 + 0x5552a);
          local_38 = 0;
          local_30 = this;
          iVar1 = (**(code **)(*(int *)(this + 0x10) + 0x4c))
                            (*(undefined4 *)(this + 4),*(undefined4 *)(this + 8),
                             *(undefined4 *)(this + 0xc),&local_70,iVar1,uVar3);
          if (-1 < iVar1) {
            *(uint *)(this + 0x284) = in_stack_0000001c;
            *(undefined4 *)(this + 0x38) = in_stack_00000020;
            *(undefined4 *)(this + 0x3c) = in_stack_00000024;
            uVar5 = 0;
            goto LAB_0005560e;
          }
          if (*(int *)(iVar11 + 0x3c) != 0) {
            mm_camera_debug_log();
          }
        }
        in_stack_00000018 = *(uint *)(this + 0xc);
        (**(code **)(*(int *)(this + 0x10) + 0x58))
                  (*(undefined4 *)(this + 4),*(undefined4 *)(this + 8),in_stack_00000018,4,0,
                   0xffffffff);
        uVar13 = CONCAT44(extraout_r1_01,iVar1);
      }
    }
    uVar5 = (undefined4)uVar13;
    QCamera3HeapMemory::deallocate
              (*(allocator **)(this + 200),(__tree_node *)(uVar13 >> 0x20),in_stack_00000018);
  }
  if (*(int **)(this + 200) != (int *)0x0) {
    (**(code **)(**(int **)(this + 200) + 0x20))();
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 200) = 0;
  (**(code **)(*(int *)(this + 0x10) + 0x44))
            (*(undefined4 *)(this + 4),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  this[0x34] = (QCamera3Stream)0x0;
  *(undefined4 *)(this + 0xc) = 0;
LAB_0005560e:
  if (*piVar8 == local_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

