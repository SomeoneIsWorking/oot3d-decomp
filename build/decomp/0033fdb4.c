// OoT3D decomp @ 0033fdb4  name=FUN_0033fdb4  size=200

void FUN_0033fdb4(int param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  float fVar3;
  ushort uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;

  lVar2 = (ulonglong)*(uint *)(DAT_0033fe7c + param_2) * (ulonglong)DAT_0033fe80;
  uVar1 = (uint)((ulonglong)lVar2 >> 0x25);
  iVar5 = *(uint *)(DAT_0033fe7c + param_2) + uVar1 * -0x30;
  fVar8 = (float)VectorUnsignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)FUN_003727f0(fVar8 * DAT_0033fe84 * DAT_0033fe88 * DAT_0033fe8c,iVar5,uVar1 * -3,
                              (int)lVar2);
  iVar5 = DAT_0033fea0;
  fVar3 = DAT_0033fe98;
  fVar8 = DAT_0033fe94;
  fVar9 = fVar9 * DAT_0033fe90;
  *(float *)(param_1 + 0x1d0) = fVar9;
  *(float *)(param_1 + 0x1c8) = (fVar3 + *(float *)(param_1 + 0x1cc) * fVar8) - fVar9 * fVar8;
  *(undefined4 *)(param_1 + 0x1cc) = DAT_0033fe9c;
  fVar9 = *(float *)(param_1 + 0x1c4) + *(float *)(param_1 + 0x1d8) + fVar9;
  *(float *)(param_1 + 0x2c) = fVar9;
  uVar4 = (ushort)*(byte *)(iVar5 + 0xe);
  bVar6 = uVar4 == 1;
  if (bVar6) {
    uVar4 = *(ushort *)(param_2 + 0x104);
  }
  bVar7 = bVar6 && uVar4 == 6;
  if (bVar6 && uVar4 == 6) {
    bVar7 = *(char *)(param_1 + 3) == '\0';
  }
  if (bVar7) {
    if ((uint)DAT_0033fea4 <= (uint)fVar9) {
      fVar9 = DAT_0033fea8;
    }
    *(float *)(param_1 + 0x2c) = fVar9;
  }
  return;
}
