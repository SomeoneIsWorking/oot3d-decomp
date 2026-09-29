// OoT3D decomp @ 003cad78  name=FUN_003cad78  size=560

void FUN_003cad78(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;

  iVar5 = FUN_00375a18(param_1 + 0xbc,0xffff8ad0,6,2000,100);
  uVar2 = DAT_003cafe4;
  uVar1 = DAT_003cafac;
  if (iVar5 == 0) {
    if ((*(ushort *)(param_1 + 0x1c) & 0xff) == 4) {
      *(undefined2 *)(param_1 + 0x34) = 0x8ad0;
      *(undefined2 *)(param_1 + 0xbc) = 0x8ad0;
      *(short *)(param_1 + 0x36) = (short)uVar2;
      *(short *)(param_1 + 0xbe) = (short)uVar2;
      uVar1 = DAT_003cafe8;
      *(undefined2 *)(param_1 + 0x38) = 0;
      *(undefined2 *)(param_1 + 0xc0) = 0;
      *(undefined4 *)(param_1 + 0x28) = uVar1;
      *(undefined4 *)(param_1 + 0x2c) = DAT_003cafec;
      *(undefined4 *)(param_1 + 0x30) = DAT_003caff0;
    }
    uVar4 = (ushort)*(byte *)(DAT_003caff4 + 0xe);
    bVar6 = uVar4 == 0;
    if (bVar6) {
      uVar4 = *(ushort *)(param_2 + 0x104);
    }
    bVar7 = bVar6 && uVar4 == 0xd;
    if (bVar6 && uVar4 == 0xd) {
      bVar7 = *(char *)(param_1 + 3) == '\x0e';
    }
    if (bVar7) {
      *(undefined4 *)(param_1 + 0x2c) = DAT_003caff8;
    }
    uVar1 = DAT_003caffc;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffcf;
    *(undefined4 *)(param_1 + 0x1cc) = uVar1;
  }
  else {
    FUN_003705a0(DAT_003cafac,DAT_003cafa8,param_1 + 0x6c);
    FUN_003705a0(uVar1,DAT_003cafb0,param_1 + 100);
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x10);
    FUN_00376864(param_1);
    uVar2 = DAT_003cafb4;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x30);
    uVar3 = DAT_003cafb8;
    if ((*(ushort *)(param_1 + 0x1c) & 0xff) == 0) {
      fVar8 = (float)FUN_003738a8(uVar2);
      fVar8 = fVar8 + DAT_003cafd8;
      fVar9 = (float)FUN_003738a8(uVar2);
      FUN_0036c684(fVar9 + DAT_003cafdc,DAT_003cafe0,fVar8,uVar1,uVar1,uVar1,param_2,3);
      return;
    }
    if ((*(ushort *)(param_1 + 0x1c) & 0xff) == 4) {
      fVar8 = (float)FUN_003738a8();
      fVar8 = fVar8 + DAT_003cafbc;
      fVar9 = (float)FUN_00371e50(uVar2);
      fVar9 = fVar9 + DAT_003cafc0;
      fVar10 = (float)FUN_003738a8(uVar3);
      FUN_0036c684(fVar10 + DAT_003cafc4,fVar9,fVar8,uVar1,uVar1,uVar1,param_2,0);
      fVar8 = (float)FUN_003738a8(uVar3);
      fVar8 = fVar8 + DAT_003cafc8;
      fVar9 = (float)FUN_00371e50(DAT_003cafcc);
      fVar9 = fVar9 + DAT_003cafd0;
      fVar10 = (float)FUN_003738a8(uVar3);
      FUN_0036c684(fVar10 + DAT_003cafd4,fVar9,fVar8,uVar1,uVar1,uVar1,param_2,0);
      return;
    }
  }
  return;
}
