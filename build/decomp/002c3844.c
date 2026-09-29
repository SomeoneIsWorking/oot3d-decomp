// OoT3D decomp @ 002c3844  name=FUN_002c3844  size=212

void FUN_002c3844(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = DAT_002c3918;
  if (*(char *)(param_2 + 0x1a9) != '\0') {
    iVar2 = FUN_002c40f8(param_2);
    if (iVar2 < 0) {
      FUN_0036f59c(param_2,iVar1);
      *(uint *)(param_2 + 0x1714) = *(uint *)(param_2 + 0x1714) | 8;
    }
    else {
      FUN_0036f59c(param_2,iVar1 + 0xbe);
      *(uint *)(param_2 + 0x1714) = *(uint *)(param_2 + 0x1714) | 8;
    }
  }
  FUN_0034d688(param_1,param_2,*(undefined1 *)(param_2 + 0x1aa));
  iVar2 = FUN_002c40f8(param_2,(int)*(char *)(param_2 + 0x1a9));
  if (iVar2 < 0) {
    if (*(char *)(param_2 + 0x1a9) != '\0') {
      FUN_0036f59c(param_2,iVar1);
      *(uint *)(param_2 + 0x1714) = *(uint *)(param_2 + 0x1714) | 8;
      return;
    }
  }
  else {
    FUN_0036f59c(param_2,DAT_002c391c);
    *(uint *)(param_2 + 0x1714) = *(uint *)(param_2 + 0x1714) | 8;
  }
  return;
}
