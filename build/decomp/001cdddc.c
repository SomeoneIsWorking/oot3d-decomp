// OoT3D decomp @ 001cdddc  name=FUN_001cdddc  size=148

void FUN_001cdddc(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;

  iVar3 = DAT_001cde70 + *(char *)(param_1 + 0x2226) * 0x18;
  if (*(char *)(param_1 + 0x2227) != '\0') {
    uVar1 = *(undefined1 *)(param_1 + 0x2a6);
    iVar2 = FUN_003518cc(param_1);
    if (iVar2 == 0) {
      iVar3 = *(int *)(iVar3 + 4);
    }
    else {
      iVar3 = *(int *)(iVar3 + 8);
    }
    FUN_0034bbfc(param_1);
    *(undefined1 *)(param_1 + 0x2a6) = 0;
    if ((iVar3 == 0x15a) && (*(char *)(param_1 + 0x1b3) != '\x03')) {
      iVar3 = 0x13c;
    }
    FUN_0033f7ac(param_1,iVar3,param_2);
    *(undefined1 *)(param_1 + 0x2a6) = uVar1;
    *(byte *)(param_1 + 0x172a) = *(byte *)(param_1 + 0x172a) | 8;
  }
  return;
}
