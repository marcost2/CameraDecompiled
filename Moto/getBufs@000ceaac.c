
/* qcamera::QCameraStream::getBufs(cam_frame_len_offset_t*, unsigned char*, unsigned char**,
   mm_camera_buf_def**, mm_camera_map_unmap_ops_tbl_t*) */

undefined4 __thiscall
qcamera::QCameraStream::getBufs
          (QCameraStream *this,cam_frame_len_offset_t *param_1,uchar *param_2,uchar **param_3,
          mm_camera_buf_def **param_4,mm_camera_map_unmap_ops_tbl_t *param_5)

{
  QCameraStream QVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  uchar *__ptr;
  int *this_00;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  QCameraStream local_1031;
  cam_buf_map_type_list acStack4144 [2052];
  QCameraBufferMaps aQStack2092 [2056];
  
  piVar10 = *(int **)(DAT_000cee54 + 0xceac6);
  iVar2 = *piVar10;
  if (param_5 == (mm_camera_map_unmap_ops_tbl_t *)0x0) {
    if (*(int *)(*(int *)(DAT_000cee58 + 0xceb18) + 0x20) == 0) {
      uVar8 = 0xffffffda;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000cee60 + 0xceb34,0x50c,DAT_000cee5c + 0xceb2c);
      uVar8 = 0xffffffda;
    }
    goto LAB_000cefa2;
  }
  __aeabi_memcpy8((cam_frame_len_offset_t *)(this + 0x120),param_1,0x188);
  QVar1 = this[0x8c];
  this[0x8e] = (QCameraStream)0x0;
  local_1031 = QVar1;
  if (this[0x2e2] != (QCameraStream)0x0) {
    local_1031 = (QCameraStream)0x5;
    if ((byte)QVar1 < 5) {
      this[0x2e2] = (QCameraStream)0x0;
      local_1031 = QVar1;
    }
    else {
      this[0x8e] = (QCameraStream)((char)QVar1 - 5);
    }
  }
  (**(code **)(**(int **)(this + 0x114) + 0x14))
            (*(int **)(this + 0x114),*(undefined4 *)(*(int *)(this + 0x70) + 4));
  puVar3 = (undefined4 *)
           (**(code **)**(undefined4 **)(this + 0x114))
                     (*(undefined4 **)(this + 0x114),*(undefined4 *)(*(int *)(this + 0x70) + 4),
                      *(undefined4 *)(this + 0x2a4),*(undefined4 *)(this + 0x134),
                      *(undefined4 *)(this + 0x13c),&local_1031);
  *(undefined4 **)(this + 0x10c) = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    if (*(int *)(*(int *)(DAT_000cefc4 + 0xced72) + 0x20) == 0) {
      uVar8 = 0xfffffff4;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000cefcc + 0xced8a,0x528,DAT_000cefc8 + 0xced82);
      uVar8 = 0xfffffff4;
    }
    goto LAB_000cefa2;
  }
  this[0x8c] = (QCameraStream)((char)this[0x8e] + (char)local_1031);
  uVar4 = (**(code **)*puVar3)();
  QCameraBufferMaps::QCameraBufferMaps(aQStack2092);
  if (uVar4 != 0) {
    uVar9 = 0;
    do {
      uVar5 = QCameraMemory::getSize(*(QCameraMemory **)(this + 0x10c),uVar9);
      if (uVar5 == 0xffffffb5) {
        if (*(int *)(*(int *)(DAT_000cefd0 + 0xcee0a) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000cefd8 + 0xcee26,0x533,DAT_000cefd4 + 0xcee1e);
        }
        goto LAB_000cef92;
      }
      iVar6 = QCameraMemory::getFd(*(QCameraMemory **)(this + 0x10c),uVar9);
      pvVar7 = (void *)(**(code **)(**(int **)(this + 0x10c) + 0x24))(*(int **)(this + 0x10c),uVar9)
      ;
      iVar6 = QCameraBufferMaps::enqueue(aQStack2092,3,0,uVar9,-1,0,iVar6,uVar5,pvVar7);
      if (iVar6 < 0) {
        if (*(int *)(*(int *)(DAT_000cefdc + 0xcee34) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000cefe4 + 0xcee4c,0x53d,DAT_000cefe0 + 0xcee44);
        }
        uVar8 = 0xffffffb5;
        goto LAB_000cef9a;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar4);
  }
  uVar9 = QCameraBufferMaps::getCamBufMapList(aQStack2092,acStack4144);
  if (uVar9 == 0) {
    uVar9 = (**(code **)(param_5 + 4))(acStack4144,*(undefined4 *)(param_5 + 0xc));
    if (uVar9 < 0x80000000) goto LAB_000cec28;
LAB_000cedb4:
    if (*(int *)(*(int *)(DAT_000cefe8 + 0xcedba) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000ceff0 + 0xcedd4,0x548,DAT_000cefec + 0xcedca,uVar9);
    }
    (**(code **)(**(int **)(this + 0x10c) + 0xc))();
    if (*(int **)(this + 0x10c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x10c) + 0x2c))();
    }
    uVar8 = 0xffffffda;
    *(undefined4 *)(this + 0x10c) = 0;
  }
  else {
    if ((int)uVar9 < 0) goto LAB_000cedb4;
LAB_000cec28:
    QVar1 = this[0x8c];
    __ptr = (uchar *)malloc((uint)(byte)QVar1);
    if (__ptr == (uchar *)0x0) {
      if (*(int *)(*(int *)(DAT_000ceff4 + 0xcee6e) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000ceffc + 0xcee86,0x552,DAT_000ceff8 + 0xcee7e);
      }
      if (uVar4 != 0) {
        uVar9 = 0;
        do {
          (**(code **)(param_5 + 8))(uVar9,0xffffffff,3,*(undefined4 *)(param_5 + 0xc));
          uVar9 = uVar9 + 1;
        } while (uVar4 != uVar9);
      }
      (**(code **)(**(int **)(this + 0x10c) + 0xc))();
      if (*(int **)(this + 0x10c) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x10c) + 0x2c))();
      }
      uVar8 = 0xfffffff4;
      *(undefined4 *)(this + 0x10c) = 0;
    }
    else {
      __aeabi_memclr8(__ptr,(uint)(byte)QVar1);
      QVar1 = this[0x8c];
      pvVar7 = malloc((uint)(byte)QVar1 * 0x218);
      *(void **)(this + 0x118) = pvVar7;
      if (pvVar7 == (void *)0x0) {
        if (*(int *)(*(int *)(DAT_000cf000 + 0xceed0) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000cf008 + 0xceeea,0x55f,DAT_000cf004 + 0xceee0,uVar9);
        }
        if (uVar4 != 0) {
          uVar9 = 0;
          do {
            (**(code **)(param_5 + 8))(uVar9,0xffffffff,3,*(undefined4 *)(param_5 + 0xc));
            uVar9 = uVar9 + 1;
          } while (uVar4 != uVar9);
        }
        (**(code **)(**(int **)(this + 0x10c) + 0xc))();
        if (*(int **)(this + 0x10c) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x10c) + 0x2c))();
        }
        *(undefined4 *)(this + 0x10c) = 0;
      }
      else {
        __aeabi_memclr8(pvVar7,(uint)(byte)QVar1 * 0x218);
        this_00 = *(int **)(this + 0x10c);
        if (uVar4 != 0) {
          iVar6 = 0;
          uVar9 = 0;
          do {
            QCameraMemory::getBufDef
                      ((QCameraMemory *)this_00,(cam_frame_len_offset_t *)(this + 0x120),
                       (mm_camera_buf_def *)(*(int *)(this + 0x118) + iVar6),uVar9);
            this_00 = *(int **)(this + 0x10c);
            iVar6 = iVar6 + 0x218;
            uVar9 = uVar9 + 1;
          } while (uVar4 * 0x218 - iVar6 != 0);
        }
        iVar6 = (**(code **)(*this_00 + 0x18))(this_00,__ptr);
        if (-1 < iVar6) {
          *param_2 = (uchar)this[0x8c];
          *param_3 = __ptr;
          *param_4 = *(mm_camera_buf_def **)(this + 0x118);
          iVar6 = *(int *)(DAT_000cf018 + 0xcecce);
          if (*(int *)(iVar6 + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_000cf020 + 0xcecf4,0x583,DAT_000cf01c + 0xcece4,
                                *(undefined4 *)(*(int *)(this + 0x70) + 4),__ptr,this[0x8c]);
          }
          if (this[0x8e] == (QCameraStream)0x0) {
            uVar8 = 0;
          }
          else {
            pthread_mutex_lock((pthread_mutex_t *)(this + 0x10064));
            this[0x10061] = (QCameraStream)0x1;
            pthread_mutex_unlock((pthread_mutex_t *)(this + 0x10064));
            if (*(int *)(iVar6 + 0x28) != 0) {
              mm_camera_debug_log(1,3,DAT_000cf028 + 0xced40,0x58a,DAT_000cf024 + 0xced34,this[0x8e]
                                 );
            }
            uVar8 = 0;
            this[0x10085] = (QCameraStream)0x0;
            pthread_create((pthread_t *)(this + 0x2e4),(pthread_attr_t *)0x0,
                           *(__start_routine **)(DAT_000cf02c + 0xced56),this);
            pthread_setname_np(*(pthread_t *)(this + 0x2e4),(char *)(DAT_000cf030 + 0xced68));
          }
          goto LAB_000cef9a;
        }
        if (*(int *)(*(int *)(DAT_000cf00c + 0xcef2c) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000cf014 + 0xcef46,0x571,DAT_000cf010 + 0xcef3a,iVar6);
        }
        if (uVar4 != 0) {
          uVar9 = 0;
          do {
            (**(code **)(param_5 + 8))(uVar9,0xffffffff,3,*(undefined4 *)(param_5 + 0xc));
            uVar9 = uVar9 + 1;
          } while (uVar4 != uVar9);
        }
        (**(code **)(**(int **)(this + 0x10c) + 0xc))();
        if (*(int **)(this + 0x10c) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x10c) + 0x2c))();
        }
        *(undefined4 *)(this + 0x10c) = 0;
        free(*(void **)(this + 0x118));
        *(undefined4 *)(this + 0x118) = 0;
      }
      free(__ptr);
LAB_000cef92:
      uVar8 = 0xffffffda;
    }
  }
LAB_000cef9a:
  QCameraBufferMaps::_QCameraBufferMaps(aQStack2092);
LAB_000cefa2:
  if (*piVar10 != iVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

