// OoT3D decomp @ 0033f4cc  name=FUN_0033f4cc  size=312

int FUN_0033f4cc(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint in_fpscr;
  float extraout_s0;
  float fVar10;
  float fVar11;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;

  iVar6 = *(int *)(param_2 + 0x20ac);
  iVar3 = FUN_0036a7a0(param_2);
  fVar2 = DAT_0033f608;
  if (iVar3 == 0) {
    uVar4 = (uint)*(byte *)(param_1 + 0x1c4);
    local_28 = extraout_s0;
    if (uVar4 != 3) {
      local_28 = DAT_0033f608;
    }
    iVar3 = DAT_0033f604 + uVar4 * 6;
    if (uVar4 == 3) {
      local_28 = DAT_0033f60c;
    }
    fVar10 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar3 + 4),(byte)(in_fpscr >> 0x15) & 3);
    iVar5 = *(int *)(param_2 + 0x20ac);
    fVar11 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar3 + 5),(byte)(in_fpscr >> 0x15) & 3);
    local_2c = *(undefined4 *)(iVar5 + 0x28);
    local_28 = *(float *)(iVar5 + 0x2c) + local_28;
    local_24 = *(undefined4 *)(iVar5 + 0x30);
    FUN_0036c5d8(param_1,&local_38,&local_2c);
    local_38 = ABS(local_38);
    bVar7 = local_38 < fVar10;
    bVar8 = local_38 == fVar10;
    bVar9 = NAN(local_38) || NAN(fVar10);
    if (local_38 <= fVar10) {
      local_34 = ABS(local_34);
      bVar7 = local_34 < fVar11;
      bVar8 = local_34 == fVar11;
      bVar9 = NAN(local_34) || NAN(fVar11);
    }
    if (!bVar8 && bVar7 == bVar9) {
      local_30 = DAT_0033f610;
    }
    if ((int)ABS(local_30) < DAT_0033f614) {
      sVar1 = *(short *)(iVar6 + 0xbe) - *(short *)(param_1 + 0xbe);
      if (fVar2 < local_30) {
        sVar1 = -0x8000 - sVar1;
      }
      if ((int)sVar1 + 0x2fffU <= DAT_0033f618) {
        fVar10 = DAT_0033f61c;
        if (fVar2 <= local_30) {
          fVar10 = DAT_0033f620;
        }
        return (int)fVar10;
      }
    }
  }
  return 0;
}
