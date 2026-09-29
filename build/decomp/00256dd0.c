// OoT3D decomp @ 00256dd0  name=FUN_00256dd0  size=208

void FUN_00256dd0(int param_1,int param_2)

{
  short sVar1;
  undefined1 uVar2;
  int iVar3;

  iVar3 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar3 != 6) || (iVar3 = FUN_00346964(param_2), iVar3 == 0)) {
    return;
  }
  FUN_00376a60(10);
  iVar3 = DAT_00256ea0;
  *(ushort *)(DAT_00256ea0 + 0xe) = *(ushort *)(DAT_00256ea0 + 0xe) | 0x200;
  sVar1 = *(short *)(param_1 + 0x1c);
  if (sVar1 == 0) {
    if ((*(ushort *)(iVar3 + 0xe) & 0x200) != 0) {
      *(undefined1 *)(param_1 + 0x123) = 0x41;
      goto LAB_00256e64;
    }
    if ((*(ushort *)(iVar3 + 10) & 0x40) != 0) {
      uVar2 = 0x40;
      goto LAB_00256e60;
    }
  }
  else if (sVar1 != 1 && sVar1 != 2) {
    uVar2 = 0x36;
LAB_00256e60:
    *(undefined1 *)(param_1 + 0x123) = uVar2;
    goto LAB_00256e64;
  }
  *(undefined1 *)(param_1 + 0x123) = 0x3f;
LAB_00256e64:
  FUN_00345fcc(param_2);
  FUN_00376a78(param_2,0x2c);
  FUN_0036be34(param_2,DAT_00256ea4);
  FUN_003729b8(param_1,0x16);
  return;
}
