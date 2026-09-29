// OoT3D decomp @ 0028ce90  name=FUN_0028ce90  size=760

void FUN_0028ce90(int param_1,int param_2)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined1 auStack_48 [4];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;

  FUN_00372224(&local_44,param_1 + 0x148);
  if (*(char *)(DAT_0028d188 + 2) != '\0') {
    local_58 = (float)VectorUnsignedToFloat((uint)*DAT_0028d18c,(byte)(in_fpscr >> 0x15) & 3);
    local_58 = local_58 * DAT_0028d190;
    local_54 = (float)VectorUnsignedToFloat((uint)DAT_0028d18c[1],(byte)(in_fpscr >> 0x15) & 3);
    local_54 = local_54 * DAT_0028d190;
    local_50 = (float)VectorUnsignedToFloat((uint)DAT_0028d18c[2],(byte)(in_fpscr >> 0x15) & 3);
    local_50 = local_50 * DAT_0028d190;
    local_4c = (float)VectorUnsignedToFloat((uint)*DAT_0028d194,(byte)(in_fpscr >> 0x15) & 3);
    local_4c = local_4c * DAT_0028d190;
    FUN_00357a50(param_1 + 0x1a4,0,5,&local_58,0);
    FUN_00357a50(param_1 + 0x1a4,1,5,&local_58,0);
  }
  *(undefined1 *)(*(int *)(param_1 + 0x1cc) + 0xad) = 1;
  if (((*(uint *)(param_1 + 4) & 0x80) == 0) && (*(char *)(param_1 + 0x230) != '\0')) {
    *(undefined1 *)(*(int *)(param_1 + 0x1cc) + 0xad) = 0;
  }
  FUN_0035e240(param_1 + 0x1a4,&local_44,DAT_0028d19c,DAT_0028d198,param_1,0);
  if (((*(int *)(param_1 + 0x22c) == DAT_0028d1a0) &&
      (iVar1 = (int)*(short *)(param_1 + 0x234), iVar1 < 0xb9)) && (0x1e < iVar1)) {
    local_54 = DAT_0028d1a4;
    fVar2 = (float)VectorSignedToFloat((0xb8 - iVar1) * 8,(byte)(in_fpscr >> 0x15) & 3);
    local_4c = DAT_0028d1ac;
    local_50 = fVar2 + DAT_0028d1a8;
    if (DAT_0028d1b0 < (int)(fVar2 + DAT_0028d1a8)) {
      local_50 = DAT_0028d1b4;
    }
    FUN_003735ac(&local_60,param_2 + 0x2fc,&local_54);
    local_38 = *(float *)(param_1 + 0x28) + local_60;
    local_28 = *(float *)(param_1 + 0x2c) + local_5c;
    local_18 = *(float *)(param_1 + 0x30) + local_58;
    local_44 = DAT_0028d1b8 * 1.0;
    local_34 = DAT_0028d1b8 * 0.0;
    local_24 = DAT_0028d1b8 * 0.0;
    local_40 = DAT_0028d1b8 * 0.0;
    local_30 = DAT_0028d1b8 * 1.0;
    local_20 = DAT_0028d1b8 * 0.0;
    local_3c = DAT_0028d1b8 * 0.0;
    local_2c = DAT_0028d1b8 * 0.0;
    local_1c = DAT_0028d1b8 * 1.0;
    local_6c = local_38;
    local_68 = local_28;
    local_64 = local_18;
    if (*(int *)(param_1 + 0x1ad8) != 0) {
      local_70 = DAT_0028d1bc;
      local_6c = DAT_0028d1bc;
      local_68 = DAT_0028d1c0;
      local_64 = DAT_0028d1b8;
      FUN_00358778(*(undefined4 *)(param_1 + 0x1ad8),0,0,&local_70,0);
      *(undefined1 *)(*(int *)(param_1 + 0x1ad8) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1ad8),&local_44);
      FUN_00372170(*(undefined4 *)(param_1 + 0x1ad8),0);
    }
  }
  FUN_00368cc0(param_2,param_1 + 0x3c,param_1 + 0xee0,auStack_48);
  FUN_0032709c(param_1,param_2);
  return;
}
