// OoT3D decomp @ 002535f0  name=FUN_002535f0  size=332

/* WARNING: Removing unreachable block (ram,0x003530bc) */

void FUN_002535f0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 uVar8;
  bool bVar9;
  uint in_fpscr;
  uint uVar10;
  float fVar11;
  undefined8 unaff_d8;
  
  fVar1 = fRam0025373c;
  *(float *)(param_1 + 0x6c) = fRam0025373c;
  uVar6 = uRam00253748;
  uVar2 = uRam00253744;
  if ((iRam00253740 < *(int *)(param_1 + 0xe78)) && ((*(uint *)(param_1 + 0xe54) & 0x800) == 0)) {
    *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 0x800;
    FUN_0037547c(uRam0025374c,param_1 + 0x28,4,uVar6,uVar6,uVar2);
  }
  iVar5 = FUN_003731e0(param_1 + 0x1c4);
  if (iVar5 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0xe74) = 0;
  uVar2 = uRam00253754;
  iVar5 = iRam00253750;
  if ((*(ushort *)(param_1 + 0x1010) & 4) == 0) {
    *(ushort *)(param_1 + 0x1010) = *(ushort *)(param_1 + 0x1010) | 4;
    uVar6 = FUN_0036ae14(param_1 + 0x1c4,
                         **(undefined4 **)(iVar5 + (uint)*(byte *)(param_1 + 0x1b0) * 4));
    uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    uVar8 = 2;
    iVar5 = *(int *)(*(int *)(iVar5 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                    (uint)*(byte *)(param_1 + 0xe74) * 4);
    fVar11 = fRam00253758;
  }
  else {
    uVar6 = FUN_0036ae14(param_1 + 0x1c4,
                         **(undefined4 **)(iRam00253750 + (uint)*(byte *)(param_1 + 0x1b0) * 4));
    uVar8 = 0;
    uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    iVar5 = *(int *)(*(int *)(iVar5 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                    (uint)*(byte *)(param_1 + 0xe74) * 4);
    fVar11 = fVar1;
  }
  fVar4 = fRam0035318c;
  fVar3 = fRam00353188;
  iVar7 = param_1 + 0x1c4;
  uVar10 = in_fpscr & 0xfffffff | (uint)(fVar11 == fRam00353188) << 0x1e;
  *(undefined1 *)(param_1 + 0x234) = uVar8;
  if (!SUB41(uVar10 >> 0x1e,0)) {
    bVar9 = false;
    if (*(int *)(param_1 + 500) == iVar5) {
      uVar10 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x200) == fVar1) << 0x1e;
      bVar9 = SUB41(uVar10 >> 0x1e,0);
    }
    if (!bVar9) {
      uVar10 = uVar10 & 0xfffffff | (uint)(fVar3 <= fVar11) << 0x1d;
      if (SUB41(uVar10 >> 0x1d,0)) {
        *(undefined1 *)(param_1 + 0x235) = 7;
        FUN_003204a4(fVar1,iVar7,iVar5,*(undefined1 *)(param_1 + 0x238),
                     *(undefined4 *)(param_1 + 0x240),unaff_d8);
      }
      else {
        FUN_00320d28(iVar7);
        FUN_00358338(iVar7,*(undefined4 *)(param_1 + 0x240),*(undefined4 *)(param_1 + 0x23c));
        fVar11 = -fVar11;
      }
      *(float *)(param_1 + 0x1f8) = fVar4;
      *(float *)(param_1 + 0x1fc) = fVar4 / fVar11;
      goto LAB_0035312c;
    }
  }
  FUN_00320d28(iVar7);
  FUN_003204a4(fVar1,iVar7,iVar5,*(undefined1 *)(param_1 + 0x238),*(undefined4 *)(param_1 + 0x23c));
  *(float *)(param_1 + 0x1f8) = fVar3;
LAB_0035312c:
  *(int *)(param_1 + 500) = iVar5;
  *(float *)(param_1 + 0x208) = fVar1;
  *(undefined4 *)(param_1 + 0x20c) = uVar6;
  uVar6 = FUN_003fe340(iVar7,iVar5);
  fVar11 = (float)VectorSignedToFloat(uVar6,(byte)(uVar10 >> 0x15) & 3);
  *(float *)(param_1 + 0x210) = fVar11 + fVar4;
  if (*(byte *)(param_1 + 0x234) < 4) {
    *(float *)(param_1 + 0x200) = fVar1;
    if (*(byte *)(param_1 + 0x234) < 2) {
      *(float *)(param_1 + 0x20c) = *(float *)(param_1 + 0x210) - fVar4;
    }
  }
  else {
    *(float *)(param_1 + 0x200) = fVar3;
  }
  *(undefined4 *)(param_1 + 0x204) = uVar2;
  return;
}

