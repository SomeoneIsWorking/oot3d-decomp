// OoT3D decomp @ 00443590  name=FUN_00443590  size=1020

void FUN_00443590(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;

  iVar7 = DAT_0044398c;
  uVar8 = (uint)*(ushort *)(DAT_0044398c + 0x92);
  iVar6 = FUN_0033f428(0x108,8,0x34,0x28,1);
  uVar3 = DAT_00443998;
  iVar2 = DAT_00443994;
  iVar1 = DAT_00443990;
  iVar9 = iVar7 + -0x1500;
  if ((iVar6 != 0) &&
     (((*(uint *)(iVar9 + (uint)*(ushort *)(iVar7 + 0x92) * 0x1c + 0x104) &
       *(uint *)(DAT_00443994 + 0xc)) != 0 ||
      (((uint)*(byte *)(iVar9 + uVar8 + 0xc0) & *(uint *)(DAT_00443994 + 8)) != 0 &&
       *(char *)(DAT_00443990 + uVar8 * 8 + 3) != '\0')))) {
    FUN_002e666c(3);
    uVar5 = DAT_004439a0;
    uVar4 = DAT_0044399c;
    *(undefined4 *)(iVar1 + -0x30) = 0;
    FUN_0037547c(uVar3,0,4,uVar5,uVar5,uVar4);
  }
  iVar6 = FUN_0033f428(0x108,0x36,0x34,0x28,1);
  if ((iVar6 != 0) &&
     (((*(uint *)(iVar9 + (uint)*(ushort *)(iVar7 + 0x92) * 0x1c + 0x104) & *(uint *)(iVar2 + 0x10))
       != 0 || (((uint)*(byte *)(iVar9 + uVar8 + 0xc0) & *(uint *)(iVar2 + 8)) != 0 &&
                *(char *)(iVar1 + uVar8 * 8 + 4) != '\0')))) {
    FUN_002e666c(4);
    uVar5 = DAT_004439a0;
    uVar4 = DAT_0044399c;
    *(undefined4 *)(iVar1 + -0x30) = 1;
    FUN_0037547c(uVar3,0,4,uVar5,uVar5,uVar4);
  }
  iVar6 = FUN_0033f428(0x108,100,0x34,0x28,1);
  if ((iVar6 != 0) &&
     (((*(uint *)(iVar9 + (uint)*(ushort *)(iVar7 + 0x92) * 0x1c + 0x104) & *(uint *)(iVar2 + 0x14))
       != 0 || (((uint)*(byte *)(iVar9 + uVar8 + 0xc0) & *(uint *)(iVar2 + 8)) != 0 &&
                *(char *)(iVar1 + uVar8 * 8 + 5) != '\0')))) {
    FUN_002e666c(5);
    uVar5 = DAT_004439a0;
    uVar4 = DAT_0044399c;
    *(undefined4 *)(iVar1 + -0x30) = 2;
    FUN_0037547c(uVar3,0,4,uVar5,uVar5,uVar4);
  }
  iVar6 = FUN_0033f428(0x108,0x92,0x34,0x28,1);
  if ((iVar6 != 0) &&
     (((*(uint *)(iVar9 + (uint)*(ushort *)(iVar7 + 0x92) * 0x1c + 0x104) & *(uint *)(iVar2 + 0x18))
       != 0 || (((uint)*(byte *)(iVar9 + uVar8 + 0xc0) & *(uint *)(iVar2 + 8)) != 0 &&
                *(char *)(iVar1 + uVar8 * 8 + 6) != '\0')))) {
    FUN_002e666c(6);
    uVar5 = DAT_004439a0;
    uVar4 = DAT_0044399c;
    *(undefined4 *)(iVar1 + -0x30) = 3;
    FUN_0037547c(uVar3,0,4,uVar5,uVar5,uVar4);
  }
  iVar6 = FUN_0033f428(0x108,0xc0,0x34,0x28,1);
  if ((iVar6 != 0) &&
     (((*(uint *)(iVar9 + (uint)*(ushort *)(iVar7 + 0x92) * 0x1c + 0x104) & *(uint *)(iVar2 + 0x1c))
       != 0 || (((uint)*(byte *)(iVar9 + uVar8 + 0xc0) & *(uint *)(iVar2 + 8)) != 0 &&
                *(char *)(iVar1 + uVar8 * 8 + 7) != '\0')))) {
    FUN_002e666c(7);
    uVar5 = DAT_004439a0;
    uVar4 = DAT_0044399c;
    *(undefined4 *)(iVar1 + -0x30) = 4;
    FUN_0037547c(uVar3,0,4,uVar5,uVar5,uVar4);
  }
  iVar7 = FUN_0033f428(10,0xc,0x2a,0x2a,1);
  uVar5 = DAT_004439a0;
  uVar4 = DAT_0044399c;
  if (iVar7 != 0) {
    *(undefined4 *)(iVar1 + -0x30) = 5;
    FUN_0037547c(uVar3,0,4,uVar5,uVar5,uVar4);
  }
  iVar7 = FUN_0033f428(10,0x3e,0x2a,0x2a,1);
  uVar5 = DAT_004439a0;
  uVar4 = DAT_0044399c;
  if (iVar7 != 0) {
    *(undefined4 *)(iVar1 + -0x30) = 6;
    FUN_0037547c(uVar3,0,4,uVar5,uVar5,uVar4);
  }
  iVar7 = FUN_0033f428(10,0x7a,0x2a,0x2a,1);
  uVar5 = DAT_004439a0;
  uVar4 = DAT_0044399c;
  if (iVar7 != 0) {
    *(undefined4 *)(iVar1 + -0x30) = 7;
    FUN_0037547c(uVar3,0,4,uVar5,uVar5,uVar4);
  }
  return;
}
