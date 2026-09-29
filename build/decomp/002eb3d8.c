// OoT3D decomp @ 002eb3d8  name=FUN_002eb3d8  size=264

void FUN_002eb3d8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  bool bVar3;
  uint in_fpscr;
  undefined4 uVar4;
  float fVar5;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;

  local_3c = DAT_002eb4e0;
  uVar4 = VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  param_7 = param_7 + param_3;
  param_8 = param_8 + param_4;
  *(undefined4 *)(param_1 + 0x210) = uVar4;
  local_34 = VectorSignedToFloat(param_8,(byte)(in_fpscr >> 0x15) & 3);
  uVar4 = VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x214) = uVar4;
  local_44 = VectorSignedToFloat(param_7,(byte)(in_fpscr >> 0x15) & 3);
  local_40 = VectorSignedToFloat(param_8,(byte)(in_fpscr >> 0x15) & 3);
  local_38 = VectorSignedToFloat(param_5 + param_7,(byte)(in_fpscr >> 0x15) & 3);
  local_30 = local_3c;
  local_2c = VectorSignedToFloat(param_7,(byte)(in_fpscr >> 0x15) & 3);
  local_28 = VectorSignedToFloat(param_8 + param_6,(byte)(in_fpscr >> 0x15) & 3);
  local_24 = local_3c;
  local_18 = local_3c;
  local_20 = local_38;
  local_1c = local_28;
  FUN_002f2c54(*(undefined4 *)(param_1 + 0x10c),&local_44,param_2);
  bVar3 = *(char *)(param_1 + param_2 + 0x434) != '\0';
  iVar1 = 0;
  iVar2 = extraout_r1;
  if (bVar3) {
    iVar2 = param_1 + param_2 * 4;
    iVar1 = *(int *)(iVar2 + 0xc);
  }
  if (bVar3 && iVar1 != 0) {
    fVar5 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
    uVar4 = VectorSignedToFloat(param_3 + 0x12,(byte)(in_fpscr >> 0x15) & 3);
    FUN_002fcc88(uVar4,*(float *)(iVar2 + 0x110) + fVar5);
  }
  return;
}
