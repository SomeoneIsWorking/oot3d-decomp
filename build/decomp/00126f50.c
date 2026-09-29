// OoT3D decomp @ 00126f50  name=FUN_00126f50  size=708

void FUN_00126f50(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  int *piVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  uint in_fpscr;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;

  FUN_00370734(param_1 + 0x26c);
  uVar2 = DAT_00127218;
  fVar10 = DAT_00127214;
  uVar8 = VectorUnsignedToFloat((uint)*(byte *)(param_2 + 0xa82),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00373500(uVar8,param_1 + 0x240);
  uVar8 = VectorUnsignedToFloat((uint)*(byte *)(param_2 + 0xa82),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00373500(uVar8,param_1 + 0x244);
  uVar8 = VectorUnsignedToFloat((uint)*(byte *)(param_2 + 0xa82),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00373500(uVar8,param_1 + 0x248);
  fVar3 = DAT_00127220;
  FUN_00373500(DAT_00127220,param_1 + 0x24c);
  FUN_00373500(DAT_00127228,param_1 + 0x5c);
  uVar8 = DAT_00127234;
  fVar5 = DAT_00127230;
  piVar4 = DAT_0012722c;
  if (*(short *)(param_1 + 0x22c) == 0) {
    FUN_00373500(uVar2,uVar2,DAT_00127234,param_1 + 0x1f8);
  }
  else {
    FUN_0036fc20(uVar2,DAT_00127234,param_1 + 0x1f8);
    fVar11 = DAT_00127240;
    iVar7 = DAT_0012723c;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                      );
    if ((int)(DAT_00127238 / fVar9 + fVar5) == (int)*(short *)(param_1 + 0x22c)) {
      *(short *)(param_1 + 0x21c) = *(short *)(param_1 + 0x21a);
      fVar9 = DAT_00127244;
      pfVar6 = (float *)(iVar7 + *(short *)(param_1 + 0x21a) * 0x10);
      *(float *)(param_1 + 0x1e4) = fVar10 + *pfVar6 * fVar11;
      *(float *)(param_1 + 0x1e8) = pfVar6[1];
      *(float *)(param_1 + 0x1ec) = pfVar6[2] * fVar11 - fVar9;
    }
  }
  FUN_00373500(*(undefined4 *)(param_1 + 0x1e4),uVar2,
               *(float *)(param_1 + 0x1f0) * *(float *)(param_1 + 0x1f8),param_1 + 0x28);
  FUN_00373500(DAT_00127248,uVar8,uVar2,param_1 + 0x2c);
  FUN_00373500(*(undefined4 *)(param_1 + 0x1ec),uVar2,
               *(float *)(param_1 + 500) * *(float *)(param_1 + 0x1f8),param_1 + 0x30);
  fVar11 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x1e4);
  fVar10 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x1ec);
  fVar10 = SQRT(fVar11 * fVar11 + fVar10 * fVar10);
  if (((int)fVar10 < DAT_0012724c) && (*(short *)(param_1 + 0x220) == 0)) {
    *(undefined2 *)(param_1 + 0x220) = 1;
    FUN_0036aa20(*(float *)(param_1 + 0x1e4),*(float *)(param_1 + 0x2c) + DAT_00127250,
                 param_2 + 0x208c,param_1,param_2,0x6d,0,
                 (int)(short)(*(short *)(param_1 + 0xbe) + -0x8000),0,
                 (ushort)(*(short *)(param_1 + 0x236) != 0) << 8 | 0x28);
  }
  uVar2 = DAT_0012725c;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar10 == fVar3) << 0x1e;
  if (SUB41(uVar1 >> 0x1e,0)) {
    iVar7 = *(int *)(param_1 + 0x124);
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),(byte)(uVar1 >> 0x15) & 3);
    *(short *)(param_1 + 0x22c) = (short)(int)(DAT_00127254 / fVar10 + fVar5);
    *(undefined4 *)(param_1 + 0x254) = DAT_00127258;
    FUN_00362a4c(param_1 + 0x26c,uVar2);
    if (*(byte *)(iVar7 + 0xb7) < 0x19) {
      *(undefined1 *)(iVar7 + 0x271) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x1a4) = 5;
    }
    *(undefined2 *)(param_1 + 0x21e) = 0x8000;
  }
  return;
}
