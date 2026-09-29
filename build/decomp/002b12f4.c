// OoT3D decomp @ 002b12f4  name=FUN_002b12f4  size=764

void FUN_002b12f4(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  uint in_fpscr;

  iVar6 = DAT_002b15f0;
  if (*(int *)(DAT_002b15f0 + 4) != 0) {
    sVar1 = *(short *)(param_2 + 0x104);
    uVar5 = *(ushort *)(DAT_002b15f4 + param_1);
    if (sVar1 == 0x2a) {
      if (*(int *)(DAT_002b15f0 + 0x10) == 1) {
        *(ushort *)(param_1 + 0xac4) = uVar5 | 2;
      }
    }
    else {
      if (sVar1 == 0x30) {
        uVar5 = uVar5 | 4;
      }
      else {
        if (sVar1 != 0x52 || *(int *)(DAT_002b15f0 + 0x10) != 0) goto LAB_002b138c;
        *(ushort *)(param_1 + 0xac4) = uVar5 | 1;
        uVar5 = *(ushort *)(DAT_002b15f8 + (*(ushort *)(param_1 + 0x1c) & 3) * 2) | uVar5 | 1;
      }
      *(ushort *)(param_1 + 0xac4) = uVar5;
    }
  }
LAB_002b138c:
  if ((*(ushort *)(param_1 + 0xac4) & 7) == 0) {
    FUN_00374428(param_1);
  }
  uVar3 = DAT_002b1604;
  uVar2 = DAT_002b1600;
  uVar7 = DAT_002b15fc;
  if (*(int *)(iVar6 + 0x10) == 1) {
    *(ushort *)(param_1 + 0xac4) = *(ushort *)(param_1 + 0xac4) | 8;
  }
  FUN_00372d4c(uVar3,uVar7,param_1 + 0xbc,uVar2);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar6 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_002b1608 + iVar6) != 0)
     ) {
    iVar6 = iVar6 + 0x3a5c;
  }
  else {
    iVar6 = 0;
  }
  uVar7 = ObjectBankArchive_00358ef8(iVar6 + 0x10,0);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  FUN_00372f38(param_1,param_2,param_1 + 0xb00,0,0);
  FUN_00353e78(iVar6 + 0x10,param_2,param_1 + 0x1a4,uVar7,*(undefined4 *)(param_1 + 0x178),2,
               param_1 + 0x228,param_1 + 0x638,0x14);
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0xa4c,param_1,DAT_002b160c);
  FUN_00350318(param_1 + 0xa0,DAT_002b1614,DAT_002b1610);
  puVar4 = DAT_002b1618;
  uVar7 = FUN_0036ae14(param_1 + 0x1a4,*DAT_002b1618);
  uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_002b161c,uVar3,uVar7,puVar4[3],param_1 + 0x1a4,*puVar4,
               *(undefined1 *)(puVar4 + 2));
  FUN_00376340(uVar3,uVar3,uVar3,param_2,param_1,4);
  *(undefined1 *)(param_1 + 0x1f) = 6;
  uVar7 = DAT_002b1620;
  *(undefined4 *)(param_1 + 0xab0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  *(undefined4 *)(param_1 + 0xaac) = uVar7;
  *(undefined4 *)(param_1 + 0xfc) = DAT_002b1624;
  *(undefined2 *)(param_1 + 0xad4) = 0;
  *(undefined2 *)(param_1 + 0xad2) = 0;
  *(undefined2 *)(param_1 + 0xad0) = 0;
  *(undefined2 *)(param_1 + 0xada) = 0;
  *(undefined2 *)(param_1 + 0xad8) = 0;
  *(undefined2 *)(param_1 + 0xad6) = 0;
  if ((*(ushort *)(param_1 + 0xac4) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x70) = DAT_002b1628;
  }
  if ((*(ushort *)(param_1 + 0xac4) & 0x10) != 0) {
    FUN_0034b760(param_1,3,param_1 + 0xab0);
    *(undefined4 *)(param_1 + 0xa48) = DAT_002b162c;
    return;
  }
  if ((*(ushort *)(param_1 + 0xac4) & 8) == 0) {
    FUN_0034b760(param_1,0,param_1 + 0xab0);
  }
  else {
    bVar8 = (*(ushort *)(param_1 + 0x1c) & 3) != 1;
    uVar5 = 1;
    if (bVar8) {
      uVar5 = 3;
    }
    if (bVar8 && (uVar5 & ~*(ushort *)(param_1 + 0x1c)) != 0) {
      FUN_0034b760(param_1,1,param_1 + 0xab0);
    }
    else {
      FUN_0034b760(param_1,5,param_1 + 0xab0);
      *(ushort *)(param_1 + 0xac4) = *(ushort *)(param_1 + 0xac4) | 0x800;
    }
  }
  uVar7 = DAT_002b1630;
  *(ushort *)(param_1 + 0xac4) = *(ushort *)(param_1 + 0xac4) | 0x100;
  *(undefined4 *)(param_1 + 0xa48) = uVar7;
  return;
}
