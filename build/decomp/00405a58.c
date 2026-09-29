// OoT3D decomp @ 00405a58  name=FUN_00405a58  size=156

void FUN_00405a58(char *param_1)

{
  int iVar1;
  int iVar2;

  if (*param_1 != '\0') {
    while (*(int *)(param_1 + 4) != 0) {
      iVar1 = *(int *)(param_1 + 8);
      iVar2 = iVar1 + -0x58;
      FUN_0030a474(iVar2);
      if (*(code **)(iVar1 + -0x4c) != (code *)0x0) {
        (**(code **)(iVar1 + -0x4c))(iVar2,1,*(undefined4 *)(iVar1 + -0x48));
      }
      FUN_0030a40c(iVar2);
    }
    while (*(int *)(param_1 + 0x10) != 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      FUN_0030c964(param_1 + 0x10);
      FUN_00407bf0(iVar1 + -0x58);
    }
    *param_1 = '\0';
  }
  return;
}
