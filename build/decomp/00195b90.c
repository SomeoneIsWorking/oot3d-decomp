// OoT3D decomp @ 00195b90  name=FUN_00195b90  size=288

undefined4 FUN_00195b90(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;

  uVar5 = 1;
  uVar1 = FUN_003769d8(param_1 + 0x28a0);
  iVar2 = DAT_00195cd4;
  switch(uVar1) {
  case 2:
    uVar4 = (uint)*(ushort *)(DAT_00195ccc + param_2);
    if (uVar4 == DAT_00195cd0) {
      *(ushort *)(DAT_00195cd4 + 0xf20) = *(ushort *)(DAT_00195cd4 + 0xf20) | 0x20;
      return 0;
    }
    if ((int)uVar4 < (int)DAT_00195cd0) {
      if (uVar4 == 0x2041) {
        *(ushort *)(DAT_00195cd4 + 0xf20) = *(ushort *)(DAT_00195cd4 + 0xf20) | 0x10;
        *(ushort *)(iVar2 + 0xeee) = *(ushort *)(iVar2 + 0xeee) | 1;
        return 0;
      }
      if (uVar4 == 0x2043) {
        return 1;
      }
      if (uVar4 != 0x2047) {
        return 0;
      }
      uVar3 = *(ushort *)(DAT_00195cd4 + 0xeee) | 0x20;
    }
    else {
      if (uVar4 - DAT_00195cd0 != 1) {
        if (uVar4 - DAT_00195cd0 != 0x19) {
          return 0;
        }
        goto LAB_00195c88;
      }
      uVar3 = *(ushort *)(DAT_00195cd4 + 0xeee) | 0x40;
    }
    uVar5 = 0;
    *(ushort *)(DAT_00195cd4 + 0xeee) = uVar3;
    break;
  case 4:
  case 5:
    iVar2 = FUN_00346964(param_1);
    if (iVar2 == 0) {
      return 1;
    }
LAB_00195c88:
    uVar5 = 2;
    break;
  case 6:
    iVar2 = FUN_0034696c(param_1,0);
    if (iVar2 != 0) {
      uVar5 = 3;
    }
  }
  return uVar5;
}
