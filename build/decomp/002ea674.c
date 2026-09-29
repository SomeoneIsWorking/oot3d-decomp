// OoT3D decomp @ 002ea674  name=FUN_002ea674  size=84

int FUN_002ea674(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;

  iVar2 = 0;
  do {
    iVar2 = FUN_002ea6c8(param_1,iVar2);
    if (iVar2 == 0) {
      return 0;
    }
    bVar3 = param_2 <= *(uint *)(iVar2 + 0x18);
    if (*(uint *)(iVar2 + 0x18) <= param_2) {
      bVar3 = *(uint *)(iVar2 + 0x1c) <= param_2;
    }
  } while (bVar3);
  iVar1 = FUN_002ea674(iVar2 + 0xc,param_2);
  if (iVar1 == 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}
