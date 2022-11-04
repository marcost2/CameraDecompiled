
/* clear_metadata_buffer(metadata_buffer_t*) */

void clear_metadata_buffer(metadata_buffer_t *param_1)

{
  if (param_1 != (metadata_buffer_t *)0x0) {
    __aeabi_memclr4(param_1,0xe8);
    param_1[0x1174ac] = (metadata_buffer_t)0x0;
    param_1[0x106334] = (metadata_buffer_t)0x0;
    param_1[0xe1938] = (metadata_buffer_t)0x0;
    param_1[0xcf434] = (metadata_buffer_t)0x0;
    param_1[0xcf3c8] = (metadata_buffer_t)0x0;
    param_1[0xc3070] = (metadata_buffer_t)0x0;
    param_1[0xb80a0] = (metadata_buffer_t)0x0;
    param_1[0xb6d04] = (metadata_buffer_t)0x0;
    param_1[0xb6cc8] = (metadata_buffer_t)0x0;
    param_1[0x76ca8] = (metadata_buffer_t)0x0;
  }
  return;
}

