
/* qcamera::MotExifHal3::MotExifHal3(qcamera::QCamera3Exif*, metadata_buffer_t*) */

void __thiscall
qcamera::MotExifHal3::MotExifHal3
          (MotExifHal3 *this,QCamera3Exif *param_1,metadata_buffer_t *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)MotExif::MotExif((MotExif *)this);
  piVar1[2] = (int)param_1;
  piVar1[3] = (int)param_2;
  *piVar1 = *(int *)(DAT_00106c20 + 0x106c18) + 8;
  return;
}

