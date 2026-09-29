// OoT3D decomp @ 0026a5a0  name=FUN_0026a5a0  size=340

void FUN_0026a5a0(int param_1,int param_2)

{
  float fVar1;
  short sVar2;
  uint in_fpscr;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_50 [2];
  float local_48;
  float local_40;
  float local_38;
  float local_30;
  float local_28;

  FUN_00372224(local_50,param_1 + 0x148);
  sVar2 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(DAT_0026a6f4 + param_2) * 4 + 0xa54));
  fVar1 = DAT_0026a6fc;
  fVar4 = (float)VectorSignedToFloat((int)(short)((sVar2 - *(short *)(param_1 + 0xbe)) + -0x8000),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar4 = fVar4 * DAT_0026a6f8;
  uVar3 = in_fpscr & 0xfffffff | (uint)(fVar4 == DAT_0026a6fc) << 0x1e;
  if (!SUB41(uVar3 >> 0x1e,0)) {
    fVar5 = (float)FUN_003727f0();
    fVar4 = (float)FUN_00372674(fVar4);
    fVar6 = local_50[0] * fVar5;
    local_50[0] = local_50[0] * fVar4 - local_48 * fVar5;
    local_48 = fVar6 + local_48 * fVar4;
    fVar6 = local_40 * fVar5;
    local_40 = local_40 * fVar4 - local_38 * fVar5;
    local_38 = fVar6 + local_38 * fVar4;
    fVar6 = local_30 * fVar5;
    local_30 = local_30 * fVar4 - local_28 * fVar5;
    local_28 = fVar6 + local_28 * fVar4;
  }
  fVar4 = DAT_0026a700;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x228) + 0xc) + 0xc) =
       *(undefined4 *)(param_2 + 0x7f44);
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1a8),(byte)(uVar3 >> 0x15) & 3);
  FUN_003695cc(fVar1,fVar1,fVar1,fVar5 * fVar4,*(undefined4 *)(param_1 + 0x228),0,4,2);
  *(undefined1 *)(*(int *)(param_1 + 0x228) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x228),local_50);
  FUN_00372170(*(undefined4 *)(param_1 + 0x228),1);
  return;
}
