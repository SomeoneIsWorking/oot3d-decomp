// OoT3D decomp @ 0033c1b8  name=FUN_0033c1b8  size=80

void FUN_0033c1b8(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;

  iVar2 = DAT_0033c208;
  param_2 = param_2 + DAT_0033c208;
  param_1 = param_1 + DAT_0033c208;
  if (*(int *)(DAT_0033c208 + 4) == 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x13a2);
    *(undefined1 *)(param_1 + 0x13a2) = *(undefined1 *)(param_2 + 0x13a2);
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x138a);
    *(undefined1 *)(param_1 + 0x138a) = *(undefined1 *)(param_2 + 0x138a);
  }
  if (*(int *)(iVar2 + 4) == 0) {
    *(undefined1 *)(param_2 + 0x13a2) = uVar1;
  }
  else {
    *(undefined1 *)(param_2 + 0x138a) = uVar1;
  }
  FUN_0033c25c(1);
  return;
}
