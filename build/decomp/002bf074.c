// OoT3D decomp @ 002bf074  name=FUN_002bf074  size=144

void FUN_002bf074(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 8);
  if (iVar1 != *(int *)(param_1 + 0x44)) {
    do {
      iVar3 = *(int *)(iVar1 + 0x18);
      FUN_002bd8c4(iVar3);
      *(undefined4 *)(*(int *)(iVar3 + 0x68) + 0x1c) = 1;
      iVar3 = *(int *)(iVar1 + 0xc);
      if (*(int *)(iVar1 + 0xc) == 0) {
        do {
          iVar2 = iVar1;
          iVar3 = *(int *)(iVar2 + 4);
          iVar1 = iVar3;
        } while (iVar2 == *(int *)(iVar3 + 0xc));
        iVar1 = iVar2;
        if (*(int *)(iVar2 + 0xc) != iVar3) {
          iVar1 = iVar3;
        }
      }
      else {
        do {
          iVar1 = iVar3;
          iVar3 = *(int *)(iVar1 + 8);
        } while (*(int *)(iVar1 + 8) != 0);
      }
    } while (iVar1 != *(int *)(param_1 + 0x44));
  }
  return;
}
