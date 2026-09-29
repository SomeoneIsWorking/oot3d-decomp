// OoT3D decomp @ 00390344  name=FUN_00390344  size=604

void FUN_00390344(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  int extraout_r1;
  uint uVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;

  fVar14 = DAT_003905a8;
  uVar1 = DAT_003905a4;
  uVar10 = *(uint *)(DAT_003905a0 + param_2);
  FUN_0036e168(DAT_003905a4,DAT_003905ac,DAT_003905a8,DAT_003905a4,param_1 + 0x6c);
  fVar4 = DAT_003905b8;
  fVar3 = DAT_003905b4;
  fVar2 = DAT_003905b0;
  sVar7 = *(short *)(param_1 + 0x446) + 0xa7;
  *(short *)(param_1 + 0x446) = sVar7;
  fVar12 = (float)VectorSignedToFloat((int)sVar7,(byte)(in_fpscr >> 0x15) & 3);
  if (sVar7 < 1) {
    fVar12 = fVar12 * fVar2 * fVar3 - fVar14;
  }
  else {
    fVar12 = fVar14 + fVar12 * fVar2 * fVar3;
  }
  fVar12 = (float)VectorSignedToFloat((int)fVar12,(byte)(in_fpscr >> 0x15) & 3);
  fVar13 = (float)FUN_003406a8(fVar12 * fVar4);
  fVar5 = DAT_003905c0;
  fVar12 = DAT_003905bc;
  *(float *)(param_1 + 0x54) = DAT_003905c0 - fVar13 * DAT_003905bc;
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x446),(byte)(in_fpscr >> 0x15) & 3)
  ;
  if (*(short *)(param_1 + 0x446) < 1) {
    fVar13 = fVar13 * fVar2 * fVar3 - fVar14;
  }
  else {
    fVar13 = fVar14 + fVar13 * fVar2 * fVar3;
  }
  fVar13 = (float)VectorSignedToFloat((int)fVar13,(byte)(in_fpscr >> 0x15) & 3);
  fVar13 = (float)FUN_003406a8(fVar13 * fVar4);
  *(float *)(param_1 + 0x58) = fVar5 + fVar13 * DAT_003905c4;
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x446),(byte)(in_fpscr >> 0x15) & 3)
  ;
  if (*(short *)(param_1 + 0x446) < 1) {
    fVar14 = fVar13 * fVar2 * fVar3 - fVar14;
  }
  else {
    fVar14 = fVar14 + fVar13 * fVar2 * fVar3;
  }
  fVar14 = (float)VectorSignedToFloat((int)fVar14,(byte)(in_fpscr >> 0x15) & 3);
  fVar14 = (float)FUN_003406a8(fVar14 * fVar4);
  *(float *)(param_1 + 0x5c) = fVar5 - fVar14 * fVar12;
  uVar6 = DAT_003905c8;
  if (((*(byte *)(param_1 + 0x4c8) & 2) != 0) && (*(int *)(param_1 + 0x568) == 0)) {
    *(undefined4 *)(param_1 + 0x568) = 0xf;
    *(byte *)(param_1 + 0x4c8) = *(byte *)(param_1 + 0x4c8) & 0xfd;
    *(undefined4 *)(param_1 + 0x6c) = uVar6;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
    uVar8 = *(uint *)(param_1 + 0x4bc);
    bVar11 = uVar8 != uVar10;
    if (!bVar11) {
      uVar8 = (uint)*(byte *)(param_1 + 0x4c8);
    }
    if (bVar11 || (uVar8 & 4) != 0) {
      *(undefined2 *)(param_1 + 0x448) = 200;
      FUN_00350348(param_1);
    }
    else {
      FUN_00375bcc(uVar10,DAT_003905cc);
    }
  }
  FUN_003731e0(param_1 + 0x1a4);
  uVar10 = *(ushort *)(param_1 + 0x90) & 3;
  bVar11 = (*(ushort *)(param_1 + 0x90) & 3) != 0;
  iVar9 = extraout_r1;
  if (bVar11) {
    uVar10 = (uint)*(short *)(param_1 + 0x446);
    iVar9 = DAT_003905d0;
  }
  if (bVar11 && iVar9 < (int)uVar10) {
    iVar9 = FUN_0035ea34(param_2 + 0xa98,*(undefined4 *)(param_1 + 0x7c),
                         *(undefined1 *)(param_1 + 0x81));
    if ((iVar9 == 2 || iVar9 == 3) || iVar9 == 9) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      return;
    }
    FUN_0036f00c(DAT_003905d8,DAT_003905d4,param_2,param_1,param_1 + 0x28,0xb);
    uVar6 = DAT_003905e0;
    *(short *)(param_1 + 0x446) = (short)DAT_003905dc;
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfeffffff;
    FUN_00375bcc(param_1,uVar6);
    *(undefined4 *)(param_1 + 0x44c) = DAT_003905e4;
  }
  return;
}
