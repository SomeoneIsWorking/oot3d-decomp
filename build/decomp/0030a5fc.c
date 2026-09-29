// OoT3D decomp @ 0030a5fc  name=FUN_0030a5fc  size=108

void FUN_0030a5fc(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if (*(char *)(param_1 + 0x25c) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x25c) = 1;
  *(undefined1 *)(param_1 + 0x25d) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0xffffffff;
  iVar2 = 0;
  puVar1 = (undefined4 *)(param_1 + 0x214);
  iVar4 = 4;
  *(undefined4 *)(param_1 + 0x218) = 0;
  do {
    iVar3 = param_1 + iVar2 * 8;
    puVar1[2] = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x218) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = 0xffffffff;
    iVar4 = iVar4 + -1;
    iVar2 = iVar2 + 2;
    *(undefined4 *)(iVar3 + 0x220) = 0;
  } while (iVar4 != 0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}
