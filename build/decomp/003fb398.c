// OoT3D decomp @ 003fb398  name=FUN_003fb398  size=384

void FUN_003fb398(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;

  if (*(char *)((uint)*(byte *)(iRam003fb3e0 + 7) + iRam003fb3e4) == '\a') {
    uVar3 = 0x1c;
  }
  else {
    uVar3 = 0x1d;
  }
  *(undefined1 *)(param_1 + 0x1ac) = uVar3;
  iVar4 = func_0x0033b548(param_1,(int)*(char *)(param_1 + 0x1ac));
  iVar2 = iRam0032c400;
  iVar1 = iRam0032c3fc;
  iVar4 = iVar4 * 5 + iRam0032c3f8;
  *(undefined1 *)(param_1 + 0x1b4) = *(undefined1 *)(iVar4 + 1);
  *(undefined1 *)(param_1 + 0x1b5) = *(undefined1 *)(iVar4 + 2);
  *(undefined1 *)(param_1 + 0x1b6) = *(undefined1 *)(iVar4 + 3);
  *(int *)(param_1 + 0x1c0) =
       *(int *)(iVar1 + (uint)*(byte *)(iVar4 + 1) * 4) + *(int *)(iVar2 + 4) * 4;
  *(int *)(param_1 + 0x1bc) =
       *(int *)(iVar1 + (uint)*(byte *)(iVar4 + 2) * 4) + *(int *)(iVar2 + 4) * 4;
  *(int *)(param_1 + 0x1c4) =
       *(int *)(iVar1 + (uint)*(byte *)(iVar4 + 3) * 4) + *(int *)(iVar2 + 4) * 4;
  *(int *)(param_1 + 0x1c8) =
       *(int *)(iVar1 + (uint)*(byte *)(iVar4 + 4) * 4) + *(int *)(iVar2 + 4) * 4;
  if ((*(uint *)(iRam0032c404 + param_1) & 0x400000) == 0) {
    return;
  }
  if ((-1 < *(char *)(param_1 + 0x1ac)) &&
     (*(char *)(param_1 + 0x1ac) != *(char *)(param_1 + 0x1a9))) {
    return;
  }
  if ((int)*(char *)(param_1 + 0x1a9) - 5U < 3) {
    return;
  }
  if ((*(int *)(iVar2 + 4) != 0) && (*(char *)(param_1 + 0x1a6) == '\x02')) {
    return;
  }
  *(undefined1 *)(param_1 + 0x1b5) = 10;
  *(int *)(param_1 + 0x1bc) = *(int *)(iVar1 + 0x28) + *(int *)(iVar2 + 4) * 4;
  if (*(char *)(param_1 + 0x1b6) == '\x12') {
    uVar3 = 0x10;
  }
  else {
    if (*(char *)(param_1 + 0x1b6) != '\x13') goto LAB_0032c3cc;
    uVar3 = 0x11;
  }
  *(undefined1 *)(param_1 + 0x1b6) = uVar3;
LAB_0032c3cc:
  *(int *)(param_1 + 0x1c4) =
       *(int *)(iVar1 + (uint)*(byte *)(param_1 + 0x1b6) * 4) + *(int *)(iVar2 + 4) * 4;
  *(undefined1 *)(param_1 + 0x1b3) = 2;
  *(undefined1 *)(param_1 + 0x1ac) = 0xff;
  return;
}
