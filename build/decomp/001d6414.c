// OoT3D decomp @ 001d6414  name=FUN_001d6414  size=744

void FUN_001d6414(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  
  uVar9 = DAT_001d6708;
  uVar5 = DAT_001d6700;
  bVar7 = true;
  uVar2 = *(ushort *)(param_1 + 0x1c);
  uVar1 = *(ushort *)(DAT_001d66fc + 0xfe);
  if ((((((uVar2 & 3) == 0) && ((uVar1 & 1) != 0)) || (((uVar2 & 3) == 1 && ((uVar1 & 2) != 0)))) ||
      (((uVar2 & 3) == 2 && ((uVar1 & 4) != 0)))) || (((~uVar2 & 3) == 0 && ((uVar1 & 8) != 0)))) {
    if (*(short *)(param_2 + 0x104) != 0xc) goto LAB_001d64a0;
  }
  else if (*(short *)(param_2 + 0x104) != 0x39) goto LAB_001d64a0;
  bVar7 = false;
LAB_001d64a0:
  *(uint *)(param_1 + 0xb04) = *(ushort *)(param_1 + 0xc0) & 0x3f;
  *(undefined2 *)(param_1 + 0xc0) = 0;
  FUN_00372d4c(uVar9,uVar5,param_1 + 0xbc,DAT_001d6704);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar4 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_001d670c + iVar4) != 0)
     ) {
    iVar4 = iVar4 + 0x3a5c;
  }
  else {
    iVar4 = 0;
  }
  uVar5 = FUN_00358ef8(iVar4 + 0x10,0);
  *(undefined *)(param_1 + 0x19a) = 1;
  FUN_00372f38(param_1,param_2,param_1 + 0xb44,0,0);
  FUN_00353e78(iVar4 + 0x10,param_2,param_1 + 0x1a4,uVar5,*(undefined4 *)(param_1 + 0x178),2,
               param_1 + 0x228,param_1 + 0x638,0x14);
  if (!bVar7) {
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    return;
  }
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0xa4c,param_1,DAT_001d6710);
  FUN_00350318(param_1 + 0xa0,DAT_001d6718,DAT_001d6714);
  puVar3 = DAT_001d671c;
  uVar5 = FUN_0036ae14(param_1 + 0x1a4,*DAT_001d671c);
  uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_001d6720,uVar9,uVar5,puVar3[3],param_1 + 0x1a4,*puVar3,*(undefined *)(puVar3 + 2)
              );
  FUN_00376340(uVar9,uVar9,uVar9,param_2,param_1,4);
  *(undefined4 *)(param_1 + 0xab4) = DAT_001d6724;
  *(undefined *)(param_1 + 0x1f) = 6;
  *(undefined4 *)(param_1 + 0xab8) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xb30) = *(undefined2 *)(param_1 + 0x34);
  *(undefined2 *)(param_1 + 0xb32) = *(undefined2 *)(param_1 + 0x36);
  *(undefined2 *)(param_1 + 0xb34) = *(undefined2 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0xb38) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xb3c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0xb40) = *(undefined4 *)(param_1 + 0x30);
  iVar4 = param_1 + 0xab8;
  if (*(short *)(param_2 + 0x104) == 0xc) {
    FUN_0034b50c(param_1,1,iVar4);
    *(uint *)(param_1 + 0xb00) = *(uint *)(param_1 + 0xb00) | 6;
    uVar5 = DAT_001d6728;
  }
  else {
    bVar7 = (*(ushort *)(param_1 + 0x1c) & 3) == 1;
    if (!bVar7) {
      bVar7 = (~*(ushort *)(param_1 + 0x1c) & 3) == 0;
    }
    if (bVar7) {
      FUN_0034b50c(param_1,4,iVar4);
      uVar6 = *(uint *)(param_1 + 0xb00) | 2;
    }
    else {
      FUN_0034b50c(param_1,0,iVar4);
      uVar6 = *(uint *)(param_1 + 0xb00) | 6;
    }
    *(uint *)(param_1 + 0xb00) = uVar6;
    fVar10 = *(float *)(param_1 + 0x1ec);
    fVar8 = (float)FUN_003759d0();
    uVar5 = DAT_001d672c;
    uVar9 = VectorSignedToFloat((int)(fVar10 * fVar8),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x1e0) = uVar9;
  }
  *(undefined4 *)(param_1 + 0xa48) = uVar5;
  return;
}

