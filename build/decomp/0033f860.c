// OoT3D decomp @ 0033f860  name=FUN_0033f860  size=188

void FUN_0033f860(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;

  iVar2 = DAT_0033f924;
  iVar1 = DAT_0033f920;
  if ((*(uint *)(DAT_0033f91c + param_1) & 0x400000) == 0) {
    return;
  }
  if ((-1 < *(char *)(param_1 + 0x1ac)) &&
     (*(char *)(param_1 + 0x1ac) != *(char *)(param_1 + 0x1a9))) {
    return;
  }
  if ((int)*(char *)(param_1 + 0x1a9) - 5U < 3) {
    return;
  }
  if ((*(int *)(DAT_0033f920 + 4) != 0) && (*(char *)(param_1 + 0x1a6) == '\x02')) {
    return;
  }
  *(undefined1 *)(param_1 + 0x1b5) = 10;
  *(int *)(param_1 + 0x1bc) = *(int *)(iVar2 + 0x28) + *(int *)(iVar1 + 4) * 4;
  if (*(char *)(param_1 + 0x1b6) == '\x12') {
    uVar3 = 0x10;
  }
  else {
    if (*(char *)(param_1 + 0x1b6) != '\x13') goto LAB_0033f8f4;
    uVar3 = 0x11;
  }
  *(undefined1 *)(param_1 + 0x1b6) = uVar3;
LAB_0033f8f4:
  *(int *)(param_1 + 0x1c4) =
       *(int *)(iVar2 + (uint)*(byte *)(param_1 + 0x1b6) * 4) + *(int *)(iVar1 + 4) * 4;
  *(undefined1 *)(param_1 + 0x1b3) = 2;
  *(undefined1 *)(param_1 + 0x1ac) = 0xff;
  return;
}
