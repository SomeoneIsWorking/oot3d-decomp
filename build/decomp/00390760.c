// OoT3D decomp @ 00390760  name=FUN_00390760  size=424

void FUN_00390760(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  uint in_fpscr;
  uint uVar7;
  int iVar8;
  float fVar9;
  undefined4 uVar10;

  uVar10 = DAT_00390988;
  uVar5 = DAT_00390984;
  fVar3 = DAT_00390980;
  uVar2 = DAT_0039097c;
  iVar1 = DAT_00390978;
  if (*(short *)(*DAT_00390974 + 0x5be) != 0) {
    *(undefined2 *)(*DAT_00390974 + 0x5be) = 0;
    FUN_0037547c(DAT_0039098c,param_1 + 0x28,4,uVar10,uVar10,uVar5);
    *(undefined4 *)(param_1 + 0xdcc) = 0;
    *(undefined1 *)(param_1 + 0x1a4) = 4;
    uVar5 = DAT_00390990;
    *(undefined1 *)(param_1 + 0x1a5) = 2;
    *(undefined4 *)(param_1 + 0x6c) = uVar5;
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    uVar5 = FUN_0036ae14(param_1 + 0x1b8,*(undefined4 *)(iVar1 + 8));
    uVar10 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    uVar5 = FUN_00348854(param_1);
    FUN_00375c08(uVar5,fVar3,uVar10,uVar2,param_1 + 0x1b8,
                 *(undefined4 *)(iVar1 + (uint)*(byte *)(param_1 + 0x1a5) * 4),2);
    return;
  }
  *(float *)(param_1 + 0x6c) = DAT_00390980;
  sVar4 = FUN_0036e800(param_1,*(undefined4 *)(param_2 + 0x20ac));
  iVar6 = (int)(short)(sVar4 - *(short *)(param_1 + 0x36));
  iVar8 = FUN_00338f60(iVar6);
  if ((iVar8 < DAT_00390994) && (*(char *)(param_1 + 0x1a5) == '\x02')) {
    FUN_003326f0(param_1,*(int *)(param_2 + 0x20ac) + 0x28,200);
  }
  iVar8 = FUN_003731e0(param_1 + 0x1b8);
  if (iVar8 != 0) {
    fVar9 = (float)FUN_00338f60(iVar6);
    uVar7 = in_fpscr & 0xfffffff | (uint)(fVar3 <= fVar9) << 0x1d;
    if (!SUB41(uVar7 >> 0x1d,0)) {
      *(undefined1 *)(param_1 + 0x1a5) = 2;
      uVar5 = FUN_0036ae14(param_1 + 0x1b8,*(undefined4 *)(iVar1 + 8));
      uVar5 = VectorSignedToFloat(uVar5,(byte)(uVar7 >> 0x15) & 3);
      FUN_00375c08(*(undefined4 *)(DAT_00390998 + (uint)*(byte *)(param_1 + 0x1a5) * 4),fVar3,uVar5,
                   uVar2,param_1 + 0x1b8,
                   *(undefined4 *)(iVar1 + (uint)*(byte *)(param_1 + 0x1a5) * 4),2);
      return;
    }
    *(undefined1 *)(param_1 + 0x1a4) = 5;
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  return;
}
