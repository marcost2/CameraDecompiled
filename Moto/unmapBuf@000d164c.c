
/* qcamera::QCameraStream::unmapBuf(unsigned char, unsigned int, int,
   mm_camera_map_unmap_ops_tbl_t*) */

void __thiscall
qcamera::QCameraStream::unmapBuf
          (QCameraStream *this,uchar param_1,uint param_2,int param_3,
          mm_camera_map_unmap_ops_tbl_t *param_4)

{
  if (param_4 != (mm_camera_map_unmap_ops_tbl_t *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000d166a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 8))(param_2,param_3,param_1,*(undefined4 *)(param_4 + 0xc));
    return;
  }
  (**(code **)(*(int *)(this + 0x6c) + 0x58))
            (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100),*(undefined4 *)(this + 0x68),
             param_1,param_2,param_3);
  return;
}

