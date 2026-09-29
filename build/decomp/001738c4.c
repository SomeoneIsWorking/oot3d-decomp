// OoT3D decomp @ 001738c4  name=FUN_001738c4  size=336

int FUN_001738c4(int param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  iVar3 = DAT_00173a14;
  sVar2 = *(short *)(param_1 + 0x104);
  if (sVar2 == 0x28) {
    *(undefined1 *)(param_2 + 0x478) = 0;
    *(undefined1 *)(param_2 + 0x479) = 0;
    iVar6 = DAT_00173a44;
    if ((*(ushort *)(iVar3 + 0xf4) & 1) != 0) {
      iVar6 = DAT_00173a48;
    }
    return iVar6;
  }
  if (sVar2 == 0x55) {
    iVar5 = FUN_0036bba8(param_1,0x11);
    iVar4 = DAT_00173a24;
    iVar6 = DAT_00173a20;
    if (iVar5 == 0) {
      *(undefined1 *)(param_2 + 0x478) = 0;
      *(undefined1 *)(param_2 + 0x479) = 0;
      if ((*(uint *)(iVar6 + 0xbc) & *(uint *)(iVar4 + 0x48)) != 0) {
        return DAT_00173a28;
      }
      if ((*(ushort *)(iVar3 + 0xec) & 0x10) != 0) {
        return DAT_00173a2c;
      }
      uVar1 = *(ushort *)(iVar6 + 0x8a);
      if (((ushort)((DAT_00173a30[1] & uVar1) >> DAT_00173a34[1]) == 1) &&
         ((ushort)((uVar1 & *DAT_00173a30) >> *DAT_00173a34) == 1)) {
        return DAT_00173a38;
      }
      iVar6 = DAT_00173a3c;
      if ((*(ushort *)(iVar3 + 0x110) & 0x1000) != 0) {
        iVar6 = DAT_00173a40;
      }
      return iVar6;
    }
  }
  else {
    if (sVar2 != 0x5b) {
      return 0;
    }
    *(undefined1 *)(param_2 + 0x478) = 0;
    *(undefined1 *)(param_2 + 0x479) = 0;
    if ((*(ushort *)(iVar3 + 0xf4) & 0x100) == 0) {
      if ((*(ushort *)(iVar3 + 0xec) & 0x400) != 0) {
        return DAT_00173a4c;
      }
      iVar6 = DAT_00173a50;
      if ((*(ushort *)(iVar3 + 0x112) & 0x20) != 0) {
        iVar6 = DAT_00173a54;
      }
      return iVar6;
    }
    iVar5 = DAT_00173a18;
    if ((*(ushort *)(iVar3 + 0x112) & 0x200) != 0) {
      iVar5 = DAT_00173a1c;
    }
  }
  return iVar5;
}
