// OoT3D decomp @ 003d2ae4  name=FUN_003d2ae4  size=452

void FUN_003d2ae4(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  short *psVar5;
  byte *pbVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;

  FUN_00370f5c(param_2,param_1 + 0x484,param_1 + 0x4a8,0x12);
  FUN_00370818(param_1);
  if ((~(int)*(short *)(param_1 + 0x1c) & 0xff00U) != 0) {
    pbVar6 = (byte *)(*(int *)(DAT_003d2ca8 + param_2) +
                     (((int)*(short *)(param_1 + 0x1c) & 0xff00U) >> 5));
    psVar5 = (short *)(*(int *)(pbVar6 + 4) + *(short *)(param_1 + 0x482) * 6);
    fVar8 = (float)VectorSignedToFloat((int)*psVar5,(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = fVar8 - *(float *)(param_1 + 0x28);
    fVar10 = (float)VectorSignedToFloat((int)psVar5[2],(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = fVar10 - *(float *)(param_1 + 0x30);
    fVar9 = (float)FUN_003696ec();
    FUN_00375a18(param_1 + 0x36,(int)(short)(int)(fVar9 * DAT_003d2cac),4,4000,1);
    if ((int)(fVar8 * fVar8 + fVar10 * fVar10) < DAT_003d2cb0) {
      sVar4 = *(short *)(param_1 + 0x482) + 1;
      *(short *)(param_1 + 0x482) = sVar4;
      if ((short)(ushort)*pbVar6 <= sVar4) {
        *(undefined2 *)(param_1 + 0x482) = 0;
      }
      uVar3 = DAT_003d2cc0;
      iVar2 = DAT_003d2cbc;
      if (*(short *)(param_1 + 0x482) == 0) {
        if ((*(uint *)(DAT_003d2cb4 + 0xbc) & *(uint *)(DAT_003d2cb8 + 0x48)) != 0) {
          uVar1 = *(ushort *)(DAT_003d2cbc + 0xee);
          bVar7 = (uVar1 & 0x1000) == 0;
          if (bVar7) {
            uVar1 = *(ushort *)(param_2 + 0x104);
          }
          if (bVar7 && uVar1 == 0x55) {
            FUN_003725e0(param_2);
            *(ushort *)(iVar2 + 0xee) = *(ushort *)(iVar2 + 0xee) | 0x1000;
            FUN_00374428(param_1);
            return;
          }
        }
        *(undefined1 *)(param_1 + 0x47b) = 0xb;
        *(undefined1 *)(param_1 + 0x47a) = 0;
        *(undefined4 *)(param_1 + 0x1e4) = uVar3;
        *(undefined4 *)(param_1 + 0x6c) = uVar3;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x2c);
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x30);
        *(undefined4 *)(param_1 + 0x3f4) = DAT_003d2cc4;
        return;
      }
    }
  }
  *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0x34);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_1 + 0x38);
  return;
}
