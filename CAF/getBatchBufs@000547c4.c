
/* qcamera::QCamera3Stream::getBatchBufs(unsigned char*, unsigned char**, mm_camera_buf_def**,
   mm_camera_map_unmap_ops_tbl_t*) */

uint __thiscall
qcamera::QCamera3Stream::getBatchBufs
          (QCamera3Stream *this,uchar *param_1,uchar **param_2,mm_camera_buf_def **param_3,
          mm_camera_map_unmap_ops_tbl_t *param_4)

{
  QCamera3Stream QVar1;
  QCamera3HeapMemory *this_00;
  undefined4 uVar2;
  uchar *__ptr;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Mutex *pMVar7;
  Mutex *extraout_r1;
  Mutex *extraout_r1_00;
  __tree_node *extraout_r1_01;
  __tree_node *extraout_r1_02;
  __tree_node *p_Var8;
  Mutex *extraout_r1_03;
  Mutex *extraout_r1_04;
  Mutex *extraout_r1_05;
  uchar **ppuVar9;
  mm_camera_buf_def **ppmVar10;
  int iVar11;
  size_t __size;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  code *pcVar17;
  undefined8 uVar18;
  int in_stack_ffffffb0;
  uint in_stack_ffffffb4;
  int in_stack_ffffffb8;
  Autolock aAStack44 [4];
  int local_28;
  
  piVar16 = *(int **)(DAT_00054b30 + 0x547d2);
  local_28 = *piVar16;
  if (((param_3 == (mm_camera_buf_def **)0x0) ||
      (param_2 == (uchar **)0x0 || param_1 == (uchar *)0x0)) ||
     (param_4 == (mm_camera_map_unmap_ops_tbl_t *)0x0)) {
    if (*(int *)(*(int *)(DAT_00054b74 + 0x547ec) + 0x3c) != 0) {
      mm_camera_debug_log();
    }
    uVar14 = 0xffffffda;
    goto LAB_00054b1e;
  }
  iVar11 = *(int *)(DAT_00054b80 + 0x54820);
  ppuVar9 = param_2;
  ppmVar10 = param_3;
  if (*(int *)(iVar11 + 0x44) != 0) {
    in_stack_ffffffb4 = getMyType(this);
    in_stack_ffffffb0 = DAT_00054b84 + 0x54830;
    ppuVar9 = (uchar **)(DAT_00054b88 + 0x54838);
    ppmVar10 = (mm_camera_buf_def **)0x4e7;
    mm_camera_debug_log();
  }
  android::Mutex::Autolock::Autolock(aAStack44,(Mutex *)(this + 0x27c));
  *(mm_camera_map_unmap_ops_tbl_t **)(this + 0x30) = param_4;
  this_00 = (QCamera3HeapMemory *)operator_new(0x610);
  uVar2 = QCamera3HeapMemory::QCamera3HeapMemory(this_00,1);
  *(undefined4 *)(this + 0x28c) = uVar2;
  if (*(int *)(iVar11 + 0x48) != 0) {
    in_stack_ffffffb4 = (uint)(byte)this[0x288];
    in_stack_ffffffb8 = *(int *)(*(int *)(this + 0x14) + 0x1ac);
    in_stack_ffffffb0 = DAT_00054b8c + 0x54878;
    ppuVar9 = (uchar **)(DAT_00054b90 + 0x54882);
    ppmVar10 = (mm_camera_buf_def **)0x4f7;
    mm_camera_debug_log();
  }
  uVar18 = QCamera3HeapMemory::allocate
                     (*(allocator **)(this + 0x28c),
                      (uint)(byte)this[0x288] * *(int *)(*(int *)(this + 0x14) + 0x1ac));
  if ((int)uVar18 < 0) {
    param_1 = (uchar *)(Mutex *)((ulonglong)uVar18 >> 0x20);
    if (*(int *)(iVar11 + 0x3c) != 0) {
      mm_camera_debug_log();
      param_1 = (uchar *)extraout_r1;
    }
    uVar14 = 0xfffffff4;
LAB_00054b06:
    if (*(int **)(this + 0x28c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x28c) + 0x20))();
      param_1 = (uchar *)extraout_r1_04;
    }
    *(undefined4 *)(this + 0x28c) = 0;
  }
  else {
    uVar18 = QCamera3Memory::getCnt(*(QCamera3Memory **)(this + 0x28c));
    pMVar7 = (Mutex *)((ulonglong)uVar18 >> 0x20);
    if ((int)uVar18 != 0) {
      uVar13 = 0;
      do {
        if (this[0x288] == (QCamera3Stream)0x0) {
          param_1 = (uchar *)pMVar7;
          if (*(int *)(iVar11 + 0x3c) != 0) {
            mm_camera_debug_log();
            param_1 = (uchar *)extraout_r1_00;
          }
          uVar14 = 0xffffffda;
          goto LAB_00054b18;
        }
        pcVar17 = *(code **)param_4;
        ppuVar9 = (uchar **)QCamera3Memory::getFd(*(QCamera3Memory **)(this + 0x28c),uVar13);
        ppmVar10 = (mm_camera_buf_def **)(uint)(byte)this[0x288];
        in_stack_ffffffb0 =
             (**(code **)(**(int **)(this + 0x28c) + 8))(*(int **)(this + 0x28c),uVar13);
        in_stack_ffffffb8 = *(int *)(param_4 + 0xc);
        in_stack_ffffffb4 = 8;
        uVar18 = (*pcVar17)(uVar13,0xffffffff);
        p_Var8 = (__tree_node *)((ulonglong)uVar18 >> 0x20);
        uVar14 = (uint)uVar18;
        if ((int)uVar14 < 0) {
          if (*(int *)(iVar11 + 0x3c) != 0) {
            in_stack_ffffffb0 = DAT_00054b94 + 0x549dc;
            ppuVar9 = (uchar **)(DAT_00054b98 + 0x549e4);
            in_stack_ffffffb4 = uVar14;
            mm_camera_debug_log();
            p_Var8 = extraout_r1_01;
          }
          if (uVar13 != 0) {
            uVar12 = 0;
            do {
              ppuVar9 = (uchar **)0x8;
              (**(code **)(param_4 + 8))
                        (uVar12,0xffffffff,8,*(undefined4 *)(param_4 + 0xc),in_stack_ffffffb0,
                         in_stack_ffffffb4);
              uVar12 = uVar12 + 1;
              p_Var8 = extraout_r1_02;
            } while (uVar13 != uVar12);
          }
          goto LAB_00054afe;
        }
        uVar13 = uVar13 + 1;
        uVar18 = QCamera3Memory::getCnt(*(QCamera3Memory **)(this + 0x28c));
        pMVar7 = (Mutex *)((ulonglong)uVar18 >> 0x20);
      } while (uVar13 < (uint)uVar18);
    }
    if (*(int *)(iVar11 + 0x48) != 0) {
      in_stack_ffffffb4 = (uint)(byte)this[0x288];
      in_stack_ffffffb0 = DAT_00054bac + 0x5491e;
      ppuVar9 = (uchar **)(DAT_00054bb0 + 0x54926);
      ppmVar10 = (mm_camera_buf_def **)0x51d;
      mm_camera_debug_log();
    }
    QVar1 = this[0x288];
    __ptr = (uchar *)malloc((uint)(byte)QVar1);
    if (__ptr == (uchar *)0x0) {
      if (*(int *)(iVar11 + 0x3c) != 0) {
        ppuVar9 = (uchar **)(DAT_00054bb8 + 0x5499c);
        mm_camera_debug_log();
      }
      uVar14 = 0xfffffff4;
LAB_00054ad6:
      uVar18 = QCamera3Memory::getCnt(*(QCamera3Memory **)(this + 0x28c));
      p_Var8 = (__tree_node *)((ulonglong)uVar18 >> 0x20);
      if ((int)uVar18 != 0) {
        uVar13 = 0;
        do {
          ppuVar9 = (uchar **)0x8;
          (**(code **)(param_4 + 8))(uVar13,0xffffffff,8,*(undefined4 *)(param_4 + 0xc));
          uVar13 = uVar13 + 1;
          uVar18 = QCamera3Memory::getCnt(*(QCamera3Memory **)(this + 0x28c));
          p_Var8 = (__tree_node *)((ulonglong)uVar18 >> 0x20);
        } while (uVar13 < (uint)uVar18);
      }
LAB_00054afe:
      QCamera3HeapMemory::deallocate(*(allocator **)(this + 0x28c),p_Var8,(uint)ppuVar9);
      param_1 = (uchar *)extraout_r1_03;
      goto LAB_00054b06;
    }
    __aeabi_memclr4(__ptr,(uint)(byte)QVar1);
    if (this[0x288] == (QCamera3Stream)0x0) {
      __size = 0;
    }
    else {
      uVar13 = (uint)(byte)this[0x288];
      uVar14 = uVar13;
      if (uVar13 < 2) {
        uVar14 = 1;
      }
      __aeabi_memclr4(__ptr,uVar14);
      __size = uVar13 * 0x218;
    }
    pvVar3 = malloc(__size);
    *(void **)(this + 0x290) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      if (*(int *)(iVar11 + 0x3c) != 0) {
        ppuVar9 = (uchar **)(DAT_00054bc0 + 0x54ac2);
        mm_camera_debug_log();
      }
      free(__ptr);
      uVar14 = 0xffffffda;
      goto LAB_00054ad6;
    }
    __aeabi_memclr4(pvVar3,__size);
    if (this[0x288] == (QCamera3Stream)0x0) {
      QVar1 = (QCamera3Stream)0x0;
    }
    else {
      iVar15 = 0;
      iVar4 = DAT_00054bcc + 0x54a40;
      iVar5 = DAT_00054bd4 + 0x54a4c;
      uVar14 = 0;
      do {
        uVar13 = uVar14;
        getBatchBufDef(this,(mm_camera_buf_def *)(*(int *)(this + 0x290) + iVar15),uVar14);
        iVar6 = QCameraQueue::enqueue
                          ((QCameraQueue *)(this + 0x29c),*(int *)(this + 0x290) + iVar15,uVar13,
                           (uint)ppmVar10,in_stack_ffffffb0,in_stack_ffffffb4,in_stack_ffffffb8,
                           (uint)__ptr,param_2);
        if (iVar6 == 0) {
          if (*(int *)(iVar11 + 0x3c) != 0) {
            ppmVar10 = (mm_camera_buf_def **)0x53e;
            in_stack_ffffffb0 = iVar5;
            goto LAB_00054a9a;
          }
        }
        else if (*(int *)(iVar11 + 0x48) != 0) {
          in_stack_ffffffb8 = *(int *)(this + 0x290) + iVar15;
          ppmVar10 = (mm_camera_buf_def **)0x53c;
          in_stack_ffffffb0 = iVar4;
LAB_00054a9a:
          in_stack_ffffffb4 = uVar14;
          mm_camera_debug_log();
        }
        iVar15 = iVar15 + 0x218;
        uVar14 = uVar14 + 1;
        QVar1 = this[0x288];
      } while (uVar14 < (byte)QVar1);
    }
    *param_1 = (uchar)QVar1;
    *param_2 = __ptr;
    *param_3 = *(mm_camera_buf_def **)(this + 0x290);
    if (*(int *)(iVar11 + 0x44) != 0) {
      mm_camera_debug_log();
      param_1 = (uchar *)extraout_r1_05;
    }
    uVar14 = 0;
  }
LAB_00054b18:
  android::Mutex::Autolock::_Autolock(aAStack44,(Mutex *)param_1);
LAB_00054b1e:
  if (*piVar16 == local_28) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

