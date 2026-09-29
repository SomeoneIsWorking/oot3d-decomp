// OoT3D decomp @ 00278380  name=FUN_00278380  size=936

void FUN_00278380(int param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  undefined4 *puVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  short *psVar8;
  short *psVar9;
  uint in_fpscr;

  uVar1 = ((uint)*(ushort *)(param_1 + 0x1c) << 0x15) >> 0x1d;
  FUN_003510b0(param_1,DAT_002786d8);
  fVar2 = DAT_002786e0;
  if (uVar1 == 4) {
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - DAT_002786dc;
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) - fVar2;
    sVar4 = *(short *)(param_1 + 0x34) + 3000;
    *(short *)(param_1 + 0x34) = sVar4;
    *(short *)(param_1 + 0xbc) = sVar4;
    if (((*(uint *)(DAT_002786e4 + 8) & 1) == 0) &&
       (iVar5 = FUN_003679b4(DAT_002786e8), puVar3 = DAT_002786f8, uVar7 = DAT_002786f4,
       uVar6 = DAT_002786f0, iVar5 != 0)) {
      *DAT_002786f8 = DAT_002786ec;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
    }
    FUN_0036df4c(param_1 + 0x54,DAT_002786f8);
  }
  else {
    FUN_0037572c(*(undefined4 *)(DAT_002786fc + uVar1 * 4),param_1);
  }
  uVar6 = FUN_00372f38(param_1,param_2,param_1 + 0x274,2,param_1 + 0x278,1,param_1 + 0x27c,7,0);
  uVar7 = FUN_00372f0c(uVar6,1);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x274) + 0xc),uVar7);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x274) + 0xc) + 0x10) = 1;
  uVar6 = FUN_00372f0c(uVar6,0);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x27c) + 0xc),uVar6);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x27c) + 0xc) + 0x10) = 1;
  if (uVar1 == 2) {
    uVar6 = FUN_00353fd4(param_1,param_2,1);
    FUN_003532e8(param_1,0);
    uVar6 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar6);
    *(undefined4 *)(param_1 + 0x1a4) = uVar6;
  }
  else if (uVar1 == 3) {
    uVar6 = FUN_00353fd4(param_1,param_2,4);
    FUN_003532e8(param_1,0);
    uVar6 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar6);
    *(undefined4 *)(param_1 + 0x1a4) = uVar6;
  }
  uVar1 = ((uint)*(ushort *)(param_1 + 0x1c) << 0x15) >> 0x1d;
  FUN_00353dd0(param_2,param_1 + 0x1c0);
  FUN_00353d24(param_2,param_1 + 0x1c0,param_1,DAT_00278700);
  FUN_0037632c(param_1,param_1 + 0x1c0);
  psVar8 = (short *)(DAT_00278704 + uVar1 * 2);
  psVar9 = (short *)(DAT_00278708 + uVar1 * 2);
  uVar6 = VectorSignedToFloat((int)*psVar8,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x200) = uVar6;
  uVar6 = VectorSignedToFloat((int)*psVar9,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x204) = uVar6;
  if (uVar1 < 2 || uVar1 == 4) {
    FUN_00353dd0(param_2,param_1 + 0x218);
    FUN_00353d24(param_2,param_1 + 0x218,param_1,DAT_0027870c);
    FUN_0037632c(param_1,param_1 + 0x218);
    uVar6 = VectorSignedToFloat((int)*psVar8,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 600) = uVar6;
    uVar6 = VectorSignedToFloat((int)*psVar9,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x25c) = uVar6;
  }
  fVar2 = DAT_00278710;
  if ((int)((uint)*(ushort *)(param_1 + 0x1c) << 0x10) < 0) {
    *(float *)(param_1 + 0x204) = *(float *)(param_1 + 0x204) * DAT_00278710;
    *(float *)(param_1 + 0x25c) = *(float *)(param_1 + 0x25c) * fVar2;
  }
  fVar2 = DAT_00278714;
  if (uVar1 == 4) {
    *(float *)(param_1 + 0x214) = *(float *)(param_1 + 0x214) + DAT_00278714;
    *(float *)(param_1 + 0x26c) = *(float *)(param_1 + 0x26c) + fVar2;
  }
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  if ((-1 < (int)*(short *)(param_1 + 0x1c) << 0x19) &&
     (iVar5 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1c) & 0x3f), iVar5 != 0)) {
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    return;
  }
  *(undefined4 *)(param_1 + 0x1bc) = DAT_00278718;
  *(undefined2 *)(param_1 + 0x270) = 0xff;
  *(undefined1 *)(param_1 + 0x19b) = 2;
  if ((*(short *)(param_2 + 0x104) == 9) &&
     (((uint)*(ushort *)(param_1 + 0x1c) << 0x15) >> 0x1d != 3)) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80000000;
  }
  return;
}
