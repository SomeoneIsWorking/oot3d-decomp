// OoT3D decomp @ 0033d88c  name=FUN_0033d88c  size=816

/* WARNING: Removing unreachable block (ram,0x003530bc) */

void FUN_0033d88c(int param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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

  *(undefined1 *)(param_1 + 0x1a4) = 4;
  fVar14 = fRam0033da5c;
  fVar2 = fRam0033da58;
  *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xffffefff;
  uVar5 = uRam0033da7c;
  uVar4 = uRam0033da78;
  uVar6 = uRam0033da70;
  fVar3 = fRam0033da68;
  fVar13 = fRam0033da60;
  fVar12 = *(float *)(param_1 + 0x6c);
  cVar1 = *(char *)(param_1 + 0xe74);
  uVar10 = in_fpscr & 0xfffffff | (uint)(fVar12 == fVar2) << 0x1e;
  if (SUB41(uVar10 >> 0x1e,0)) {
    bVar9 = cVar1 != '\0';
    *(undefined1 *)(param_1 + 0xe74) = 0;
  }
  else if (iRam0033da64 < (int)fVar12) {
    if (iRam0033da6c < (int)fVar12) {
      bVar9 = cVar1 != '\a';
      fVar13 = fVar12 * fRam0033da80;
      *(undefined1 *)(param_1 + 0xe74) = 7;
      FUN_0037547c(uVar6,param_1 + 0x28,4,uVar5,uVar5,uVar4);
    }
    else {
      bVar9 = cVar1 != '\x05';
      fVar13 = fVar12 * fRam0033da74;
      *(undefined1 *)(param_1 + 0xe74) = 5;
      FUN_0037547c(uVar6,param_1 + 0x28,4,uVar5,uVar5,uVar4);
    }
  }
  else {
    bVar9 = cVar1 != '\x04';
    *(undefined1 *)(param_1 + 0xe74) = 4;
    fVar13 = fVar12 * fVar3;
  }
  iVar7 = iRam0033da84;
  iVar8 = iRam0033da84 + 0x28;
  uVar6 = *(undefined4 *)
           (*(int *)(iRam0033da84 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
           (uint)*(byte *)(param_1 + 0xe74) * 4);
  if (bVar9) {
    uVar6 = FUN_0036ae14(param_1 + 0x1c4,uVar6);
    uVar6 = VectorSignedToFloat(uVar6,(byte)(uVar10 >> 0x15) & 3);
    fVar13 = *(float *)(iVar8 + (uint)*(byte *)(param_1 + 0xe74) * 4) * fVar13 * fVar14;
    iVar7 = *(int *)(*(int *)(iVar7 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                    (uint)*(byte *)(param_1 + 0xe74) * 4);
    fVar14 = fRam0033da88;
  }
  else {
    uVar6 = FUN_0036ae14(param_1 + 0x1c4,uVar6);
    uVar6 = VectorSignedToFloat(uVar6,(byte)(uVar10 >> 0x15) & 3);
    fVar13 = *(float *)(iVar8 + (uint)*(byte *)(param_1 + 0xe74) * 4) * fVar13 * fVar14;
    iVar7 = *(int *)(*(int *)(iVar7 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                    (uint)*(byte *)(param_1 + 0xe74) * 4);
    fVar14 = fVar2;
  }
  fVar12 = fRam0035318c;
  fVar3 = fRam00353188;
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
      uVar11 = uVar11 & 0xfffffff | (uint)(fVar3 <= fVar14) << 0x1d;
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
      *(float *)(param_1 + 0x1f8) = fVar12;
      *(float *)(param_1 + 0x1fc) = fVar12 / fVar14;
      goto LAB_0035312c;
    }
  }
  func_0x00320d28(iVar8);
  func_0x003204a4(fVar2,iVar8,iVar7,*(undefined1 *)(param_1 + 0x238),
                  *(undefined4 *)(param_1 + 0x23c));
  *(float *)(param_1 + 0x1f8) = fVar3;
LAB_0035312c:
  *(int *)(param_1 + 500) = iVar7;
  *(float *)(param_1 + 0x208) = fVar2;
  *(undefined4 *)(param_1 + 0x20c) = uVar6;
  uVar6 = func_0x003fe340(iVar8,iVar7);
  fVar14 = (float)VectorSignedToFloat(uVar6,(byte)(uVar11 >> 0x15) & 3);
  *(float *)(param_1 + 0x210) = fVar14 + fVar12;
  if (*(byte *)(param_1 + 0x234) < 4) {
    *(float *)(param_1 + 0x200) = fVar2;
    if (*(byte *)(param_1 + 0x234) < 2) {
      *(float *)(param_1 + 0x20c) = *(float *)(param_1 + 0x210) - fVar12;
    }
  }
  else {
    *(float *)(param_1 + 0x200) = fVar3;
  }
  *(float *)(param_1 + 0x204) = fVar13;
  return;
}
