// OoT3D decomp @ 0033d694  name=FUN_0033d694  size=808

/* WARNING: Removing unreachable block (ram,0x003530bc) */

void FUN_0033d694(int param_1)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  uint in_fpscr;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined4 unaff_s16;
  float fVar14;
  undefined8 unaff_d9;

  *(undefined1 *)(param_1 + 0x1a4) = 0x12;
  uVar4 = uRam0033d87c;
  uVar3 = uRam0033d878;
  uVar6 = uRam0033d870;
  fVar13 = fRam0033d860;
  fVar14 = fRam0033d85c;
  fVar2 = fRam0033d858;
  fVar12 = *(float *)(param_1 + 0x6c);
  cVar1 = *(char *)(param_1 + 0xe74);
  uVar10 = in_fpscr & 0xfffffff | (uint)(fVar12 == fRam0033d858) << 0x1e;
  if (SUB41(uVar10 >> 0x1e,0)) {
    bVar9 = cVar1 != '\0';
    *(undefined1 *)(param_1 + 0xe74) = 0;
  }
  else if (iRam0033d864 < (int)fVar12) {
    if (iRam0033d86c < (int)fVar12) {
      bVar9 = cVar1 != '\a';
      fVar13 = fVar12 * fRam0033d880;
      *(undefined1 *)(param_1 + 0xe74) = 7;
      FUN_0037547c(uVar6,param_1 + 0x28,4,uVar4,uVar4,uVar3);
    }
    else {
      bVar9 = cVar1 != '\x05';
      fVar13 = fVar12 * fRam0033d874;
      *(undefined1 *)(param_1 + 0xe74) = 5;
      FUN_0037547c(uVar6,param_1 + 0x28,4,uVar4,uVar4,uVar3);
    }
  }
  else {
    bVar9 = cVar1 != '\x04';
    fVar13 = fVar12 * fRam0033d868;
    *(undefined1 *)(param_1 + 0xe74) = 4;
  }
  iVar7 = iRam0033d884;
  iVar8 = iRam0033d884 + 0x28;
  uVar6 = *(undefined4 *)
           (*(int *)(iRam0033d884 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
           (uint)*(byte *)(param_1 + 0xe74) * 4);
  if (bVar9) {
    uVar6 = FUN_0036ae14(param_1 + 0x1c4,uVar6);
    uVar6 = VectorSignedToFloat(uVar6,(byte)(uVar10 >> 0x15) & 3);
    fVar13 = *(float *)(iVar8 + (uint)*(byte *)(param_1 + 0xe74) * 4) * fVar13 * fVar14;
    iVar7 = *(int *)(*(int *)(iVar7 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                    (uint)*(byte *)(param_1 + 0xe74) * 4);
    fVar14 = fRam0033d888;
  }
  else {
    uVar6 = FUN_0036ae14(param_1 + 0x1c4,uVar6);
    uVar6 = VectorSignedToFloat(uVar6,(byte)(uVar10 >> 0x15) & 3);
    fVar13 = *(float *)(iVar8 + (uint)*(byte *)(param_1 + 0xe74) * 4) * fVar13 * fVar14;
    iVar7 = *(int *)(*(int *)(iVar7 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                    (uint)*(byte *)(param_1 + 0xe74) * 4);
    fVar14 = fVar2;
  }
  fVar5 = fRam0035318c;
  fVar12 = fRam00353188;
  iVar8 = param_1 + 0x1c4;
  uVar11 = uVar10 & 0xfffffff | (uint)(fVar14 == fRam00353188) << 0x1e;
  *(undefined1 *)(param_1 + 0x234) = 2;
  if (!SUB41(uVar11 >> 0x1e,0)) {
    bVar9 = false;
    if (*(int *)(param_1 + 500) == iVar7) {
      uVar11 = uVar10 & 0xfffffff | (uint)(*(float *)(param_1 + 0x200) == fVar2) << 0x1e;
      bVar9 = SUB41(uVar11 >> 0x1e,0);
    }
    if (!bVar9) {
      uVar11 = uVar11 & 0xfffffff | (uint)(fVar12 <= fVar14) << 0x1d;
      if (SUB41(uVar11 >> 0x1d,0)) {
        *(undefined1 *)(param_1 + 0x235) = 7;
        func_0x003204a4(fVar2,iVar8,iVar7,*(undefined1 *)(param_1 + 0x238),
                        *(undefined4 *)(param_1 + 0x240),unaff_s16,(int)unaff_d9,
                        (int)((ulonglong)unaff_d9 >> 0x20));
      }
      else {
        func_0x00320d28(iVar8);
        func_0x00358338(iVar8,*(undefined4 *)(param_1 + 0x240),*(undefined4 *)(param_1 + 0x23c));
        fVar14 = -fVar14;
      }
      *(float *)(param_1 + 0x1f8) = fVar5;
      *(float *)(param_1 + 0x1fc) = fVar5 / fVar14;
      goto LAB_0035312c;
    }
  }
  func_0x00320d28(iVar8);
  func_0x003204a4(fVar2,iVar8,iVar7,*(undefined1 *)(param_1 + 0x238),
                  *(undefined4 *)(param_1 + 0x23c));
  *(float *)(param_1 + 0x1f8) = fVar12;
LAB_0035312c:
  *(int *)(param_1 + 500) = iVar7;
  *(float *)(param_1 + 0x208) = fVar2;
  *(undefined4 *)(param_1 + 0x20c) = uVar6;
  uVar6 = func_0x003fe340(iVar8,iVar7);
  fVar14 = (float)VectorSignedToFloat(uVar6,(byte)(uVar11 >> 0x15) & 3);
  *(float *)(param_1 + 0x210) = fVar14 + fVar5;
  if (*(byte *)(param_1 + 0x234) < 4) {
    *(float *)(param_1 + 0x200) = fVar2;
    if (*(byte *)(param_1 + 0x234) < 2) {
      *(float *)(param_1 + 0x20c) = *(float *)(param_1 + 0x210) - fVar5;
    }
  }
  else {
    *(float *)(param_1 + 0x200) = fVar12;
  }
  *(float *)(param_1 + 0x204) = fVar13;
  return;
}
