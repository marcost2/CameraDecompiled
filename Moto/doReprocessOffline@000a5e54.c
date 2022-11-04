
/* qcamera::QCamera3ReprocessChannel::doReprocessOffline(qcamera::qcamera_fwk_input_pp_data_t*,
   bool) */

uint __thiscall
qcamera::QCamera3ReprocessChannel::doReprocessOffline
          (QCamera3ReprocessChannel *this,qcamera_fwk_input_pp_data_t *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int **ppiVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  int *this_00;
  void **ppvVar11;
  int *piVar12;
  int *piVar13;
  pthread_mutex_t *ppVar14;
  QCamera3StreamMem *this_01;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  uint uVar18;
  bool bVar19;
  undefined4 local_7ee0;
  int *local_7edc;
  int *local_7ed8;
  undefined auStack32468 [4];
  undefined local_7ed0;
  int *local_7ec8;
  
  piVar13 = *(int **)(DAT_000a61bc + 0xa5e68);
  iVar1 = *piVar13;
  if (*(int *)(this + 0x44) == 0) {
    if (*(int *)(*(int *)(DAT_000a61d4 + 0xa5f24) + 0x20) == 0) {
      uVar18 = 0xffffffff;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000a61dc + 0xa5f3c,0x1517,DAT_000a61d8 + 0xa5f34);
      uVar18 = 0xffffffff;
    }
    goto LAB_000a5faa;
  }
  if (param_1 == (qcamera_fwk_input_pp_data_t *)0x0) {
    if (*(int *)(*(int *)(DAT_000a61e0 + 0xa5f4a) + 0x20) != 0) {
      uVar8 = 0x151c;
      iVar10 = DAT_000a61e4 + 0xa5f5a;
      iVar2 = DAT_000a61e8 + 0xa5f62;
LAB_000a5fa2:
      mm_camera_debug_log(1,1,iVar2,uVar8,iVar10);
    }
  }
  else if (*(int *)(param_1 + 0x21c) == 0) {
    if (*(int *)(*(int *)(DAT_000a61ec + 0xa5f68) + 0x20) != 0) {
      uVar8 = 0x1521;
      iVar10 = DAT_000a61f0 + 0xa5f78;
      iVar2 = DAT_000a61f4 + 0xa5f80;
      goto LAB_000a5fa2;
    }
  }
  else {
    if (*(int *)(param_1 + 0x434) != 0) {
      if (*(int *)(this + 0x24) == 0) {
        if (*(int *)(*(int *)(DAT_000a6204 + 0xa5fc8) + 0x20) == 0) {
          uVar18 = 0xffffffed;
        }
        else {
          mm_camera_debug_log(1,1,DAT_000a620c + 0xa5fe2,0x152b,DAT_000a6208 + 0xa5fda);
          uVar18 = 0xffffffed;
        }
        goto LAB_000a5faa;
      }
      if (this[0xf51] != (QCamera3ReprocessChannel)0x0) {
        iVar10 = *(int *)(DAT_000a61c0 + 0xa5ea2);
        if (*(int *)(iVar10 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000a61c8 + 0xa5eba,0x1530,DAT_000a61c4 + 0xa5eb2);
        }
        iVar2 = doMetaReprocessOffline(this,param_1);
        bVar19 = iVar2 != 0;
        if (bVar19) {
          iVar2 = *(int *)(iVar10 + 0x20);
        }
        if (bVar19 && iVar2 != 0) {
          mm_camera_debug_log(1,1,DAT_000a61d0 + 0xa5ee4,0x1533,DAT_000a61cc + 0xa5edc);
        }
      }
      this_00 = *(int **)(this + 0x24);
      if (*(int *)(this + 0xd4) == 1) {
        ppVar14 = (pthread_mutex_t *)(this + 0xc0);
        pthread_mutex_lock(ppVar14);
        puVar3 = (uint *)(*(uint **)(this + 200))[2];
        if (puVar3 == *(uint **)(this + 200)) {
          uVar18 = QCamera3StreamMem::allocateOne
                             (*(QCamera3StreamMem **)(this + 0x100),*(uint *)(this + 0xb8));
          if (-1 < (int)uVar18) goto LAB_000a6072;
          if (*(int *)(*(int *)(DAT_000a650c + 0xa6422) + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000a6514 + 0xa643a,0x1569,DAT_000a6510 + 0xa6432);
          }
          uVar18 = 0xffffffea;
        }
        else {
          uVar18 = *puVar3;
          uVar5 = puVar3[1];
          uVar7 = puVar3[2];
          *(uint *)(uVar5 + 8) = uVar7;
          *(uint *)(uVar7 + 4) = uVar5;
          if (puVar3 != (uint *)0x0) {
            operator_delete(puVar3);
          }
LAB_000a6072:
          QCamera3StreamMem::markFrameNumber
                    (*(QCamera3StreamMem **)(this + 0x100),uVar18,*(uint *)(param_1 + 0x608));
          uVar18 = (**(code **)(*this_00 + 0xc))(this_00,uVar18);
          if (uVar18 == 0) {
            pthread_mutex_unlock(ppVar14);
            goto LAB_000a60ba;
          }
          if (*(int *)(*(int *)(DAT_000a621c + 0xa6094) + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000a6224 + 0xa60b0,0x1576,DAT_000a6220 + 0xa60a8);
          }
        }
        pthread_mutex_unlock(ppVar14);
      }
      else {
        pvVar6 = *(void **)(param_1 + 0x604);
        if (pvVar6 != (void *)0x0) {
          ppvVar11 = (void **)(param_1 + 0x604);
          if (this[0x50] == (QCamera3ReprocessChannel)0x0) {
            uVar18 = (**(code **)(*(int *)this + 0x34))(this,pvVar6,*(undefined4 *)(this + 0x74));
            if (uVar18 != 0) {
              if (*(int *)(*(int *)(DAT_000a64dc + 0xa63c0) + 0x20) != 0) {
                mm_camera_debug_log(1,1,DAT_000a64e4 + 0xa63de,0x153f,DAT_000a64e0 + 0xa63d4,uVar18)
                ;
              }
              goto LAB_000a5faa;
            }
            uVar18 = (**(code **)(*(int *)this + 0xc))(this);
            if (uVar18 != 0) goto LAB_000a5faa;
            pvVar6 = *ppvVar11;
          }
          this_01 = (QCamera3StreamMem *)(this + 0x108);
          uVar5 = QCamera3StreamMem::getMatchBufIndex(this_01,pvVar6);
          if ((int)uVar5 < 0) {
            uVar18 = (**(code **)(*(int *)this + 0x34))(this,*ppvVar11,*(undefined4 *)(this + 0x74))
            ;
            if (uVar18 != 0) {
              if (*(int *)(*(int *)(DAT_000a64e8 + 0xa63fa) + 0x20) != 0) {
                mm_camera_debug_log(1,1,DAT_000a64f0 + 0xa6418,0x154d,DAT_000a64ec + 0xa640e,uVar18)
                ;
              }
              goto LAB_000a5faa;
            }
            uVar5 = QCamera3StreamMem::getMatchBufIndex(this_01,*ppvVar11);
            if (0x7fffffff < uVar5) {
              if (*(int *)(*(int *)(DAT_000a64f4 + 0xa64b8) + 0x20) != 0) {
                mm_camera_debug_log(1,1,DAT_000a64fc + 0xa64d0,0x1553,DAT_000a64f8 + 0xa64c8);
              }
              uVar18 = 0xffffffe0;
              goto LAB_000a5faa;
            }
          }
          uVar18 = QCamera3StreamMem::markFrameNumber(this_01,uVar5,*(uint *)(param_1 + 0x608));
          if (uVar18 != 0) {
            if (*(int *)(*(int *)(DAT_000a6210 + 0xa602e) + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000a6218 + 0xa6052,0x1559,DAT_000a6214 + 0xa6042,
                                  *(undefined4 *)(param_1 + 0x608),uVar5);
            }
            goto LAB_000a5faa;
          }
          uVar18 = (**(code **)(*this_00 + 0xc))(this_00,uVar5);
          if (uVar18 != 0) {
            if (*(int *)(*(int *)(DAT_000a6500 + 0xa6460) + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000a6508 + 0xa6478,0x155e,DAT_000a6504 + 0xa6470);
            }
            QCamera3StreamMem::markFrameNumber(this_01,uVar5,0xffffffff);
            goto LAB_000a5faa;
          }
        }
LAB_000a60ba:
        iVar10 = *(int *)(this + 0xb0);
        if (iVar10 == *(int *)(this + 0x78) + -1) {
          iVar10 = -1;
          *(undefined4 *)(this + 0xb0) = 0xffffffff;
        }
        piVar15 = (int *)(iVar10 + 1);
        uVar5 = QCamera3Stream::mapBuf
                          ((QCamera3Stream *)this_00,'\x05',(uint)piVar15,-1,
                           *(int *)(param_1 + 0x430),*(void **)(param_1 + 0x434),
                           *(uint *)(param_1 + 0x438));
        if (uVar5 == 0) {
          pthread_mutex_lock((pthread_mutex_t *)(this + 0xa8));
          piVar16 = *(int **)(this + 0x9c);
          ppiVar4 = (int **)operator_new(0x14);
          ppiVar4[4] = piVar16;
          ppiVar4[2] = piVar15;
          *ppiVar4 = this_00;
          ppiVar4[1] = (int *)0x5;
          ppiVar4[3] = (int *)piVar16[3];
          *(int ***)(piVar16[3] + 0x10) = ppiVar4;
          piVar16[3] = (int)ppiVar4;
          *(int **)(this + 0xb0) = piVar15;
          if (*(int *)(*(int *)(DAT_000a6228 + 0xa6136) + 0x2c) != 0) {
            mm_camera_debug_log(1,4,DAT_000a6230 + 0xa6150,0x158d,DAT_000a622c + 0xa6146,piVar15);
          }
          pthread_mutex_unlock((pthread_mutex_t *)(this + 0xa8));
        }
        iVar10 = *(int *)(this + 0xb4);
        if (iVar10 == *(int *)(this + 0x78) * 2 + -1) {
          iVar10 = *(int *)(this + 0x78) + -1;
          *(int *)(this + 0xb4) = iVar10;
        }
        piVar12 = (int *)(iVar10 + 1);
        piVar16 = *(int **)(param_1 + 0x21c);
        piVar9 = *(int **)(param_1 + 0x220);
        uVar18 = QCamera3Stream::mapBuf
                           ((QCamera3Stream *)this_00,'\x06',(uint)piVar12,-1,
                            *(int *)(param_1 + 0x218),piVar16,(uint)piVar9);
        uVar18 = uVar18 | uVar5;
        if (uVar18 == 0) {
          pthread_mutex_lock((pthread_mutex_t *)(this + 0xac));
          piVar17 = *(int **)(this + 0xa4);
          ppiVar4 = (int **)operator_new(0x14);
          ppiVar4[4] = piVar17;
          ppiVar4[2] = piVar12;
          ppiVar4[1] = (int *)0x6;
          *ppiVar4 = this_00;
          ppiVar4[3] = (int *)piVar17[3];
          *(int ***)(piVar17[3] + 0x10) = ppiVar4;
          piVar17[3] = (int)ppiVar4;
          *(int **)(this + 0xb4) = piVar12;
          iVar10 = *(int *)(DAT_000a6518 + 0xa6274);
          if (*(int *)(iVar10 + 0x2c) != 0) {
            piVar16 = piVar12;
            mm_camera_debug_log(1,4,DAT_000a6520 + 0xa6290,0x15a2,DAT_000a651c + 0xa6286,piVar12);
          }
          pthread_mutex_unlock((pthread_mutex_t *)(this + 0xac));
          if ((param_2 != false) && (*(int *)(this + 0xd4) != 1)) {
            ppVar14 = (pthread_mutex_t *)(this + 0xf4c);
            pthread_mutex_lock(ppVar14);
            iVar2 = *(int *)(this + 0xf40);
            android::VectorImpl::push(this + 0xf38);
            pthread_mutex_unlock(ppVar14);
            if ((iVar2 == 0) && (*(int *)(this + 0xd4) != 1)) {
              __aeabi_memclr8(&local_7ed8,0x7eac);
              local_7edc = (int *)0x2;
              local_7ee0 = 0xec;
              iVar2 = QCamera3Stream::setParameter
                                ((QCamera3Stream *)this_00,(cam_stream_parm_buffer_t *)&local_7ee0);
              if ((iVar2 != 0) && (*(int *)(iVar10 + 0x20) != 0)) {
                piVar16 = (int *)(DAT_000a6524 + 0xa630c);
                mm_camera_debug_log(1,1,piVar16,0x15b9,DAT_000a6528 + 0xa630e,piVar16);
              }
              pthread_mutex_lock(ppVar14);
              this[0xf50] = (QCamera3ReprocessChannel)0x1;
              pthread_mutex_unlock(ppVar14);
            }
          }
          __aeabi_memclr8(auStack32468,0x7ea8);
          local_7ee0 = 0x60;
          piVar17 = *(int **)(param_1 + 0x248);
          local_7ed0 = 1;
          local_7edc = piVar15;
          local_7ed8 = piVar17;
          local_7ec8 = piVar12;
          if (*(int *)(iVar10 + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_000a6530 + 0xa636c,0x15ca,DAT_000a652c + 0xa635c,piVar17,
                                piVar15,piVar12);
            piVar16 = piVar17;
            piVar9 = piVar15;
          }
          uVar18 = QCamera3Stream::setParameter
                             ((QCamera3Stream *)this_00,(cam_stream_parm_buffer_t *)&local_7ee0);
          if (uVar18 != 0) {
            if (*(int *)(iVar10 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000a6538 + 0xa639a,0x15d2,DAT_000a6534 + 0xa6392,piVar16,
                                  piVar9);
            }
            resetToCamPerfNormal(this,*(uint *)(param_1 + 0x608));
          }
        }
        else if (*(int *)(*(int *)(DAT_000a653c + 0xa619a) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000a6544 + 0xa61b4,0x15d6,DAT_000a6540 + 0xa61aa,uVar18);
        }
      }
      goto LAB_000a5faa;
    }
    if (*(int *)(*(int *)(DAT_000a61f8 + 0xa5f8c) + 0x20) != 0) {
      uVar8 = 0x1526;
      iVar10 = DAT_000a61fc + 0xa5f9c;
      iVar2 = DAT_000a6200 + 0xa5fa4;
      goto LAB_000a5fa2;
    }
  }
  uVar18 = 0xffffffea;
LAB_000a5faa:
  if (*piVar13 == iVar1) {
    return uVar18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

