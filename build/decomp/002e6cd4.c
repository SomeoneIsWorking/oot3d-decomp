// OoT3D decomp @ 002e6cd4  name=FUN_002e6cd4  size=248

void FUN_002e6cd4(undefined4 param_1,int param_2,int param_3,int param_4,int param_5_00,int param_5,
                 int param_7)

{
  bool bVar1;
  uint uVar2;
  int extraout_r1;
  int iVar3;
  bool bVar4;
  uint in_fpscr;
  undefined4 uVar5;
  float fVar6;
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
  
  uVar5 = VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_2 + 0x210) = uVar5;
  local_34 = VectorSignedToFloat(param_5_00,(byte)(in_fpscr >> 0x15) & 3);
  uVar5 = VectorSignedToFloat(param_5_00,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_2 + 0x214) = uVar5;
  local_44 = VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
  local_40 = VectorSignedToFloat(param_5_00,(byte)(in_fpscr >> 0x15) & 3);
  local_38 = VectorSignedToFloat(param_5 + param_4,(byte)(in_fpscr >> 0x15) & 3);
  local_2c = VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
  local_28 = VectorSignedToFloat(param_5_00 + param_7,(byte)(in_fpscr >> 0x15) & 3);
  local_3c = param_1;
  local_30 = param_1;
  local_24 = param_1;
  local_20 = local_38;
  local_1c = local_28;
  local_18 = param_1;
  FUN_002f2c54(*(undefined4 *)(param_2 + 0x10c),&local_44,param_3);
  uVar2 = (uint)*(byte *)(param_2 + param_3 + 0x434);
  bVar4 = uVar2 != 0;
  if (bVar4) {
    uVar2 = *(uint *)(param_2 + 0x428);
  }
  bVar1 = uVar2 != 7;
  iVar3 = extraout_r1;
  if (bVar4 && bVar1) {
    iVar3 = param_2 + param_3 * 4;
    uVar2 = *(uint *)(iVar3 + 0xc);
  }
  if ((bVar4 && bVar1) && uVar2 != 0) {
    fVar6 = (float)VectorSignedToFloat(param_5_00,(byte)(in_fpscr >> 0x15) & 3);
    uVar5 = VectorSignedToFloat(param_4 + 0x12,(byte)(in_fpscr >> 0x15) & 3);
    FUN_002fcc88(uVar5,*(float *)(iVar3 + 0x110) + fVar6);
  }
  return;
}

