// OoT3D decomp @ 0033ebfc  name=FUN_0033ebfc  size=576

undefined4
FUN_0033ebfc(float param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5_00,
            float *param_5,undefined4 param_7)

{
  float fVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined auStack_44 [8];
  float local_3c;
  float local_38;
  float local_34;
  
  fVar1 = DAT_0033ee3c;
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 10),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = fVar5 * DAT_0033ee3c;
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = fVar6 * DAT_0033ee3c;
  FUN_0036b0fc(param_2);
  FUN_0036b02c(param_2,param_3);
  fVar9 = DAT_0033ee40;
  param_1 = param_1 + DAT_0033ee40;
  fVar7 = *(float *)(param_3 + 0x28) - param_1 * fVar5;
  *(float *)(param_3 + 0x28) = fVar7;
  fVar8 = *(float *)(param_3 + 0x30) - param_1 * fVar6;
  *(float *)(param_3 + 0x30) = fVar8;
  if (param_5 != (float *)0x0) {
    *(float *)(param_3 + 0x28) = fVar7 + *param_5;
    *(float *)(param_3 + 0x30) = fVar8 + param_5[2];
  }
  uVar3 = FUN_003758b0(fVar6,fVar5);
  fVar5 = DAT_0033ee48;
  *(undefined2 *)(DAT_0033ee44 + param_3) = uVar3;
  iVar4 = DAT_0033ee4c;
  *(undefined2 *)(param_3 + 0xbe) = uVar3;
  *(float *)(param_3 + 0x6c) = fVar5;
  *(float *)(param_3 + 0x221c) = fVar5;
  *(undefined *)(iVar4 + param_3) = 0;
  iVar4 = DAT_0033ee54;
  *(undefined4 *)(DAT_0033ee54 + 0xcc) = DAT_0033ee50;
  *(undefined *)(iVar4 + 0xd4) = 0;
  if ((*(int *)(param_3 + 0x284) == 0xe6) &&
     (iVar4 = FUN_002ba3b8(auStack_44,param_3,param_3 + 0x28,param_3 + 0x108,param_2), iVar4 != 0))
  {
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 10),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
    local_3c = local_3c - *(float *)(param_3 + 0x28);
    local_38 = local_38 - *(float *)(param_3 + 0x2c);
    local_34 = local_34 - *(float *)(param_3 + 0x30);
    if ((local_3c != fVar5 || local_38 != fVar5) || local_34 != fVar5) {
      fVar9 = fVar9 / SQRT(local_3c * local_3c + local_38 * local_38 + local_34 * local_34);
      local_3c = local_3c * fVar9;
      local_38 = local_38 * fVar9;
      local_34 = local_34 * fVar9;
      if (DAT_0033ee58 <
          (int)(local_3c * fVar6 * fVar1 + local_38 * fVar7 * fVar1 + local_34 * fVar8 * fVar1)) {
        return 1;
      }
    }
  }
  uVar2 = DAT_0033ee5c;
  *(uint *)(param_3 + 0x29b8) = *(uint *)(param_3 + 0x29b8) | 0x800000;
  FUN_0036055c(param_2,param_3,uVar2,0);
  FUN_003604f0(param_3 + 0x254,param_2,param_7);
  *(undefined4 *)(param_3 + 0x2ac) = *(undefined4 *)(param_3 + 0x2b8);
  *(undefined4 *)(param_3 + 0x2b0) = *(undefined4 *)(param_3 + 700);
  *(undefined4 *)(param_3 + 0x2b4) = *(undefined4 *)(param_3 + 0x2c0);
  *(undefined2 *)(param_3 + 0x2a8) = *(undefined2 *)(param_3 + 0xbe);
  return 0;
}

