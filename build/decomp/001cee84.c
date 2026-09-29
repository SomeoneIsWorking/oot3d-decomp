// OoT3D decomp @ 001cee84  name=FUN_001cee84  size=208

bool FUN_001cee84(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  if (((*DAT_001cef54 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_001cef54), iVar2 != 0)) {
    FUN_0036788c(DAT_001cef58);
  }
  uVar1 = DAT_001cef64;
  uVar3 = FUN_00344a4c(DAT_001cef64,*(uint *)(param_1 + 0x128) & 0xff,
                       *(undefined1 *)(*(int *)(param_1 + 300) + param_1 + 0x13c));
  iVar2 = FUN_003448d0(uVar1);
  if (iVar2 == 0) {
    FUN_00487a10(uVar1,1);
  }
  iVar2 = FUN_0048c338(uVar1);
  if (iVar2 == 0) {
    FUN_0040a7f4(uVar1,uVar3,0);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x104);
    *(undefined4 *)(param_1 + 0x104) = 2;
    *(undefined4 *)(param_1 + 0x108) = 2;
  }
  *(undefined1 *)(param_1 + 0x181) = 0;
  return iVar2 == 0;
}
