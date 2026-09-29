// OoT3D decomp @ 00436f3c  name=FUN_00436f3c  size=368

void FUN_00436f3c(int param_1,short *param_2)

{
  uint uVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  uint in_fpscr;
  float local_14;
  float local_10;
  float local_c;

  if (*(char *)(param_1 + 0x48) != '\0') {
    *param_2 = *param_2 - *(short *)(param_1 + 0xe);
    param_2[1] = param_2[1] - *(short *)(param_1 + 0x10);
    param_2[2] = param_2[2] - *(short *)(param_1 + 0x12);
  }
  if (*(char *)(param_1 + 0x49) != '\0') {
    bVar3 = false;
    fVar2 = *(float *)(param_1 + 0x18);
    if (*(float *)(param_1 + 0x18) == 1.0) {
      in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x1c) == DAT_004370ac) << 0x1e;
      bVar3 = SUB41(in_fpscr >> 0x1e,0);
      fVar2 = DAT_004370ac;
    }
    bVar4 = false;
    if (bVar3) {
      in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x20) == fVar2) << 0x1e;
      bVar4 = SUB41(in_fpscr >> 0x1e,0);
    }
    if (bVar4) {
      uVar1 = in_fpscr & 0xfffffff;
      in_fpscr = uVar1 | (uint)(*(float *)(param_1 + 0x24) == fVar2) << 0x1e;
      bVar3 = false;
      if (SUB41(in_fpscr >> 0x1e,0)) {
        in_fpscr = uVar1 | (uint)(*(float *)(param_1 + 0x28) == fVar2) << 0x1e;
        bVar3 = SUB41(in_fpscr >> 0x1e,0);
      }
      bVar4 = false;
      if (bVar3) {
        bVar4 = *(int *)(param_1 + 0x2c) == 0x3f800000;
      }
      if (bVar4) {
        uVar1 = in_fpscr & 0xfffffff;
        in_fpscr = uVar1 | (uint)(*(float *)(param_1 + 0x30) == fVar2) << 0x1e;
        bVar3 = false;
        if (SUB41(in_fpscr >> 0x1e,0)) {
          in_fpscr = uVar1 | (uint)(*(float *)(param_1 + 0x34) == fVar2) << 0x1e;
          bVar3 = SUB41(in_fpscr >> 0x1e,0);
        }
        bVar4 = false;
        if (bVar3) {
          in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x38) == fVar2) << 0x1e;
          bVar4 = SUB41(in_fpscr >> 0x1e,0);
        }
        bVar3 = false;
        if (bVar4) {
          in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x3c) == fVar2) << 0x1e;
          bVar3 = SUB41(in_fpscr >> 0x1e,0);
        }
        if (bVar3) {
          bVar3 = false;
          if (*(int *)(param_1 + 0x40) == 0x3f800000) {
            in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x44) == fVar2) << 0x1e;
            bVar3 = SUB41(in_fpscr >> 0x1e,0);
          }
          if (bVar3) {
            return;
          }
        }
      }
    }
    local_14 = (float)VectorSignedToFloat((int)*param_2,(byte)(in_fpscr >> 0x15) & 3);
    local_10 = (float)VectorSignedToFloat((int)param_2[1],(byte)(in_fpscr >> 0x15) & 3);
    local_c = (float)VectorSignedToFloat((int)param_2[2],(byte)(in_fpscr >> 0x15) & 3);
    FUN_003735ac(&local_14,param_1 + 0x18,&local_14);
    *param_2 = (short)(int)local_14;
    param_2[1] = (short)(int)local_10;
    param_2[2] = (short)(int)local_c;
  }
  return;
}
