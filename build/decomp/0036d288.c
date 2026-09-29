// OoT3D decomp @ 0036d288  name=FUN_0036d288  size=432

undefined4
FUN_0036d288(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [12];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;

  fVar4 = (float)FUN_002cfca0((int)*(short *)(param_2 + 0x1b0));
  fVar5 = (float)FUN_00338f60((int)*(short *)(param_2 + 0x1b0));
  fVar2 = DAT_0036d43c;
  fVar6 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_2 + 0x1a8) < DAT_0036d43c) << 0x1f;
  fVar8 = DAT_0036d440;
  if (SUB41(uVar1 >> 0x1f,0) == (NAN(*(float *)(param_2 + 0x1a8)) || NAN(DAT_0036d43c))) {
    fVar8 = DAT_0036d444;
  }
  fVar8 = (fVar7 - DAT_0036d438) * fVar8;
  local_40 = (float)VectorSignedToFloat(param_5,(byte)(uVar1 >> 0x15) & 3);
  local_38 = *(float *)(param_2 + 0x28) + (fVar6 - DAT_0036d438) * fVar5;
  local_44 = local_38 + fVar8 * fVar4;
  local_40 = *(float *)(param_2 + 0x2c) + local_40;
  local_30 = *(float *)(param_2 + 0x30) - (fVar6 - DAT_0036d438) * fVar4;
  local_3c = local_30 + fVar8 * fVar5;
  local_34 = local_40;
  iVar3 = FUN_0035ebac(DAT_0036d43c,param_1 + 0xa98,&local_38,&local_44,auStack_50,auStack_58,1,0,0,
                       1,auStack_54,param_2);
  if (iVar3 == 0) {
    local_38 = *(float *)(param_2 + 0x28) * DAT_0036d448 - local_38;
    local_44 = local_38 + fVar8 * fVar4;
    local_30 = *(float *)(param_2 + 0x30) * DAT_0036d448 - local_30;
    local_3c = local_30 + fVar8 * fVar5;
    iVar3 = FUN_0035ebac(fVar2,param_1 + 0xa98,&local_38,&local_44,auStack_50,auStack_58,1,0,0,1,
                         auStack_54,param_2);
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}
