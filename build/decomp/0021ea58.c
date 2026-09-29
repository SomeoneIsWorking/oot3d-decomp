// OoT3D decomp @ 0021ea58  name=FUN_0021ea58  size=208

void FUN_0021ea58(int param_1)

{
  uint uVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;

  if (*(short *)(param_1 + 0x64e) < 1) {
    FUN_00375bcc(param_1,DAT_0021eb28);
    fVar2 = DAT_0021eb3c;
    fVar6 = DAT_0021eb34;
    fVar5 = *(float *)(param_1 + 0x254);
    if ((int)*(float *)(param_1 + 0x254) < DAT_0021eb2c) {
      fVar5 = DAT_0021eb30;
    }
    iVar4 = *DAT_0021eb38;
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    sVar3 = (short)(int)((DAT_0021eb34 / fVar5) * (DAT_0021eb34 / fVar7));
    *(short *)(param_1 + 0x64e) = sVar3;
    iVar4 = (int)*(short *)(iVar4 + 0x110);
    fVar7 = (float)VectorSignedToFloat((int)sVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar7 <= DAT_0021eb40 + (fVar6 / fVar5) * fVar2) << 0x1d;
    if (SUB41(uVar1 >> 0x1d,0)) {
      fVar5 = (float)VectorSignedToFloat(iVar4,(byte)(uVar1 >> 0x15) & 3);
      fVar6 = DAT_0021eb40 + (fVar6 / fVar5) * fVar2;
    }
    else {
      fVar6 = (float)VectorSignedToFloat((int)sVar3,(byte)(uVar1 >> 0x15) & 3);
    }
    sVar3 = (short)(int)fVar6;
  }
  else {
    sVar3 = *(short *)(param_1 + 0x64e) + -1;
  }
  *(short *)(param_1 + 0x64e) = sVar3;
  return;
}
