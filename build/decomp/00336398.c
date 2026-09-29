// OoT3D decomp @ 00336398  name=FUN_00336398  size=144

undefined4 FUN_00336398(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;

  if (*(char *)(param_1 + 0x1749) != '\0' && *(char *)(param_1 + 0x1749) != '\x02') {
    return 0;
  }
  iVar1 = FUN_003518cc();
  if ((iVar1 == 0) && ((*(uint *)(param_1 + 0x1710) & DAT_00336428) == 0)) {
    uVar2 = FUN_0036c5bc(param_2,0);
    iVar1 = FUN_00351878(uVar2,7);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0x1749) = 2;
      iVar1 = DAT_00336430;
      *(undefined4 *)(DAT_00336430 + 0xcc) = DAT_0033642c;
      *(undefined1 *)(iVar1 + 0xd4) = 1;
      return 0;
    }
  }
  return 1;
}
