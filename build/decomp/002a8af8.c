// OoT3D decomp @ 002a8af8  name=FUN_002a8af8  size=188

/* WARNING: Removing unreachable block (ram,0x003530bc) */

void FUN_002a8af8(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  bool bVar8;
  uint in_fpscr;
  uint uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  fVar1 = fRam002a8bbc;
  uVar10 = VectorSignedToFloat(*(undefined4 *)(param_3 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x28) = uVar10;
  uVar10 = VectorSignedToFloat(*(undefined4 *)(param_3 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x2c) = uVar10;
  uVar10 = VectorSignedToFloat(*(undefined4 *)(param_3 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x30) = uVar10;
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x30);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_3 + 8);
  *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0x34);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_1 + 0x38);
  iVar5 = iRam002a8bb4;
  if (*(int *)(param_3 + 0x28) == 0x42200000) {
    uVar6 = 0;
  }
  else {
    uVar6 = 7;
  }
  *(undefined1 *)(param_1 + 0xe74) = uVar6;
  *(undefined1 *)(iVar5 + param_1) = 4;
  fVar4 = fRam0037427c;
  fVar11 = *(float *)(param_1 + 0x6c);
  iVar5 = param_1 + 0x1c4;
  iVar7 = *(int *)(*(int *)(iRam002a8bb8 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                  (uint)*(byte *)(param_1 + 0xe74) * 4);
  uVar10 = FUN_0036ae18();
  fVar3 = fRam0035318c;
  fVar2 = fRam00353188;
  uVar10 = VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
  uVar9 = in_fpscr & 0xfffffff | (uint)(fVar4 == fRam00353188) << 0x1e;
  *(undefined1 *)(param_1 + 0x234) = 2;
  if (!SUB41(uVar9 >> 0x1e,0)) {
    bVar8 = false;
    if (*(int *)(param_1 + 500) == iVar7) {
      uVar9 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x200) == fVar4) << 0x1e;
      bVar8 = SUB41(uVar9 >> 0x1e,0);
    }
    if (!bVar8) {
      uVar9 = uVar9 & 0xfffffff | (uint)(fVar2 <= fVar4) << 0x1d;
      if (SUB41(uVar9 >> 0x1d,0)) {
        *(undefined1 *)(param_1 + 0x235) = 7;
        FUN_003204a4(fVar4,iVar5,iVar7,*(undefined1 *)(param_1 + 0x238),
                     *(undefined4 *)(param_1 + 0x240),unaff_d8,unaff_d9);
        fVar12 = fVar4;
      }
      else {
        FUN_00320d28(iVar5);
        FUN_00358338(iVar5,*(undefined4 *)(param_1 + 0x240),*(undefined4 *)(param_1 + 0x23c));
        fVar12 = -fVar4;
      }
      *(float *)(param_1 + 0x1f8) = fVar3;
      *(float *)(param_1 + 0x1fc) = fVar3 / fVar12;
      goto LAB_0035312c;
    }
  }
  FUN_00320d28(iVar5);
  FUN_003204a4(fVar4,iVar5,iVar7,*(undefined1 *)(param_1 + 0x238),*(undefined4 *)(param_1 + 0x23c));
  *(float *)(param_1 + 0x1f8) = fVar2;
LAB_0035312c:
  *(int *)(param_1 + 500) = iVar7;
  *(float *)(param_1 + 0x208) = fVar4;
  *(undefined4 *)(param_1 + 0x20c) = uVar10;
  uVar10 = FUN_003fe340(iVar5,iVar7);
  fVar12 = (float)VectorSignedToFloat(uVar10,(byte)(uVar9 >> 0x15) & 3);
  *(float *)(param_1 + 0x210) = fVar12 + fVar3;
  if (*(byte *)(param_1 + 0x234) < 4) {
    *(float *)(param_1 + 0x200) = fVar4;
    if (*(byte *)(param_1 + 0x234) < 2) {
      *(float *)(param_1 + 0x20c) = *(float *)(param_1 + 0x210) - fVar3;
    }
  }
  else {
    *(float *)(param_1 + 0x200) = fVar2;
  }
  *(float *)(param_1 + 0x204) = fVar11 * fVar1;
  return;
}

