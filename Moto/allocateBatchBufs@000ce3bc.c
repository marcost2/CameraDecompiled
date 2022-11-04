
/* qcamera::QCameraStream::allocateBatchBufs(cam_frame_len_offset_t*, unsigned char*, unsigned
   char**, mm_camera_buf_def**, mm_camera_map_unmap_ops_tbl_t*) */

undefined4 __thiscall
qcamera::QCameraStream::allocateBatchBufs
          (QCameraStream *this,cam_frame_len_offset_t *param_1,uchar *param_2,uchar **param_3,
          mm_camera_buf_def **param_4,mm_camera_map_unmap_ops_tbl_t *param_5)

{
  QCameraStream *pQVar1;
  QCameraStream QVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  QCameraMemory *this_00;
  QCameraStream *pQVar9;
  uchar *__ptr;
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int **ppiVar14;
  uint uVar15;
  size_t sVar16;
  code *pcVar17;
  uint uVar18;
  int iVar19;
  int *piVar20;
  QCameraStream *pQVar21;
  cam_buf_map_type_list acStack10304 [2052];
  cam_buf_map_type_list acStack8252 [2052];
  QCameraBufferMaps aQStack6200 [2052];
  QCameraBufferMaps aQStack4148 [2052];
  undefined auStack2096 [2060];
  
  piVar20 = *(int **)(DAT_000ce704 + 0xce3dc);
  iVar3 = *piVar20;
  QCameraBufferMaps::QCameraBufferMaps(aQStack4148);
  QCameraBufferMaps::QCameraBufferMaps(aQStack6200);
  __aeabi_memcpy8((cam_frame_len_offset_t *)(this + 0x120),param_1,0x188);
  iVar13 = *(int *)(DAT_000ce708 + 0xce40c);
  if (*(int *)(iVar13 + 0x28) != 0) {
    if (*(int *)(this + 0x70) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*(int *)(this + 0x70) + 4);
    }
    mm_camera_debug_log(1,3,DAT_000ce710 + 0xce434,0x6d0,DAT_000ce70c + 0xce428,uVar4);
  }
  puVar5 = (undefined4 *)
           (**(code **)(**(int **)(this + 0x114) + 0x10))
                     (*(int **)(this + 0x114),*(undefined4 *)(this + 0x70));
  *(undefined4 **)(this + 0x110) = puVar5;
  if (puVar5 == (undefined4 *)0x0) {
    if (*(int *)(iVar13 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000ce720 + 0xce5d6,0x6d5,DAT_000ce71c + 0xce5ce);
    }
LAB_000ce634:
    uVar4 = 0xfffffff4;
    goto LAB_000ce81c;
  }
  uVar6 = (**(code **)*puVar5)();
  if (uVar6 == 0) {
LAB_000ce4c4:
    iVar7 = QCameraBufferMaps::getCamBufMapList(aQStack4148,acStack8252);
    if (iVar7 == 0) {
      __aeabi_memcpy8(auStack2096,acStack8252,0x804);
      if (*(code **)(this + 0x2ec) == (code *)0x0) {
        uVar6 = (**(code **)(*(int *)(this + 0x6c) + 0x54))
                          (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100),auStack2096);
      }
      else {
        uVar6 = (**(code **)(this + 0x2ec))(auStack2096,*(undefined4 *)(this + 0x2f4));
      }
      if (0x7fffffff < uVar6) goto LAB_000ce5fe;
    }
    else if (iVar7 < 0) {
LAB_000ce5fe:
      if (*(int *)(iVar13 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000ce730 + 0xce616,0x6f1,DAT_000ce72c + 0xce60e);
      }
      (**(code **)(**(int **)(this + 0x110) + 0xc))();
      if (*(int **)(this + 0x110) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x110) + 0x2c))();
      }
      *(undefined4 *)(this + 0x110) = 0;
      goto LAB_000ce634;
    }
  }
  else {
    uVar18 = 0;
    do {
      iVar7 = QCameraMemory::getFd(*(QCameraMemory **)(this + 0x110),uVar18);
      QVar2 = this[0x8c];
      pvVar8 = (void *)(**(code **)(**(int **)(this + 0x110) + 0x24))
                                 (*(int **)(this + 0x110),uVar18);
      iVar7 = QCameraBufferMaps::enqueue(aQStack4148,8,0,uVar18,-1,0,iVar7,(uint)(byte)QVar2,pvVar8)
      ;
      if (iVar7 < 0) {
        if (*(int *)(iVar13 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000ce728 + 0xce5f4,0x6e3,DAT_000ce724 + 0xce5ec);
        }
        goto LAB_000ce5fe;
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar6);
    if (iVar7 == 0) goto LAB_000ce4c4;
  }
  pQVar1 = this + 0x8d;
  *pQVar1 = (QCameraStream)(*(char *)(*(int *)(this + 0x70) + 0x1a8) * (char)this[0x8c]);
  (**(code **)(**(int **)(this + 0x114) + 0x14))
            (*(int **)(this + 0x114),*(undefined4 *)(*(int *)(this + 0x70) + 4));
  uVar6 = *(uint *)(this + 0x13c);
  pQVar21 = pQVar1;
  this_00 = (QCameraMemory *)
            (**(code **)**(undefined4 **)(this + 0x114))
                      (*(undefined4 **)(this + 0x114),*(undefined4 *)(*(int *)(this + 0x70) + 4),
                       *(undefined4 *)(this + 0x2a4),*(undefined4 *)(this + 0x134),uVar6,pQVar1);
  *(QCameraMemory **)(this + 0x10c) = this_00;
  if (this_00 == (QCameraMemory *)0x0) {
    if (*(int *)(iVar13 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000ce738 + 0xce652,0x706,DAT_000ce734 + 0xce64a);
    }
    uVar4 = 0xfffffff4;
  }
  else {
    ppiVar14 = (int **)(this + 0x10c);
    pQVar9 = pQVar21;
    if (*pQVar1 == (QCameraStream)0x0) {
LAB_000ce68a:
      pQVar21 = (QCameraStream *)QCameraBufferMaps::getCamBufMapList(aQStack6200,acStack10304);
      if (pQVar21 == (QCameraStream *)0x0) {
        __aeabi_memcpy8(auStack2096,acStack10304,0x804);
        if (*(code **)(this + 0x2ec) == (code *)0x0) {
          pQVar21 = (QCameraStream *)
                    (**(code **)(*(int *)(this + 0x6c) + 0x54))
                              (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100),auStack2096)
          ;
        }
        else {
          pQVar21 = (QCameraStream *)
                    (**(code **)(this + 0x2ec))(auStack2096,*(undefined4 *)(this + 0x2f4));
        }
      }
      if ((int)pQVar21 < 0) {
        if (*(int *)(iVar13 + 0x20) != 0) {
          uVar4 = 0x72d;
          iVar13 = DAT_000cea7c + 0xce7d6;
          puVar10 = (undefined *)(DAT_000cea80 + 0xce7e0);
          goto LAB_000ce7de;
        }
        goto LAB_000ce7e2;
      }
      if (*(int *)(iVar13 + 0x2c) != 0) {
        pQVar9 = (QCameraStream *)(uint)(byte)this[0x8c];
        uVar6 = DAT_000cea84 + 0xce772;
        mm_camera_debug_log(1,4,DAT_000cea88 + 0xce780,0x736,uVar6,pQVar9,this[0x8d]);
      }
      QVar2 = this[0x8c];
      __ptr = (uchar *)malloc((uint)(byte)QVar2);
      if (__ptr != (uchar *)0x0) {
        __aeabi_memclr8(__ptr,(uint)(byte)QVar2);
        uVar18 = (uint)(byte)this[0x8c];
        if (uVar18 == 0) {
          sVar16 = 0;
        }
        else {
          sVar16 = 1;
          if (1 < uVar18) {
            sVar16 = uVar18;
          }
          __aeabi_memset(__ptr,sVar16,1);
          sVar16 = uVar18 * 0x218;
        }
        pvVar8 = malloc(sVar16);
        *(void **)(this + 0x118) = pvVar8;
        if (pvVar8 == (void *)0x0) {
          if (*(int *)(iVar13 + 0x20) != 0) {
            uVar6 = DAT_000cea94 + 0xce998;
            mm_camera_debug_log(1,1,DAT_000cea98 + 0xce9a2,0x74c,uVar6,pQVar21);
            pQVar9 = pQVar21;
          }
          if (*pQVar1 != (QCameraStream)0x0) {
            uVar18 = 0;
            do {
              if (param_5 == (mm_camera_map_unmap_ops_tbl_t *)0x0) {
                uVar15 = *(uint *)(this + 0x60);
                uVar4 = *(undefined4 *)(this + 100);
                uVar11 = *(undefined4 *)(this + 0x68);
                pcVar17 = *(code **)(*(int *)(this + 0x6c) + 0x58);
                pQVar9 = (QCameraStream *)0xffffffff;
                uVar12 = 3;
                uVar6 = uVar18;
              }
              else {
                pcVar17 = *(code **)(param_5 + 8);
                uVar12 = *(undefined4 *)(param_5 + 0xc);
                uVar4 = 0xffffffff;
                uVar11 = 3;
                uVar15 = uVar18;
              }
              (*pcVar17)(uVar15,uVar4,uVar11,uVar12,uVar6,pQVar9);
              uVar18 = uVar18 + 1;
            } while (uVar18 < (byte)*pQVar1);
          }
          (**(code **)(**ppiVar14 + 0xc))();
          if (*ppiVar14 != (int *)0x0) {
            (**(code **)(**ppiVar14 + 0x2c))();
          }
          *ppiVar14 = (int *)0x0;
          free(__ptr);
          uVar4 = 0xffffffda;
          goto LAB_000ce800;
        }
        __aeabi_memclr8(pvVar8,sVar16);
        QVar2 = this[0x8d];
        pvVar8 = malloc((uint)(byte)QVar2 * 0x218);
        *(void **)(this + 0x11c) = pvVar8;
        if (pvVar8 != (void *)0x0) {
          __aeabi_memclr8(pvVar8,(uint)(byte)QVar2 * 0x218);
          iVar7 = *(int *)(this + 0x70);
          if (*(int *)(iVar7 + 0x19c) != 0) {
            iVar19 = 0;
            uVar6 = 0;
            do {
              QCameraMemory::getUserBufDef
                        (*(QCameraMemory **)(this + 0x110),
                         (cam_stream_user_buf_info_t *)(iVar7 + 0x1a8),
                         (mm_camera_buf_def *)(*(int *)(this + 0x118) + iVar19),uVar6,
                         (cam_frame_len_offset_t *)(this + 0x120),
                         *(mm_camera_buf_def **)(this + 0x11c),*(QCameraMemory **)(this + 0x10c));
              iVar7 = *(int *)(this + 0x70);
              uVar6 = uVar6 + 1;
              iVar19 = iVar19 + 0x218;
            } while (uVar6 < *(uint *)(iVar7 + 0x19c));
          }
          *param_2 = (uchar)this[0x8c];
          *param_3 = __ptr;
          *param_4 = *(mm_camera_buf_def **)(this + 0x118);
          if (*(int *)(iVar13 + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_000ceaa8 + 0xce976,0x77a,DAT_000ceaa4 + 0xce962,
                                *(undefined4 *)(*(int *)(this + 0x70) + 4),this[0x8c],this[0x8d]);
          }
          uVar4 = 0;
          goto LAB_000ce81c;
        }
        if (*(int *)(iVar13 + 0x20) != 0) {
          uVar6 = DAT_000cea9c + 0xcea16;
          mm_camera_debug_log(1,1,DAT_000ceaa0 + 0xcea1e,0x75d,uVar6);
        }
        free(__ptr);
        free(*(void **)(this + 0x118));
        *(undefined4 *)(this + 0x118) = 0;
        if (this[0x8d] != (QCameraStream)0x0) {
          uVar18 = 0;
          do {
            if (param_5 == (mm_camera_map_unmap_ops_tbl_t *)0x0) {
              uVar15 = *(uint *)(this + 0x60);
              uVar4 = *(undefined4 *)(this + 100);
              uVar11 = *(undefined4 *)(this + 0x68);
              pcVar17 = *(code **)(*(int *)(this + 0x6c) + 0x58);
              pQVar9 = (QCameraStream *)0xffffffff;
              uVar12 = 3;
              uVar6 = uVar18;
            }
            else {
              pcVar17 = *(code **)(param_5 + 8);
              uVar12 = *(undefined4 *)(param_5 + 0xc);
              uVar4 = 0xffffffff;
              uVar11 = 3;
              uVar15 = uVar18;
            }
            (*pcVar17)(uVar15,uVar4,uVar11,uVar12,uVar6,pQVar9);
            uVar18 = uVar18 + 1;
          } while (uVar18 < (byte)*pQVar1);
        }
        goto LAB_000ce7e2;
      }
      if (*(int *)(iVar13 + 0x20) != 0) {
        uVar6 = DAT_000cea8c + 0xce85c;
        mm_camera_debug_log(1,1,DAT_000cea90 + 0xce864,0x73b,uVar6,pQVar9);
      }
      if (*pQVar1 != (QCameraStream)0x0) {
        uVar18 = 0;
        do {
          if (param_5 == (mm_camera_map_unmap_ops_tbl_t *)0x0) {
            uVar15 = *(uint *)(this + 0x60);
            uVar4 = *(undefined4 *)(this + 100);
            uVar11 = *(undefined4 *)(this + 0x68);
            pcVar17 = *(code **)(*(int *)(this + 0x6c) + 0x58);
            pQVar9 = (QCameraStream *)0xffffffff;
            uVar12 = 3;
            uVar6 = uVar18;
          }
          else {
            pcVar17 = *(code **)(param_5 + 8);
            uVar12 = *(undefined4 *)(param_5 + 0xc);
            uVar4 = 0xffffffff;
            uVar11 = 3;
            uVar15 = uVar18;
          }
          (*pcVar17)(uVar15,uVar4,uVar11,uVar12,uVar6,pQVar9);
          uVar18 = uVar18 + 1;
        } while (uVar18 < (byte)*pQVar1);
      }
      (**(code **)(**ppiVar14 + 0xc))();
      if (*ppiVar14 != (int *)0x0) {
        (**(code **)(**ppiVar14 + 0x2c))();
      }
      uVar4 = 0xfffffff4;
    }
    else {
      uVar18 = QCameraMemory::getSize(this_00,0);
      if (uVar18 != 0xffffffb5) {
        uVar15 = 0;
        do {
          iVar7 = QCameraMemory::getFd((QCameraMemory *)*ppiVar14,uVar15);
          pvVar8 = (void *)(**(code **)(**ppiVar14 + 0x24))(*ppiVar14,uVar15);
          uVar6 = 0xffffffff;
          pQVar21 = (QCameraStream *)0x0;
          iVar7 = QCameraBufferMaps::enqueue(aQStack6200,3,0,uVar15,-1,0,iVar7,uVar18,pvVar8);
          if (iVar7 < 0) {
            if (*(int *)(iVar13 + 0x20) == 0) goto LAB_000ce7e2;
            uVar4 = 0x715;
            iVar13 = DAT_000cea74 + 0xce6fa;
            puVar10 = &UNK_000ce702 + DAT_000cea78;
            goto LAB_000ce7de;
          }
          uVar15 = uVar15 + 1;
          pQVar9 = pQVar21;
          if ((byte)*pQVar1 <= uVar15) goto LAB_000ce68a;
          uVar18 = QCameraMemory::getSize((QCameraMemory *)*ppiVar14,uVar15);
        } while (uVar18 != 0xffffffb5);
      }
      if (*(int *)(iVar13 + 0x20) != 0) {
        uVar4 = 0x71d;
        iVar13 = DAT_000ce714 + 0xce5b6;
        puVar10 = (undefined *)(DAT_000ce718 + 0xce5be);
LAB_000ce7de:
        mm_camera_debug_log(1,1,puVar10,uVar4,iVar13,pQVar21);
      }
LAB_000ce7e2:
      (**(code **)(**ppiVar14 + 0xc))();
      if (*ppiVar14 != (int *)0x0) {
        (**(code **)(**ppiVar14 + 0x2c))();
      }
      uVar4 = 0xffffffda;
    }
    *ppiVar14 = (int *)0x0;
  }
LAB_000ce800:
  (**(code **)(**(int **)(this + 0x110) + 0xc))();
  if (*(int **)(this + 0x110) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x110) + 0x2c))();
  }
  *(undefined4 *)(this + 0x110) = 0;
LAB_000ce81c:
  QCameraBufferMaps::_QCameraBufferMaps(aQStack6200);
  QCameraBufferMaps::_QCameraBufferMaps(aQStack4148);
  if (*piVar20 != iVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}

