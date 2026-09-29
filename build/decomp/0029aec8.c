// OoT3D decomp @ 0029aec8  name=FUN_0029aec8  size=560

void FUN_0029aec8(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  short *psVar7;
  bool bVar8;
  bool bVar9;
  uint in_fpscr;

  FUN_0037322c(DAT_0029b16c);
  uVar1 = ((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x1c;
  *(byte *)(param_1 + 0x1a8) = (byte)(*(ushort *)(param_1 + 0x1c) >> 0xc);
  if (6 < uVar1) {
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    return;
  }
  if (uVar1 == 2 || uVar1 == 4) {
    *(undefined1 *)(param_1 + 0x1aa) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x1aa) = 0;
  }
  iVar6 = DAT_0029b170;
  psVar7 = (short *)(DAT_0029b170 + (uint)*(byte *)(param_1 + 0x1aa) * 0x10);
  *(byte *)(param_1 + 0x1a9) = (byte)(((uint)*(ushort *)(param_1 + 0x1c) << 0x14) >> 0x1a);
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0x3f;
  uVar5 = FUN_00372f38(param_1,param_2,param_1 + 0x208,0x37);
  uVar5 = FUN_00372f0c(uVar5,0x22);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x208) + 0xc),uVar5);
  uVar5 = DAT_0029b174;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x208) + 0xc) + 0x10) = 1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x208) + 0xc) + 0xc) = uVar5;
  FUN_0037572c(*(undefined4 *)(psVar7 + 2),param_1);
  FUN_00353dd0(param_2,param_1 + 0x1b0);
  FUN_00353d24(param_2,param_1 + 0x1b0,param_1,iVar6 + -0x38);
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_1 + 0x30);
  uVar5 = VectorSignedToFloat((int)*psVar7,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x1f0) = uVar5;
  iVar3 = DAT_0029b178;
  uVar5 = VectorSignedToFloat((int)psVar7[1],(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 500) = uVar5;
  uVar4 = (ushort)*(byte *)(iVar3 + 0xe);
  bVar8 = uVar4 == 1;
  if (bVar8) {
    uVar4 = *(ushort *)(param_2 + 0x104);
  }
  bVar9 = bVar8 && uVar4 == 6;
  if (bVar8 && uVar4 == 6) {
    bVar9 = *(char *)(param_1 + 3) == '\x1a';
  }
  if (bVar9) {
    FUN_0037572c(*(undefined4 *)(iVar6 + 0x24),param_1);
    *(float *)(param_1 + 0x1f0) = *(float *)(param_1 + 0x1f0) * DAT_0029b17c;
  }
  FUN_0037632c(param_1,param_1 + 0x1b0);
  FUN_00350d20(param_1 + 0xa0,0,DAT_0029b180);
  if (*(char *)(param_1 + 0x1a8) == '\0') {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0029b184;
LAB_0029b0d0:
    iVar6 = FUN_0036cf6c(param_2,(int)*(char *)(param_1 + 3));
    if (iVar6 == 0) goto code_r0x0029b0f4;
  }
  else {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0029b188;
    cVar2 = *(char *)(param_1 + 0x1a8);
    if (cVar2 == '\x04' || cVar2 == '\x05') {
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) - *(float *)(psVar7 + 4);
    }
    if ((cVar2 != '\x01') ||
       (iVar6 = FUN_0036bcb4(param_2,*(undefined1 *)(param_1 + 0x1a9)), iVar6 == 0)) {
      if (*(char *)(param_1 + 0x1a8) != '\0' && *(char *)(param_1 + 0x1a8) != '\x06')
      goto code_r0x0029b0f4;
      goto LAB_0029b0d0;
    }
  }
  FUN_00374428(param_1);
code_r0x0029b0f4:
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
