// OoT3D decomp @ 003710bc  name=FUN_003710bc  size=188

void FUN_003710bc(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;

  if (param_2 == 0) {
    return;
  }
  iVar1 = *(int *)(param_2 + 4);
  if (*(char *)(param_2 + 0xc) != '\0') {
    FUN_00358778(iVar1,(int)(char)*(undefined4 *)(param_2 + 0x38),
                 (int)(char)*(undefined4 *)(param_2 + 0x30),param_2 + 0x10);
  }
  if (*(char *)(param_2 + 0xd) != '\0') {
    FUN_00358778(iVar1,(int)(char)*(undefined4 *)(param_2 + 0x3c),
                 (int)(char)*(undefined4 *)(param_2 + 0x34),param_2 + 0x20);
  }
  *(undefined1 *)(iVar1 + 0xac) = 1;
  FUN_003721e0(iVar1,param_3);
  FUN_00372170(iVar1,0);
  if (*(char *)(param_2 + 0xe) != '\0') {
    FUN_00373bec(param_2 + 0x40);
    return;
  }
  return;
}
