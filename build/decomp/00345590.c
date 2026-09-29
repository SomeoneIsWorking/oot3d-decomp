// OoT3D decomp @ 00345590  name=FUN_00345590  size=1036

void FUN_00345590(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;

  uVar2 = DAT_00345980;
  if (*(short *)(param_1 + 0x77a) == 0) {
    iVar5 = FUN_0036e5e0(DAT_00345984,param_1 + 0x1a4);
    if (iVar5 != 0) {
      FUN_003490e0(param_1 + 0x1a4,DAT_00345988);
      *(undefined2 *)(param_1 + 0x77a) = 1;
    }
  }
  else if ((*(short *)(param_1 + 0x78c) != 2) &&
          (iVar5 = (int)*(float *)(param_1 + 0x1e0), iVar5 == 1 || iVar5 == 0x1f)) {
    if (iVar5 == 1) {
      FUN_0036f00c(DAT_00345990,DAT_0034598c,param_2,param_1,param_1 + 0x9e0,10,500,10,0);
    }
    else {
      FUN_0036f00c(DAT_00345990,DAT_0034598c,param_2,param_1,param_1 + 0x9d4,10,500,10,0);
    }
    if (*(short *)(param_1 + 0x78c) == 0) {
      FUN_00375bcc(param_1,DAT_00345994);
    }
    else {
      FUN_0037547c(DAT_00345994,0,4,DAT_0034599c,DAT_0034599c,DAT_00345998);
    }
    if (*(short *)(param_1 + 0x784) == 0) {
      FUN_0036fca8(param_1,param_2,4,10);
    }
    else {
      *(undefined2 *)(param_1 + 0x786) = 10;
    }
  }
  FUN_00370734(param_1 + 0x1a4);
  uVar3 = DAT_003459b0;
  pfVar7 = (float *)(DAT_003459a0 + *(short *)(param_1 + 0x770) * 0xc);
  *(undefined4 *)(param_1 + 0x7bc) = DAT_003459a4;
  FUN_0036e168(DAT_003459ac,uVar2,DAT_003459a8,uVar3,param_1 + 0x7b4);
  uVar4 = DAT_003459b4;
  FUN_0036e168(*pfVar7,DAT_003459b4,*(undefined4 *)(param_1 + 0x7b4),uVar3,param_1 + 0x28);
  FUN_0036e168(pfVar7[2],uVar4,*(undefined4 *)(param_1 + 0x7b4),uVar3,param_1 + 0x30);
  fVar10 = *pfVar7 - *(float *)(param_1 + 0x28);
  fVar11 = pfVar7[2] - *(float *)(param_1 + 0x30);
  FUN_0036e168(DAT_003459bc,uVar2,*(float *)(param_1 + 0x7bc) * DAT_003459b8,uVar3,param_1 + 0x7b8);
  fVar9 = (float)FUN_003696ec(fVar10,fVar11);
  FUN_00375a18(param_1 + 0x36,(int)(short)(int)(fVar9 * DAT_003459c0),5,
               (int)(short)(int)(*(float *)(param_1 + 0x7b8) * *(float *)(param_1 + 0x7bc)),5);
  FUN_00375a18(param_1 + 0x794,0,2,2000,0);
  fVar10 = ABS(fVar10);
  iVar5 = (int)fVar10 - (int)DAT_003459c4;
  if ((int)fVar10 <= (int)DAT_003459c4) {
    fVar10 = ABS(fVar11);
    iVar5 = (int)fVar10 - (int)DAT_003459c4;
  }
  if (fVar10 == DAT_003459c4 || iVar5 < 0 != SBORROW4((int)fVar10,(int)DAT_003459c4)) {
    *(undefined4 *)(param_1 + 0x7b8) = uVar3;
    *(undefined4 *)(param_1 + 0x7b4) = uVar3;
    if (*(short *)(param_1 + 0x772) == 0) {
      sVar1 = *(short *)(param_1 + 0x770) + 1;
      *(short *)(param_1 + 0x770) = sVar1;
      if (3 < sVar1) {
        *(undefined2 *)(param_1 + 0x770) = 0;
      }
    }
    else {
      sVar1 = *(short *)(param_1 + 0x770) + -1;
      *(short *)(param_1 + 0x770) = sVar1;
      if (sVar1 < 0) {
        *(undefined2 *)(param_1 + 0x770) = 3;
      }
    }
  }
  iVar5 = DAT_003459d0;
  uVar4 = DAT_003459cc;
  sVar1 = *(short *)(param_1 + 0x7aa);
  bVar8 = sVar1 == 0;
  if (bVar8) {
    sVar1 = *(short *)(param_1 + 0x78c);
  }
  if (bVar8 && sVar1 == 0) {
    if ((*(int *)(param_1 + 0x98) < DAT_003459c8) && (*(short *)(param_1 + 0x774) != 0)) {
      if (*(short *)(param_1 + 0x78a) != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x6c) = uVar3;
      uVar6 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(iVar5 + 0x10));
      uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00353020(uVar2,uVar3,uVar6,uVar4,param_1 + 0x1a4,DAT_003459d4,2);
      *(undefined4 *)(param_1 + 0x760) = DAT_003459d8;
      *(undefined2 *)(param_1 + 0x7aa) = 0x96;
      *(undefined2 *)(param_1 + 0x77c) = 0;
      *(undefined1 *)(param_1 + 0x7b2) = 1;
      FUN_0036aa20(*(undefined4 *)(param_1 + 0x9bc),*(float *)(param_1 + 0x9c0) - DAT_003459dc,
                   *(undefined4 *)(param_1 + 0x9c4),param_2 + 0x208c,param_1,param_2,0x30,0,
                   (int)*(short *)(param_1 + 0xbe),0,0xffffffff);
    }
    sVar1 = *(short *)(param_1 + 0x78a);
    bVar8 = sVar1 == 0;
    if (bVar8) {
      sVar1 = *(short *)(param_1 + 0x788);
    }
    if (bVar8 && sVar1 == 0) {
      FUN_00353020(uVar2,uVar3,DAT_003459e0,uVar4,param_1 + 0x1a4,DAT_003459e4,2);
      *(undefined4 *)(param_1 + 0x760) = DAT_003459e8;
      *(undefined2 *)(param_1 + 0x778) = 0;
      *(undefined2 *)(param_1 + 0x7aa) = 0x29;
    }
  }
  return;
}
