// OoT3D decomp @ 002c4640  name=FUN_002c4640  size=156

int FUN_002c4640(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x188) != '\0') {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 0x180);
  uVar3 = *(uint *)(param_1 + 0x184);
  if (uVar2 < uVar3) {
    if (uVar3 < param_2 + uVar2) {
      return 0;
    }
    *(uint *)(param_1 + 0x180) = param_2 + uVar2;
    iVar1 = *(int *)(param_1 + 0x178) + uVar2 * 4;
  }
  else if (*(uint *)(param_1 + 0x17c) < uVar2 + param_2) {
    if (uVar3 < param_2) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x178);
    *(uint *)(param_1 + 0x180) = param_2;
  }
  else {
    *(uint *)(param_1 + 0x180) = uVar2 + param_2;
    iVar1 = *(int *)(param_1 + 0x178) + uVar2 * 4;
  }
  if ((iVar1 != 0) && (*(uint *)(param_1 + 0x180) == uVar3)) {
    *(undefined *)(param_1 + 0x188) = 1;
  }
  return iVar1;
}

