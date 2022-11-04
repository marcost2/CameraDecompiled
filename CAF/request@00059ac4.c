
/* qcamera::QCamera3RawDumpChannel::request(native_handle const**, unsigned int, int&) */

undefined4
qcamera::QCamera3RawDumpChannel::request
          (native_handle **param_1,uint param_2,camera3_stream_buffer *param_3,
          metadata_buffer_t *param_4,int *param_5,bool param_6,bool param_7)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    return 0;
  }
  uVar1 = QCamera3Channel::__ThumbV7PILongThunk__ZN7qcamera15QCamera3Channel5startEv
                    ((QCamera3Channel *)param_1);
  return uVar1;
}

