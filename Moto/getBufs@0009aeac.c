
/* qcamera::QCamera3Stream::getBufs(cam_frame_len_offset_t*, unsigned char*, unsigned char**,
   mm_camera_buf_def**, mm_camera_map_unmap_ops_tbl_t*) */

undefined4 __thiscall
qcamera::QCamera3Stream::getBufs
          (QCamera3Stream *this,cam_frame_len_offset_t *param_1,uchar *param_2,uchar **param_3,
          mm_camera_buf_def **param_4,mm_camera_map_unmap_ops_tbl_t *param_5)

{
  int iVar1;
  int *this_00;
  QCamera3StreamMem *pQVar2;
  undefined4 uVar3;
  uchar *__ptr;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  size_t __size;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x27c));
  if (param_5 == (mm_camera_map_unmap_ops_tbl_t *)0x0) {
    if (*(int *)(*(int *)(DAT_0009b248 + 0x9af1c) + 0x3c) != 0) {
      mm_camera_debug_log(2,1,DAT_0009b250 + 0x9af38,0x359,DAT_0009b24c + 0x9af30);
      uVar6 = 0xffffffda;
      goto LAB_0009b23a;
    }
  }
  else {
    __aeabi_memcpy8((cam_frame_len_offset_t *)(this + 0xd4),param_1,0x188);
    *(mm_camera_map_unmap_ops_tbl_t **)(this + 0x30) = param_5;
    if (*(int *)(this + 0xcc) != 0) {
      if (*(int *)(*(int *)(DAT_0009b254 + 0x9aef2) + 0x3c) != 0) {
        uVar6 = 0x361;
        iVar1 = DAT_0009b258 + 0x9af02;
        iVar5 = DAT_0009b25c + 0x9af0a;
LAB_0009af08:
        mm_camera_debug_log(2,1,iVar5,uVar6,iVar1);
      }
LAB_0009af0c:
      uVar6 = 0xffffffda;
      goto LAB_0009b23a;
    }
    this_00 = *(int **)(this + 0x278);
    if (*(int *)(*(int *)(this + 0x14) + 0x3e4) == 7) {
      pQVar2 = (QCamera3StreamMem *)
               QCamera3ReprocessChannel::getMetaStreamBufs
                         ((QCamera3ReprocessChannel *)this_00,*(uint *)(this + 600));
    }
    else {
      pQVar2 = (QCamera3StreamMem *)
               (**(code **)(*this_00 + 0x38))(this_00,*(undefined4 *)(this + 600));
    }
    *(QCamera3StreamMem **)(this + 0xcc) = pQVar2;
    if (pQVar2 == (QCamera3StreamMem *)0x0) {
      if (*(int *)(*(int *)(DAT_0009b260 + 0x9afec) + 0x3c) != 0) {
        mm_camera_debug_log(2,1,DAT_0009b268 + 0x9b004,0x36c,DAT_0009b264 + 0x9affc);
      }
      uVar6 = 0xfffffff4;
      goto LAB_0009b23a;
    }
    if (this[0x34] == (QCamera3Stream)0x0) {
      __size = 0;
      iVar1 = 0;
    }
    else {
      uVar9 = 0;
      iVar1 = 0;
      while( true ) {
        iVar5 = QCamera3StreamMem::valid(pQVar2,uVar9);
        if (iVar5 != 0) {
          iVar1 = QCamera3StreamMem::getSize(*(QCamera3StreamMem **)(this + 0xcc),uVar9);
          if (iVar1 == -0x4b) {
            if (*(int *)(*(int *)(DAT_0009b278 + 0x9b0e2) + 0x3c) == 0) goto LAB_0009af0c;
            uVar6 = 900;
            iVar1 = DAT_0009b27c + 0x9b0f6;
            iVar5 = DAT_0009b280 + 0x9b0fe;
            goto LAB_0009af08;
          }
          pcVar7 = *(code **)param_5;
          uVar6 = QCamera3StreamMem::getFd(*(QCamera3StreamMem **)(this + 0xcc),uVar9);
          uVar3 = QCamera3StreamMem::getPtr(*(QCamera3StreamMem **)(this + 0xcc),uVar9);
          iVar1 = (*pcVar7)(uVar9,0xffffffff,uVar6,iVar1,uVar3,3,*(undefined4 *)(param_5 + 0xc));
          if (iVar1 < 0) {
            if (*(int *)(*(int *)(DAT_0009b26c + 0x9b160) + 0x3c) != 0) {
              mm_camera_debug_log(2,1,DAT_0009b274 + 0x9b17a,0x379,DAT_0009b270 + 0x9b170,iVar1);
            }
            if (uVar9 != 0) {
              uVar8 = 0;
              uVar6 = 0xffffffda;
              do {
                iVar1 = QCamera3StreamMem::valid(*(QCamera3StreamMem **)(this + 0xcc),uVar8);
                if (iVar1 != 0) {
                  (**(code **)(param_5 + 8))(uVar8,0xffffffff,3,*(undefined4 *)(param_5 + 0xc));
                }
                uVar8 = uVar8 + 1;
              } while (uVar9 != uVar8);
              goto LAB_0009b23a;
            }
            goto LAB_0009b236;
          }
        }
        __size = (size_t)(byte)this[0x34];
        uVar9 = uVar9 + 1;
        if (__size <= uVar9) break;
        pQVar2 = *(QCamera3StreamMem **)(this + 0xcc);
      }
    }
    __ptr = (uchar *)malloc(__size);
    if (__ptr == (uchar *)0x0) {
      if (*(int *)(*(int *)(DAT_0009b284 + 0x9b086) + 0x3c) != 0) {
        mm_camera_debug_log(2,1,DAT_0009b28c + 0x9b09e,0x38d,DAT_0009b288 + 0x9b096);
        __size = (size_t)(byte)this[0x34];
      }
      if (__size == 0) {
        uVar6 = 0xfffffff4;
      }
      else {
        uVar9 = 0;
        uVar6 = 0xfffffff4;
        do {
          iVar1 = QCamera3StreamMem::valid(*(QCamera3StreamMem **)(this + 0xcc),uVar9);
          if (iVar1 != 0) {
            (**(code **)(param_5 + 8))(uVar9,0xffffffff,3,*(undefined4 *)(param_5 + 0xc));
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < (byte)this[0x34]);
      }
      goto LAB_0009b23a;
    }
    __aeabi_memclr8(__ptr,__size);
    uVar9 = (uint)(byte)this[0x34];
    pvVar4 = malloc(uVar9 * 0x218);
    *(void **)(this + 0xd0) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      if (*(int *)(*(int *)(DAT_0009b290 + 0x9b108) + 0x3c) != 0) {
        mm_camera_debug_log(2,1,DAT_0009b298 + 0x9b122,0x39a,DAT_0009b294 + 0x9b118,iVar1);
        uVar9 = (uint)(byte)this[0x34];
      }
      if (uVar9 != 0) {
        uVar9 = 0;
        do {
          iVar1 = QCamera3StreamMem::valid(*(QCamera3StreamMem **)(this + 0xcc),uVar9);
          if (iVar1 != 0) {
            (**(code **)(param_5 + 8))(uVar9,0xffffffff,3,*(undefined4 *)(param_5 + 0xc));
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < (byte)this[0x34]);
      }
    }
    else {
      __aeabi_memclr8(pvVar4,uVar9 * 0x218);
      pQVar2 = *(QCamera3StreamMem **)(this + 0xcc);
      if (this[0x34] != (QCamera3Stream)0x0) {
        iVar1 = 0;
        uVar9 = 0;
        do {
          iVar5 = QCamera3StreamMem::valid(pQVar2,uVar9);
          if (iVar5 != 0) {
            QCamera3StreamMem::getBufDef
                      (*(QCamera3StreamMem **)(this + 0xcc),(cam_frame_len_offset_t *)(this + 0xd4),
                       (mm_camera_buf_def *)(*(int *)(this + 0xd0) + iVar1),uVar9);
          }
          pQVar2 = *(QCamera3StreamMem **)(this + 0xcc);
          uVar9 = uVar9 + 1;
          iVar1 = iVar1 + 0x218;
        } while (uVar9 < (byte)this[0x34]);
      }
      iVar1 = QCamera3StreamMem::getRegFlags(pQVar2,__ptr);
      if (-1 < iVar1) {
        *param_2 = (uchar)this[0x34];
        *param_3 = __ptr;
        uVar6 = 0;
        *param_4 = *(mm_camera_buf_def **)(this + 0xd0);
        goto LAB_0009b23a;
      }
      if (*(int *)(*(int *)(DAT_0009b29c + 0x9b1da) + 0x3c) != 0) {
        mm_camera_debug_log(2,1,DAT_0009b2a4 + 0x9b1f4,0x3ae,DAT_0009b2a0 + 0x9b1e8,iVar1);
      }
      if (this[0x34] != (QCamera3Stream)0x0) {
        uVar9 = 0;
        do {
          iVar1 = QCamera3StreamMem::valid(*(QCamera3StreamMem **)(this + 0xcc),uVar9);
          if (iVar1 != 0) {
            (**(code **)(param_5 + 8))(uVar9,0xffffffff,3,*(undefined4 *)(param_5 + 0xc));
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < (byte)this[0x34]);
      }
      free(*(void **)(this + 0xd0));
      *(undefined4 *)(this + 0xd0) = 0;
    }
    free(__ptr);
  }
LAB_0009b236:
  uVar6 = 0xffffffda;
LAB_0009b23a:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x27c));
  return uVar6;
}

