
/* qcamera::QCamera3Stream::getBatchBufs(unsigned char*, unsigned char**, mm_camera_buf_def**,
   mm_camera_map_unmap_ops_tbl_t*) */

int __thiscall
qcamera::QCamera3Stream::getBatchBufs
          (QCamera3Stream *this,uchar *param_1,uchar **param_2,mm_camera_buf_def **param_3,
          mm_camera_map_unmap_ops_tbl_t *param_4)

{
  undefined4 uVar1;
  QCamera3HeapMemory *pQVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uchar *__ptr;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  size_t __size;
  int iVar11;
  QCamera3Stream QVar12;
  uint uVar13;
  code *pcVar14;
  int iVar15;
  
  if (((param_3 == (mm_camera_buf_def **)0x0) ||
      (param_2 == (uchar **)0x0 || param_1 == (uchar *)0x0)) ||
     (param_4 == (mm_camera_map_unmap_ops_tbl_t *)0x0)) {
    if (*(int *)(*(int *)(DAT_0009b5f8 + 0x9b2be) + 0x3c) != 0) {
      mm_camera_debug_log(2,1,DAT_0009b600 + 0x9b2d6,0x4f7,DAT_0009b5fc + 0x9b2ce);
    }
    return -0x26;
  }
  iVar11 = *(int *)(DAT_0009b604 + 0x9b2f4);
  if (*(int *)(iVar11 + 0x44) != 0) {
    if (*(int *)(this + 0x14) == 0) {
      uVar1 = 0xc;
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(this + 0x14) + 4);
    }
    mm_camera_debug_log(2,3,DAT_0009b60c + 0x9b31c,0x4fb,DAT_0009b608 + 0x9b310,uVar1);
  }
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x27c));
  *(mm_camera_map_unmap_ops_tbl_t **)(this + 0x30) = param_4;
  pQVar2 = (QCamera3HeapMemory *)operator_new(0x610);
  pQVar2 = (QCamera3HeapMemory *)QCamera3HeapMemory::QCamera3HeapMemory(pQVar2,1);
  *(QCamera3HeapMemory **)(this + 0x288) = pQVar2;
  if (*(int *)(iVar11 + 0x48) != 0) {
    mm_camera_debug_log(2,4,DAT_0009b6c4 + 0x9b366,0x50b,DAT_0009b6c0 + 0x9b358,this[0x284],
                        *(undefined4 *)(*(int *)(this + 0x14) + 0x1ac));
    pQVar2 = *(QCamera3HeapMemory **)(this + 0x288);
  }
  iVar3 = QCamera3HeapMemory::allocate
                    (pQVar2,*(int *)(*(int *)(this + 0x14) + 0x1ac) * (uint)(byte)this[0x284]);
  if (iVar3 < 0) {
    if (*(int *)(iVar11 + 0x3c) != 0) {
      mm_camera_debug_log(2,1,DAT_0009b6d4 + 0x9b456,0x50f,DAT_0009b6d0 + 0x9b44e);
    }
    iVar3 = -0xc;
  }
  else {
    iVar3 = QCamera3Memory::getCnt(*(QCamera3Memory **)(this + 0x288));
    if (iVar3 != 0) {
      uVar13 = 0;
      do {
        if (this[0x284] == (QCamera3Stream)0x0) {
          if (*(int *)(iVar11 + 0x3c) != 0) {
            mm_camera_debug_log(2,1,DAT_0009b6dc + 0x9b476,0x52b,DAT_0009b6d8 + 0x9b46e);
          }
          iVar3 = -0x26;
          goto LAB_0009b676;
        }
        pcVar14 = *(code **)param_4;
        uVar1 = QCamera3Memory::getFd(*(QCamera3Memory **)(this + 0x288),uVar13);
        QVar12 = this[0x284];
        uVar4 = (**(code **)(**(int **)(this + 0x288) + 8))(*(int **)(this + 0x288),uVar13);
        iVar3 = (*pcVar14)(uVar13,0xffffffff,uVar1,QVar12,uVar4,8,*(undefined4 *)(param_4 + 0xc));
        if (iVar3 < 0) {
          if (*(int *)(iVar11 + 0x3c) != 0) {
            mm_camera_debug_log(2,1,DAT_0009b6cc + 0x9b4be,0x520,DAT_0009b6c8 + 0x9b4b4,iVar3);
          }
          if (uVar13 != 0) {
            uVar5 = 0;
            do {
              (**(code **)(param_4 + 8))(uVar5,0xffffffff,8,*(undefined4 *)(param_4 + 0xc));
              uVar5 = uVar5 + 1;
            } while (uVar13 != uVar5);
          }
          goto LAB_0009b65c;
        }
        uVar13 = uVar13 + 1;
        uVar5 = QCamera3Memory::getCnt(*(QCamera3Memory **)(this + 0x288));
      } while (uVar13 < uVar5);
    }
    if (*(int *)(iVar11 + 0x48) != 0) {
      mm_camera_debug_log(2,4,DAT_0009b6e4 + 0x9b406,0x531,DAT_0009b6e0 + 0x9b3fa,this[0x284]);
    }
    QVar12 = this[0x284];
    __ptr = (uchar *)malloc((uint)(byte)QVar12);
    if (__ptr == (uchar *)0x0) {
      if (*(int *)(iVar11 + 0x3c) != 0) {
        mm_camera_debug_log(2,1,DAT_0009b6ec + 0x9b49a,0x537,DAT_0009b6e8 + 0x9b492);
      }
      iVar3 = -0xc;
    }
    else {
      __aeabi_memclr8(__ptr,(uint)(byte)QVar12);
      uVar13 = (uint)(byte)this[0x284];
      if (uVar13 == 0) {
        __size = 0;
      }
      else {
        uVar5 = uVar13;
        if (uVar13 < 2) {
          uVar5 = 1;
        }
        __aeabi_memclr8(__ptr,uVar5);
        __size = uVar13 * 0x218;
      }
      pvVar6 = malloc(__size);
      *(void **)(this + 0x28c) = pvVar6;
      if (pvVar6 != (void *)0x0) {
        __aeabi_memclr8(pvVar6,__size);
        QVar12 = (QCamera3Stream)0x0;
        if (this[0x284] != (QCamera3Stream)0x0) {
          iVar15 = 0;
          uVar13 = 0;
          iVar3 = DAT_0009b700 + 0x9b51a;
          iVar7 = DAT_0009b704 + 0x9b520;
          iVar8 = DAT_0009b708 + 0x9b526;
          do {
            pvVar6 = (void *)(*(int *)(this + 0x28c) + iVar15);
            __aeabi_memclr8(pvVar6,0x218);
            if (*(QCamera3Memory **)(this + 0x288) != (QCamera3Memory *)0x0) {
              uVar1 = QCamera3Memory::getFd(*(QCamera3Memory **)(this + 0x288),0);
              *(undefined4 *)((int)pvVar6 + 0x204) = uVar1;
              *(undefined4 *)((int)pvVar6 + 8) = 1;
              *(undefined4 *)((int)pvVar6 + 0x20c) = *(undefined4 *)(*(int *)(this + 0x14) + 0x1ac);
              *(undefined4 *)((int)pvVar6 + 0x210) = *(undefined4 *)(this + 0x288);
              iVar9 = (**(code **)(**(int **)(this + 0x288) + 8))(*(int **)(this + 0x288),0);
              iVar10 = *(int *)(*(int *)(this + 0x14) + 0x1ac);
              *(uint *)((int)pvVar6 + 0xc) = uVar13;
              *(uint *)((int)pvVar6 + 0x208) = iVar10 * uVar13 + iVar9;
              uVar1 = *(undefined4 *)(this + 0x280);
              *(undefined *)((int)pvVar6 + 0x21) = 0;
              *(char *)((int)pvVar6 + 0x20) = (char)uVar1;
              *(undefined4 *)((int)pvVar6 + 100) = *(undefined4 *)(this + 0xd0);
            }
            iVar9 = QCameraQueue::enqueue
                              ((QCameraQueue *)(this + 0x298),
                               (void *)(*(int *)(this + 0x28c) + iVar15));
            if (iVar9 == 0) {
              if (*(int *)(iVar11 + 0x3c) != 0) {
                uVar1 = 1;
                uVar4 = 0x552;
                iVar9 = DAT_0009b70c + 0x9b5d8;
                iVar10 = iVar8;
                goto LAB_0009b5d6;
              }
            }
            else if (*(int *)(iVar11 + 0x48) != 0) {
              uVar4 = 0x550;
              uVar1 = 4;
              iVar9 = iVar7;
              iVar10 = iVar3;
LAB_0009b5d6:
              mm_camera_debug_log(2,uVar1,iVar9,uVar4,iVar10,uVar13);
            }
            QVar12 = this[0x284];
            uVar13 = uVar13 + 1;
            iVar15 = iVar15 + 0x218;
          } while (uVar13 < (byte)QVar12);
        }
        *param_1 = (uchar)QVar12;
        *param_2 = __ptr;
        *param_3 = *(mm_camera_buf_def **)(this + 0x28c);
        if (*(int *)(iVar11 + 0x44) != 0) {
          mm_camera_debug_log(2,3,DAT_0009b6fc + 0x9b6ba,0x55a,DAT_0009b6f8 + 0x9b6ac,
                              *(undefined4 *)(*(int *)(this + 0x14) + 4),this[0x284]);
        }
        iVar3 = 0;
        goto LAB_0009b676;
      }
      if (*(int *)(iVar11 + 0x3c) != 0) {
        mm_camera_debug_log(2,1,DAT_0009b6f4 + 0x9b628,0x546,DAT_0009b6f0 + 0x9b620);
      }
      free(__ptr);
      iVar3 = -0x26;
    }
    iVar11 = QCamera3Memory::getCnt(*(QCamera3Memory **)(this + 0x288));
    if (iVar11 != 0) {
      uVar13 = 0;
      do {
        (**(code **)(param_4 + 8))(uVar13,0xffffffff,8,*(undefined4 *)(param_4 + 0xc));
        uVar13 = uVar13 + 1;
        uVar5 = QCamera3Memory::getCnt(*(QCamera3Memory **)(this + 0x288));
      } while (uVar13 < uVar5);
    }
LAB_0009b65c:
    QCamera3HeapMemory::deallocate(*(QCamera3HeapMemory **)(this + 0x288));
  }
  if (*(int **)(this + 0x288) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x288) + 0x20))();
  }
  *(undefined4 *)(this + 0x288) = 0;
LAB_0009b676:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x27c));
  return iVar3;
}

