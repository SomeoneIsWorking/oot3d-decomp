// OoT3D decomp @ 0025fee4  name=FUN_0025fee4  size=116

void FUN_0025fee4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;

  iVar2 = DAT_0025ff58;
  uVar4 = 0;
  do {
    iVar1 = (**(code **)(iVar2 + uVar4 * 4))(param_1,param_2);
    if (iVar1 == 0) goto LAB_0025ff48;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  pcVar3 = *(code **)(DAT_0025ff5c + (*(ushort *)(param_1 + 0x1c) & 0xf) * 4);
  if ((pcVar3 == (code *)0x0) || (iVar2 = (*pcVar3)(param_1,param_2), iVar2 != 0)) {
    return;
  }
LAB_0025ff48:
  FUN_00374428(param_1);
  return;
}
