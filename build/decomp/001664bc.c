// OoT3D decomp @ 001664bc  name=FUN_001664bc  size=764

void FUN_001664bc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  uint in_fpscr;

  FUN_003510b0(param_1,DAT_001667b8);
  uVar1 = DAT_001667c4;
  FUN_00372d4c(DAT_001667c4,DAT_001667bc,param_1 + 0xbc,DAT_001667c0);
  FUN_00372f38(param_1,param_2,param_1 + 0x8dc,0,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,1,param_1 + 0x228,param_1 + 0x534,0xf);
  FUN_0035c358(param_1 + 0x8e0,param_1 + 0x1a4,0xffffffff,0,0xffffffff);
  uVar4 = FUN_0036a924(param_1,param_2,1,0x59);
  *(undefined4 *)(param_1 + 0xaac) = uVar4;
  uVar4 = DAT_001667cc;
  if (((*DAT_001667c8 & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_001667c8), puVar2 = DAT_001667d0, iVar5 != 0)) {
    *DAT_001667d0 = uVar4;
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
    puVar2[3] = uVar1;
    puVar2[4] = uVar1;
    puVar2[5] = uVar4;
    puVar2[6] = uVar1;
    puVar2[7] = uVar1;
    puVar2[8] = uVar1;
    puVar2[9] = uVar1;
    puVar2[10] = uVar4;
    puVar2[0xb] = uVar1;
  }
  FUN_00372224(param_1 + 0xab0,DAT_001667d0);
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0x844,param_1,DAT_001667d4);
  FUN_00350318(param_1 + 0xa0,DAT_001667dc,DAT_001667d8);
  FUN_00376340(uVar1,uVar1,uVar1,param_2,param_1,4);
  puVar2 = DAT_001667e0;
  uVar6 = FUN_0036ae14(param_1 + 0x1a4,*DAT_001667e0);
  uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(uVar4,uVar1,uVar6,puVar2[3],param_1 + 0x1a4,*puVar2,*(undefined1 *)(puVar2 + 2));
  uVar1 = DAT_001667e4;
  *(undefined4 *)(param_1 + 0x8ac) = 2;
  *(uint *)(param_1 + 0x8a8) = *(ushort *)(param_1 + 0x1c) & 0xff;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  uVar1 = DAT_001667e8;
  *(undefined4 *)(param_1 + 0x8a4) = 0;
  *(undefined4 *)(param_1 + 0x8d4) = 0;
  *(undefined4 *)(param_1 + 0x8bc) = uVar1;
  iVar5 = DAT_001667f0;
  uVar7 = (uint)*(char *)(param_1 + 0x1e);
  *(uint *)(param_1 + 0x8c0) = uVar7;
  *(undefined1 *)(param_1 + 0x1f) = 2;
  uVar3 = DAT_001667ec;
  bVar9 = *(short *)(param_2 + 0x104) == 99;
  if (bVar9) {
    uVar7 = *(uint *)(iVar5 + 8);
  }
  iVar8 = param_1 + 0x8d4;
  if ((bVar9 && uVar7 == DAT_001667ec) || (*(ushort *)(iVar5 + 0xc) - 0x3556 < 0xa001)) {
    *(undefined4 *)(param_1 + 0x8a0) = 1;
    FUN_00353aa4(param_1,0,iVar8);
    *(undefined4 *)(param_1 + 0x840) = DAT_001667f4;
  }
  else {
    *(undefined4 *)(param_1 + 0x8a0) = 0;
    FUN_00353aa4(param_1,2,iVar8);
    *(undefined4 *)(param_1 + 0x840) = DAT_001667f8;
  }
  uVar7 = (uint)*(ushort *)(param_2 + 0x104);
  bVar9 = uVar7 == 99;
  if (bVar9) {
    uVar7 = *(uint *)(iVar5 + 8);
  }
  if ((bVar9 && uVar7 == uVar3) && ((*(ushort *)(DAT_001667fc + 0xe) & 0x800) != 0)) {
    *(undefined4 *)(param_1 + 0x28) = DAT_00166800;
    *(undefined4 *)(param_1 + 0x30) = DAT_00166804;
    FUN_00353aa4(param_1,4,iVar8);
    *(undefined4 *)(param_1 + 0x840) = DAT_00166808;
    *(undefined4 *)(param_1 + 0x8a0) = 0;
  }
  return;
}
