
/* qcamera::QCamera3Stream::getBufs(cam_frame_len_offset_t*, unsigned char*, unsigned char**,
   mm_camera_buf_def**, mm_camera_map_unmap_ops_tbl_t*) */

undefined4 __thiscall
qcamera::QCamera3Stream::getBufs
          (QCamera3Stream *this,cam_frame_len_offset_t *param_1,uchar *param_2,uchar **param_3,
          mm_camera_buf_def **param_4,mm_camera_map_unmap_ops_tbl_t *param_5)

{
  QCamera3Stream QVar1;
  int iVar2;
  int iVar3;
  uchar *__ptr;
  void *pvVar4;
  QCamera3StreamMem *this_00;
  Mutex *extraout_r1;
  Mutex *extraout_r1_00;
  Mutex *extraout_r1_01;
  Mutex *extraout_r1_02;
  Mutex *extraout_r1_03;
  Mutex *pMVar5;
  Mutex *extraout_r1_04;
  Mutex *extraout_r1_05;
  Mutex *extraout_r1_06;
  Mutex *extraout_r1_07;
  Mutex *extraout_r1_08;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  code *pcVar10;
  undefined8 uVar11;
  int iVar12;
  Autolock aAStack44 [4];
  int local_28;
  
  piVar9 = *(int **)(DAT_00054760 + 0x54408);
  local_28 = *piVar9;
  android::Mutex::Autolock::Autolock(aAStack44,(Mutex *)(this + 0x27c));
  if (param_5 == (mm_camera_map_unmap_ops_tbl_t *)0x0) {
    iVar2 = *(int *)(*(int *)(DAT_00054764 + 0x54462) + 0x3c);
    pMVar5 = extraout_r1;
joined_r0x00054464:
    if (iVar2 != 0) {
LAB_00054478:
      mm_camera_debug_log();
      pMVar5 = extraout_r1_01;
    }
  }
  else {
    __aeabi_memcpy8((cam_frame_len_offset_t *)(this + 0xd4),param_1,0x188);
    *(mm_camera_map_unmap_ops_tbl_t **)(this + 0x30) = param_5;
    if (*(int *)(this + 0xcc) != 0) {
      iVar2 = *(int *)(*(int *)(DAT_00054770 + 0x54444) + 0x3c);
      pMVar5 = extraout_r1_00;
      goto joined_r0x00054464;
    }
    uVar11 = (**(code **)(**(int **)(this + 0x278) + 0x34))
                       (*(int **)(this + 0x278),*(undefined4 *)(this + 600));
    pMVar5 = (Mutex *)((ulonglong)uVar11 >> 0x20);
    *(int *)(this + 0xcc) = (int)uVar11;
    if ((int)uVar11 == 0) {
      if (*(int *)(*(int *)(DAT_0005477c + 0x5452a) + 0x3c) != 0) {
        mm_camera_debug_log();
        pMVar5 = extraout_r1_02;
      }
LAB_0005462c:
      uVar7 = 0xfffffff4;
      goto LAB_00054480;
    }
    if (this[0x34] != (QCamera3Stream)0x0) {
      uVar6 = 0;
      do {
        iVar2 = QCamera3StreamMem::valid(*(QCamera3StreamMem **)(this + 0xcc),uVar6);
        if (iVar2 != 0) {
          uVar11 = QCamera3StreamMem::getSize(*(QCamera3StreamMem **)(this + 0xcc),uVar6);
          pMVar5 = (Mutex *)((ulonglong)uVar11 >> 0x20);
          if ((int)uVar11 == -0x4b) {
            if (*(int *)(*(int *)(DAT_00054794 + 0x5468a) + 0x3c) == 0) goto LAB_0005447c;
            goto LAB_00054478;
          }
          pcVar10 = *(code **)param_5;
          uVar7 = QCamera3StreamMem::getFd(*(QCamera3StreamMem **)(this + 0xcc),uVar6);
          iVar3 = QCamera3StreamMem::getPtr(*(uint *)(this + 0xcc));
          iVar2 = 3;
          uVar11 = (*pcVar10)(uVar6,0xffffffff,uVar7,(int)uVar11,iVar3,3,
                              *(undefined4 *)(param_5 + 0xc));
          pMVar5 = (Mutex *)((ulonglong)uVar11 >> 0x20);
          iVar12 = (int)uVar11;
          if (iVar12 < 0) {
            if (*(int *)(*(int *)(DAT_00054788 + 0x546ac) + 0x3c) != 0) {
              iVar3 = DAT_0005478c + 0x546b6;
              mm_camera_debug_log();
              pMVar5 = extraout_r1_06;
              iVar2 = iVar12;
            }
            if (uVar6 != 0) {
              uVar8 = 0;
              do {
                uVar11 = QCamera3StreamMem::valid(*(QCamera3StreamMem **)(this + 0xcc),uVar8);
                pMVar5 = (Mutex *)((ulonglong)uVar11 >> 0x20);
                if ((int)uVar11 != 0) {
                  (**(code **)(param_5 + 8))
                            (uVar8,0xffffffff,3,*(undefined4 *)(param_5 + 0xc),iVar3,iVar2);
                  pMVar5 = extraout_r1_07;
                }
                uVar8 = uVar8 + 1;
                uVar7 = 0xffffffda;
              } while (uVar6 != uVar8);
              goto LAB_00054480;
            }
            goto LAB_0005447c;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < (byte)this[0x34]);
    }
    QVar1 = this[0x34];
    __ptr = (uchar *)malloc((uint)(byte)QVar1);
    if (__ptr == (uchar *)0x0) {
      pMVar5 = extraout_r1_03;
      if (*(int *)(*(int *)(DAT_000547a0 + 0x545e0) + 0x3c) != 0) {
        mm_camera_debug_log();
        pMVar5 = extraout_r1_04;
      }
      if (this[0x34] != (QCamera3Stream)0x0) {
        uVar6 = 0;
        uVar7 = 0xfffffff4;
        do {
          uVar11 = QCamera3StreamMem::valid(*(QCamera3StreamMem **)(this + 0xcc),uVar6);
          pMVar5 = (Mutex *)((ulonglong)uVar11 >> 0x20);
          if ((int)uVar11 != 0) {
            (**(code **)(param_5 + 8))(uVar6,0xffffffff,3,*(undefined4 *)(param_5 + 0xc));
            pMVar5 = extraout_r1_05;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < (byte)this[0x34]);
        goto LAB_00054480;
      }
      goto LAB_0005462c;
    }
    __aeabi_memclr4(__ptr,(uint)(byte)QVar1);
    QVar1 = this[0x34];
    pvVar4 = malloc((uint)(byte)QVar1 * 0x218);
    *(void **)(this + 0xd0) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      if (*(int *)(*(int *)(DAT_000547ac + 0x54638) + 0x3c) != 0) {
        mm_camera_debug_log();
      }
      if (this[0x34] != (QCamera3Stream)0x0) {
        uVar6 = 0;
        do {
          iVar2 = QCamera3StreamMem::valid(*(QCamera3StreamMem **)(this + 0xcc),uVar6);
          if (iVar2 != 0) {
            (**(code **)(param_5 + 8))(uVar6,0xffffffff,3,*(undefined4 *)(param_5 + 0xc));
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < (byte)this[0x34]);
      }
    }
    else {
      __aeabi_memclr4(pvVar4,(uint)(byte)QVar1 * 0x218);
      this_00 = *(QCamera3StreamMem **)(this + 0xcc);
      if (this[0x34] != (QCamera3Stream)0x0) {
        iVar2 = 0;
        uVar6 = 0;
        do {
          iVar3 = QCamera3StreamMem::valid(this_00,uVar6);
          if (iVar3 != 0) {
            QCamera3StreamMem::getBufDef
                      (*(QCamera3StreamMem **)(this + 0xcc),(cam_frame_len_offset_t *)(this + 0xd4),
                       (mm_camera_buf_def *)(*(int *)(this + 0xd0) + iVar2),uVar6);
          }
          iVar2 = iVar2 + 0x218;
          uVar6 = uVar6 + 1;
          this_00 = *(QCamera3StreamMem **)(this + 0xcc);
        } while (uVar6 < (byte)this[0x34]);
      }
      iVar2 = QCamera3StreamMem::getRegFlags(this_00,__ptr);
      if (-1 < iVar2) {
        *param_2 = (uchar)this[0x34];
        *param_3 = __ptr;
        pMVar5 = *(Mutex **)(this + 0xd0);
        *param_4 = (mm_camera_buf_def *)pMVar5;
        uVar7 = 0;
        goto LAB_00054480;
      }
      if (*(int *)(*(int *)(DAT_000547b8 + 0x546fc) + 0x3c) != 0) {
        mm_camera_debug_log();
      }
      if (this[0x34] != (QCamera3Stream)0x0) {
        uVar6 = 0;
        do {
          iVar2 = QCamera3StreamMem::valid(*(QCamera3StreamMem **)(this + 0xcc),uVar6);
          if (iVar2 != 0) {
            (**(code **)(param_5 + 8))(uVar6,0xffffffff,3,*(undefined4 *)(param_5 + 0xc));
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < (byte)this[0x34]);
      }
      free(*(void **)(this + 0xd0));
      *(undefined4 *)(this + 0xd0) = 0;
    }
    free(__ptr);
    pMVar5 = extraout_r1_08;
  }
LAB_0005447c:
  uVar7 = 0xffffffda;
LAB_00054480:
  android::Mutex::Autolock::_Autolock(aAStack44,pMVar5);
  if (*piVar9 == local_28) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

