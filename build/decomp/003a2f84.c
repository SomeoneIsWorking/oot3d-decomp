// OoT3D decomp @ 003a2f84  name=FUN_003a2f84  size=308

undefined4
FUN_003a2f84(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  float *pfVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_1c [20];

  fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 10),(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 10),(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
  iVar2 = FUN_00254868(fVar3 * DAT_003a300c,fVar4 * DAT_003a300c,fVar5 * DAT_003a300c,
                       *(undefined4 *)(param_1 + 0x10),fVar6 * DAT_003a300c,fVar7 * DAT_003a300c,
                       fVar8 * DAT_003a300c,*(undefined4 *)(param_2 + 0x10),DAT_00393fb8);
  if (iVar2 != 0) {
    FUN_0036df4c(DAT_00393fb8 + 6);
    fVar3 = DAT_00393fbc;
    pfVar1 = DAT_00393fb8;
    DAT_00393fb8[9] = *DAT_00393fb8 + DAT_00393fb8[3] * DAT_00393fbc;
    pfVar1[10] = pfVar1[1] + pfVar1[4] * fVar3;
    pfVar1[0xb] = pfVar1[2] + pfVar1[5] * fVar3;
    iVar2 = FUN_002311e0(pfVar1 + 6,pfVar1 + 9,param_3,param_4,param_5,auStack_1c);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}
